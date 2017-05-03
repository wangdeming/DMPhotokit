//
//  ZZCameraController.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Common.h"

typedef void(^ZZCameraResult)(id responseObject);

@interface ZZCameraController : NSObject

@property (assign, nonatomic) BOOL isSaveLocal;

/*
 *   设置最多连拍张数
 */
@property (assign, nonatomic) NSInteger takePhotoOfMax;

/*
 *    设置图片返回类型
 */
@property (assign, nonatomic) ZZImageType imageType;

-(void)showIn:(UIViewController *)controller result:(ZZCameraResult)result;

@end
