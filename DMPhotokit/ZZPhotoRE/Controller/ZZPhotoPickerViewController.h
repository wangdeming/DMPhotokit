//
//  ZZPhotoPickerViewController.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"


@interface ZZPhotoPickerViewController : UIViewController


@property(strong,nonatomic) void (^PhotoResult)(id responseObject);

@property(assign,nonatomic) NSInteger selectNum;
@property(assign,nonatomic) BOOL isAlubSeclect;
@property(strong,nonatomic) PHFetchResult *fetch;

@property(assign,nonatomic) ZZImageType imageType;


@end
