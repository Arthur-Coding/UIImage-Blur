//
//  UIImage+Blur.h
//
//  Created by ArthurShuai on 16/5/20.
//  Copyright © 2016年 ArthurShuai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Blur)

/**
 * 图片模糊方法
 **/

+ (UIImage *)boxblurImage:(UIImage *)image withBlurNumber:(CGFloat)blur;

+ (UIImage *)coreBlurImage:(UIImage *)image withBlurNumber:(CGFloat)blur;

@end
