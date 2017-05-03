//
//  ZZBrowerAnimate.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "Common.h"
typedef  NS_ENUM(NSInteger,AnimateStyle){
    PushAnimate,
    ZZBrowerAnimateStyleOfBoxCenter,
    ZZBrowerAnimateStyleOfBoxLeft,
};
@interface ZZBrowerAnimate : NSObject <UIViewControllerAnimatedTransitioning>

@property(assign,nonatomic) AnimateStyle style;

@end
