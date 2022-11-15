//
//  MikuManager.m
//  Douyin
//
//  Created by 冯文秀 on 2022/11/11.
//  Copyright © 2022 Qiao Shi. All rights reserved.
//

#import "MikuManager.h"

#define APP_ID @"hsh9rn0vp94zs8uk"
#define APP_SALT @"pawyayxnmh9efbnvmrye0091paetcaax"

@interface MikuManager ()

@property (nonatomic, strong) NSMutableDictionary *taskDic;
@property (nonatomic, assign) BOOL useMikuEnabled;

@end

@implementation MikuManager

+ (MikuManager *)shareInstance {
    static MikuManager * single = nil;
    static dispatch_once_t onceToken ;
    
    dispatch_once(&onceToken, ^{
        single = [[MikuManager alloc]init];
    }) ;
    return single;
}

- (instancetype)init{
    if(self =[super init]){
        _taskDic = [[NSMutableDictionary alloc] init];
        
        MikuConfig * config = [[MikuConfig alloc] init];
        config.cacheConfig.cacheSize = INT64_MAX;
        
        _client = [MikuClient createClient:APP_ID appSalt:APP_SALT config:config];
    }
    return self;
}

- (NSString *)getProxyURL:(NSString *)urlStr {
    if ([urlStr isEqualToString:@""] || urlStr.length == 0) {
        return nil;
    }
    
    NSString *mikuUrl = urlStr;
    if (_useMikuEnabled) {
        mikuUrl = [_client makeProxyURL:urlStr].absoluteString;
    }
    return mikuUrl;
}

- (void)setMikuEnabled:(BOOL)useMikuEnabled {
    _useMikuEnabled = useMikuEnabled;
    if (!useMikuEnabled) {
        [self removeTempFile];
    }
}

- (void)close:(NSString *)urlStr {
    MikuTask *task = [_taskDic objectForKey:urlStr];
    if (task) {
        [_taskDic removeObjectForKey:urlStr];
    }
}

- (void)removeTempFile {
    [_client clearCache];
    
    for (NSString * key in _taskDic) {
        MikuTask *task = _taskDic[key];
        [task cancel];
    }
    [_taskDic removeAllObjects];
}

@end
