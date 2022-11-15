//
//  MikuIPGroup.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

#define kMikuERR_OK 0

#define kMikuERR_IP_NO_FOUND -1

NS_ASSUME_NONNULL_BEGIN
@class MikuNextIP;
@interface MikuIPGroup : NSObject

- (MikuNextIP *)nextIP:(int)exclude;
@end


@interface MikuNextIP : NSObject

@property (nonatomic, strong, readonly) NSString *ip;

@property (nonatomic, assign, readonly) int index;

@end

NS_ASSUME_NONNULL_END
