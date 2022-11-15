//
//  MikuCache.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuCacheConfig.h"
#import "MikuItem.h"

@class MikuRange;
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,MikuCacheErrorCode) {
    MikuInvalidSizeToCache                        = 10001,
};

@interface MikuCache : NSObject

+ (MikuCache *)open:(NSString *)dir
             config:(MikuCacheConfig *)config;

- (int)close;

- (void)setCacheSize:(int64_t)cacheSize;

- (MikuItem *)lookup:(NSString *)key;

- (int)setContent:(NSString *)key
             etag:(NSString *)etag
         fileSize:(int64_t)fileSize
              udt:(int64_t)udt
           ranges:(NSString *)ranges
             type:(NSString *)type
         response:(NSString *)response;

- (int)setRanges:(NSString *)key
           ranges:(NSString *)ranges
        response:(NSString *)response;

- (int)setUsedTime:(NSString *)key
          usedTime:(int64_t)usedTime;

- (NSError *)applyCacheSize:(int64_t)size;

//写权限 
- (int)openFile:(NSString *)key
       fileSize:(int64_t)fileSize;


@end

NS_ASSUME_NONNULL_END
