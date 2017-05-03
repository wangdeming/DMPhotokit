//
//  ZZPhotoController.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Common.h"
/*
 *    设置Block
 */
typedef void (^ZZPhotoResult)(id responseObject);


@interface ZZPhotoController : NSObject

/*
 *    选择照片的最多张数
 */
@property(assign,nonatomic) NSInteger selectPhotoOfMax;

/*
 *    设置图片返回类型
 */
@property(assign,nonatomic) ZZImageType imageType;

/*
 *    设置回调方法
 */
-(void)showIn:(UIViewController *)controller result:(ZZPhotoResult)result;

@end
