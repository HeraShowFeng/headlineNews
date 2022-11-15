//
//  MikuDNSResolver.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuResolveResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface MikuDNSResolver : NSObject

- (MikuResolveResult *)resolve:(NSString *)domain;

@end

NS_ASSUME_NONNULL_END
