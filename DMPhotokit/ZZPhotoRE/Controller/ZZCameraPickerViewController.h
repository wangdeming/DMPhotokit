//
//  ZZCameraPickerViewController.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"

@interface ZZCameraPickerViewController : UIViewController

@property (assign, nonatomic) BOOL isSavelocal;

@property (assign, nonatomic) NSInteger takePhotoOfMax;
@property (assign, nonatomic) ZZImageType imageType;

@property (strong, nonatomic) void (^CameraResult)(id responseObject);

@end
