//
//  ZZPhotoListCell.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Common.h"
@interface ZZPhotoListCell : UITableViewCell
/*
 *    相册图片，显示相册的最后一张图片
 */
@property(strong,nonatomic) UIImageView *coverImage;
/*
 *    相册标题，显示相册的标题
 */
@property(strong,nonatomic) UILabel *title;
/*
 *    相册副标题，显示相册中含有多少张图片
 */
@property(strong,nonatomic) UILabel *subTitle;

/*
 *    加载数据方法
 */

-(void)loadPhotoListData:(PHAssetCollection *)assetItem;
@end
