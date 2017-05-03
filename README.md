# DMPhotokit

/*
 ** 使用方法
 
 ※※※ 首先重要提醒一个 文件，Common.h 这个配置文件。
 ※※※ 1.包含了所有的按钮图片信息，任意更换即可.
 ※※※ 2.包含了图片返回类型的公共枚举.
 ※※※ 3.所有用到的头文件。以及一些颜色、控制器宽高、屏幕宽高宏定义.
 
 ***** 导入头文件   *****
 #import "ZZPhotoKit.h"

 
 
 * 相册多选的调用
 ZZPhotoController *photoController = [[ZZPhotoController alloc]init];
 
 //设置最大选择张数
 photoController.selectPhotoOfMax = 5;
 
 //设置图片返回类型 （下面例子为缩略图）
 photoController.imageType = ZZImageTypeOfThumb;
 
 [photoController showIn:self result:^(id responseObject){
 //返回结果集
 NSLog(@"%@",responseObject);
 NSArray *array = (NSArray *)responseObject;
 
 UIImage *image = [array objectAtIndex:0];
 _imageView.image = image;
 }];
 
 * 相机连拍的调用
 ZZCameraController *cameraController = [[ZZCameraController alloc]init];
 //设置最大连拍张数
 cameraController.takePhotoOfMax = 8;
 //设置图片返回类型 （下面例子为缩略图）
 cameraController.imageType = ZZImageTypeOfThumb;
 //设置图片是否本地保存
 cameraController.isSaveLocal = NO;
 [cameraController showIn:self result:^(id responseObject){
 //返回结果集
 NSLog(@"%@",responseObject);
 NSArray *array = (NSArray *)responseObject;
 
 UIImage *image = [array objectAtIndex:0];
 _imageView.image = image;
 }];
 
 * 简单的图片浏览器
 ZZBrowserPickerViewController *browserController = [[ZZBrowserPickerViewController alloc]init];
 browserController.delegate = self;
 [browserController showIn:self animation:ShowAnimationOfPush];
 
 //delegate
 //图片的个数。
 -(NSInteger)zzbrowserPickerPhotoNum:(ZZBrowserPickerViewController *)controller
 //图片的数组。
 -(NSArray *)zzbrowserPickerPhotoContent:(ZZBrowserPickerViewController *)controller
 
 
 ** 详细使用方法还是看demo 吧。
 */

![](https://github.com/wangdeming/DMPhotokit/blob/master/DMPhotoKit.gif)
