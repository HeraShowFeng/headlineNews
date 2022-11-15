//
//  MikuClient.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuConfig.h"

@class MikuRange;
NS_ASSUME_NONNULL_BEGIN
@class MikuTask;

@interface MikuClient : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (MikuClient *)createClient:(NSString *)appID
                     appSalt:(nonnull NSString *)appSalt
                      config:(nonnull MikuConfig *)config;

- (void)setCacheSize:(int64_t)cacheSize;

- (void)setWorkers:(int)count;

- (MikuTask *)createTask:(NSString *)url
                   range:(MikuRange *)range;

- (NSURL *)makeProxyURL:(NSString *)url;

- (void)clearCache;

- (void)close;

@end

NS_ASSUME_NONNULL_END
