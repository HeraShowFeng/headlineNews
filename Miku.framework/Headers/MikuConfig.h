//
//  MikuConfig.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuDNSResolver.h"
#import "MikuHttpClient.h"
#import "MikuCacheConfig.h"
#import "MikuCacheUrl.h"

NS_ASSUME_NONNULL_BEGIN

@interface MikuConfig : NSObject

@property (nonatomic, strong) MikuDNSResolver *NS;
@property (nonatomic, assign) BOOL httpDNS;
@property (nonatomic, strong) MikuCacheConfig *cacheConfig;
@property (nonatomic, strong) MikuCacheUrl *cacheUrl;
@property (nonatomic, assign) int workers;

@end

NS_ASSUME_NONNULL_END
