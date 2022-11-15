//
//  MikuHash.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>

NS_ASSUME_NONNULL_BEGIN

@interface MikuHash : NSObject

- (NSString *)hash:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
