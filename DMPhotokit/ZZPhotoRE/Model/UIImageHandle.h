//
//  UIImageHandle.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Common.h"
@interface UIImageHandle : NSObject

//缩略图
-(UIImage *)thumbImage:(UIImage *)artWork;

//压缩原图
-(UIImage *)compressImage:(UIImage *)artWork;

//裁剪原图片
-(UIImage*)cutImage:(UIImage *)image rect:(CGRect)rect;
@end
