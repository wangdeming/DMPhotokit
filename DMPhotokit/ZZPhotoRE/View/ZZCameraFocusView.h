//
//  ZZCameraFocusView.h
//  ZZFramework
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZZCameraFocusView;

@protocol ZZCameraFocusDelegate <NSObject>

@optional
-(void) cameraFocusOptions:(ZZCameraFocusView *)cameraFocu;

@end

@interface ZZCameraFocusView : UIView

@property(strong,nonatomic) id <ZZCameraFocusDelegate> delegate;

@end
