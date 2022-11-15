//
//  MikuHttpClient.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuDNSResolver.h"
#import "MikuHash.h"


NS_ASSUME_NONNULL_BEGIN

@class MikuHttpClient;
@class MikuHttpClientTask;
@class MikuDoLog;

@protocol MikuHttpClientDelegate <NSObject>

- (void)httpClient:(MikuHttpClient *)httpclient task:(MikuHttpClientTask *)task data:(NSData *)data;

- (void)httpClient:(MikuHttpClient *)httpclient task:(MikuHttpClientTask *)task completeWithError:(NSError *)error;

@end

@interface MikuHttpClientTask : NSObject

@property (nonatomic, strong) NSMutableURLRequest *request;

@property (nonatomic, assign) int64_t start;

@property (nonatomic, assign) int64_t n;

@property (nonatomic, assign) int64_t geted;

@property (nonatomic, strong) NSHTTPURLResponse *response;

@end

@interface MikuHttpClient : NSObject

@property (nonatomic) NSTimeInterval timeoutInterval;

+ (instancetype)new NS_UNAVAILABLE;
+ (instancetype)init NS_UNAVAILABLE;

- (void)cancelTask:(MikuHttpClientTask *)httpClientTask;

+ (MikuHttpClient *)createHttpClientWithAppID:(NSString *)appID
                                      appSalt:(NSString *)appSalt
                                     resolver:(MikuDNSResolver *)resolver
                                      httpDNS:(BOOL)httpDNS
                                       hasher:(MikuHash *)hasher;

- (NSURLRequest *)newRequest:(NSString *)url method:(NSString *)method body:(NSData *)body;

- (NSHTTPURLResponse *)execute:(MikuHttpClientTask *)httpTask delegate:(id<MikuHttpClientDelegate>)delegate isHttpNS:(BOOL)isHttpNS doLog:(MikuDoLog *)doLog;

@end

NS_ASSUME_NONNULL_END
