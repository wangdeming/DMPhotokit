//
//  ZZCameraPickerCell.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"
@interface ZZCameraPickerCell : UICollectionViewCell

@property(strong,nonatomic) UIImageView *pics;
@property(strong,nonatomic) UIButton *removeBtn;

-(void)loadPhotoDatas:(UIImage *)image;

@end
