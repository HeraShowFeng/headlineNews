//
//  MikuManager.h
//  Douyin
//
//  Created by 冯文秀 on 2022/11/11.
//  Copyright © 2022 Qiao Shi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Miku/Miku.h>

NS_ASSUME_NONNULL_BEGIN

@interface MikuManager : NSObject

@property (nonatomic, strong) MikuClient *client;

+ (MikuManager *)shareInstance;
- (NSString *)getProxyURL:(NSString *)urlStr;
- (void)setMikuEnabled:(BOOL)useMikuEnabled;
- (void)close:(NSString *)urlStr;
- (void)removeTempFile;

@end

NS_ASSUME_NONNULL_END
