//
//  MikuException.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MikuException : NSException

- (NSString *)getMessage;

@end

NS_ASSUME_NONNULL_END
