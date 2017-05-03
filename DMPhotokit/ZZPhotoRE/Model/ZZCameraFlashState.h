//
//  ZZCameraFlashState.h
//  ZZPhotoKit
//
//  Created by WangDeming on 16/1/4.
//  Copyright © 2016年 PCEBG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZZCameraFlashState : NSObject

+(ZZCameraFlashState *)flashState;

-(BOOL)flashLightState;
-(void)isOpen:(BOOL)isState;
@end
