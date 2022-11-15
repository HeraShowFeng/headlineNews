//
//  MikuResult.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MikuInputStream;

@interface MikuResponse : NSObject
@property (nonatomic, strong, readonly) NSDictionary * headers;
@end

@interface MikuResult : NSObject

@property (nonatomic, assign, readonly) int64_t size;
@property (nonatomic, assign, readonly) int64_t fileSize;
@property (nonatomic, strong, readonly) NSString *contentType;

- (NSInputStream *)stream;
- (MikuResponse *)underLayer;

@end

NS_ASSUME_NONNULL_END
