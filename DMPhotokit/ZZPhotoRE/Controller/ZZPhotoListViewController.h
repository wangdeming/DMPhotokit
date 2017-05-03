//
//  ZZPhotoListViewController.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"
@interface ZZPhotoListViewController : UIViewController

@property(assign,nonatomic) NSInteger selectNum;

@property(strong,nonatomic) void (^photoResult)(id responseObject);
@end
