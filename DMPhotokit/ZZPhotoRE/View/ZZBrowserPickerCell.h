//
//  ZZBrowserPickerCell.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"
@interface ZZBrowserPickerCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *pics;

-(void)loadPHAssetItemForPics:(PHAsset *)assetItem;

@end
