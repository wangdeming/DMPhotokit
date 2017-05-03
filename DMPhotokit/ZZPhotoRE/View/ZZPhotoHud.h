//
//  ZZPhotoHud.h
//  ZZPhotoKit
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZZPhotoHud : UIView

+(ZZPhotoHud *)sharedHud;

+(void)showActiveHud;
+(void)hideActiveHud;

@end
