//
//  ZZPageControl.m
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import "ZZPageControl.h"

@implementation ZZPageControl

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        
        _pageControl = [[UILabel alloc]initWithFrame:CGRectMake(5, 3, self.frame.size.width - 10, self.frame.size.height - 6)];
        _pageControl.backgroundColor = [UIColor clearColor];
        _pageControl.textAlignment = NSTextAlignmentCenter;
        [self addSubview:_pageControl];
    }
    return self;
}

@end
