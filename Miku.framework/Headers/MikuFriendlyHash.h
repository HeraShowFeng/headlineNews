//
//  MikuFriendlyHash.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuHash.h"

NS_ASSUME_NONNULL_BEGIN

@interface MikuFriendlyHash : MikuHash

- (NSString *)hash:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
