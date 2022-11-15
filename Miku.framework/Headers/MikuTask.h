//
//  MikuTask.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

@class MikuResult;
NS_ASSUME_NONNULL_BEGIN

@interface MikuTask : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype) init NS_UNAVAILABLE;

- (void)setPriority:(int)priority;

- (void)setWifiRequired:(BOOL)wifiRequired;

- (MikuResult *)start;

- (void)cancel;

@end

NS_ASSUME_NONNULL_END
