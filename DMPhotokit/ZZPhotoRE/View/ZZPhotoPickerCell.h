//
//  ZZPhotoPickerCell.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"

@interface ZZPhotoPickerCell : UICollectionViewCell

@property(strong,nonatomic) UIImageView *photo;
@property(strong,nonatomic) UIButton *selectBtn;


-(void)loadPhotoData:(PHAsset *)assetItem;
-(void)selectBtnStage:(NSMutableArray *)selectArray existence:(PHAsset *)assetItem;
@end
