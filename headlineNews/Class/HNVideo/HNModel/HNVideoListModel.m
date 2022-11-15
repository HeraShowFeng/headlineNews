//
//  HNVideoListModel.m
//  headlineNews
//
//  Created by dengweihao on 2017/11/22.
//  Copyright © 2017年 vcyber. All rights reserved.
//

#import "HNVideoListModel.h"
#import <MJExtension/MJExtension.h>

@implementation HNVideoUserInfoModel

@end

//@implementation HNVideoURLInfoModel
//
//- (NSString *)main_url {
//    NSData *decodedData = [[NSData alloc] initWithBase64EncodedString:_main_url options:0];
//    return [[NSString alloc] initWithData:decodedData encoding:NSUTF8StringEncoding];
//}
//- (NSString *)back_url_1 {
//    NSData *decodedData = [[NSData alloc] initWithBase64EncodedString:_back_url_1 options:0];
//    return [[NSString alloc] initWithData:decodedData encoding:NSUTF8StringEncoding];
//}
//
//@end
@implementation HNVideoURLLevelModel


@end

@implementation HNVideoPlayInfoModel

- (HNVideoURLLevelModel *)videoInfoModel {
    if (!_videoURLModel) {
        NSLog(@"hera -- self.detail_video_large_image %@", self.detail_video_large_image);
        NSDictionary *dic = self.detail_video_large_image;
        _videoURLModel = [[[HNVideoURLLevelModel alloc]init] mj_setKeyValues:dic];
    }
    return _videoURLModel;
}

@end

@implementation HNVideoDetialModel

- (HNVideoPlayInfoModel *)videoInfoModel {
    if (!_videoInfoModel) {
        NSLog(@"hera -- self.video_detail_info %@", self.video_detail_info);
        NSDictionary *dic = self.video_detail_info;
        _videoInfoModel = [[[HNVideoPlayInfoModel alloc]init] mj_setKeyValues:dic];
    }
    return _videoInfoModel;
}

@end


@implementation HNVideoListModel
- (instancetype)init
{
    self = [super init];
    if (self) {
        _playing = NO;
    }
    return self;
}
- (HNVideoDetialModel *)videoModel {
    if (!_videoModel) {
        NSData *data = [self.content dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
        NSLog(@"hera -- content %@", dic);
        _videoModel = [[[HNVideoDetialModel alloc]init] mj_setKeyValues:dic];
    }
    return _videoModel;
}
@end


