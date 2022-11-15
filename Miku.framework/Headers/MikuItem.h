//
//  MikuItem.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MikuItem : NSObject

// Unique ID
@property (nonatomic, strong) NSString *key;

// 该资源从服务器取得的 etag 值，为空表示服务端没有返回该值
@property (nonatomic, strong) NSString *etag;

// 预期的文件大小，为 -1 表示未知（服务器只提供流式下载）
@property (nonatomic, assign) int64_t fileSize;

// 上一次去服务器检测更新的时间（Update detection time），从 1970 年 1 月 1 日至今的秒数
@property (nonatomic, assign) int64_t udt;

// 已下载的 range
@property (nonatomic, strong) NSString *ranges;

// 上一次文件打开的时间（Update open time），单位：毫秒
@property (nonatomic, assign) int64_t UT;

@property (nonatomic, strong) NSString *type;

@property (nonatomic, strong) NSString *response;

- (instancetype)initWithKey:(NSString *)key
                       etag:(NSString *)etag
                   fileSize:(int64_t)fileSize
                        udt:(int64_t)udt
                     ranges:(NSString *)ranges
                         UT:(int64_t)UT
                       type:(NSString *)type;

@end

NS_ASSUME_NONNULL_END
