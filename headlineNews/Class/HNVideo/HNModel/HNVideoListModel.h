//
//  HNVideoListModel.h
//  headlineNews
//
//  Created by dengweihao on 2017/11/22.
//  Copyright © 2017年 vcyber. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HNVideoUserInfoModel : NSObject
@property (nonatomic , copy)NSString *avatar_url;
//@property (nonatomic , copy)NSString *description;
@end

//@interface HNVideoURLInfoModel : NSObject
//@property (nonatomic , copy)NSString *main_url;
//@property (nonatomic , copy)NSString *back_url_1;
//
//@end
//
@interface HNVideoURLLevelModel : NSObject
//@property (nonatomic , strong)HNVideoURLInfoModel *video_1; // 320p
//@property (nonatomic , strong)HNVideoURLInfoModel *video_2; // 480p
//@property (nonatomic , strong)HNVideoURLInfoModel *video_3; // 720p
@property (nonatomic , copy)NSString *uri;
@property (nonatomic , copy)NSString *url;


@end

@interface HNVideoPlayInfoModel : NSObject

@property (nonatomic , copy)NSString *video_id;
@property (nonatomic , copy)NSDictionary *detail_video_large_image;
@property (nonatomic , strong)HNVideoURLLevelModel *videoURLModel;

@end

@interface HNVideoDetialModel : NSObject

@property (nonatomic , copy)NSString *media_name;
@property (nonatomic , copy)NSString *title;
@property (nonatomic , copy)NSString *display_url;
@property (nonatomic , copy)NSDictionary *video_detail_info;
@property (nonatomic , assign)float video_duration;
@property (nonatomic , copy)NSString *play_auth_token;
@property (nonatomic , copy)NSString *play_biz_token;
@property (nonatomic , strong)HNVideoPlayInfoModel *videoInfoModel;
@property (nonatomic , strong)HNVideoUserInfoModel *user_info;

@end

@interface HNVideoListModel : NSObject
@property (nonatomic , copy)NSString *code;
@property (nonatomic , copy)NSString *content;
@property (nonatomic , strong)HNVideoDetialModel *videoModel;
@property (nonatomic , assign)BOOL playing;

@end

