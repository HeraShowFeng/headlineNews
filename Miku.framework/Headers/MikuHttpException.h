//
//  MikuHttpException.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuException.h"

NS_ASSUME_NONNULL_BEGIN

@interface MikuHttpException : MikuException

- (NSString *)getMessage;

@end

NS_ASSUME_NONNULL_END
