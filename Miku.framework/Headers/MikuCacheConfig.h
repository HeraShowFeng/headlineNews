//
//  MikuCacheConfig.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MikuCacheConfig : NSObject

@property (nonatomic, strong) NSString * dir;
@property (nonatomic, strong) NSString * DSN;
@property (nonatomic, assign) int64_t cacheSize;

@end

NS_ASSUME_NONNULL_END
