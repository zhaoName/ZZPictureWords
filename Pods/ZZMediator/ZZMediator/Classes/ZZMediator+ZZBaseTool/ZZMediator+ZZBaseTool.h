//
//  ZZMediator+ZZBaseTool.h
//  PictureWords
//
//  Created by zhao on 2019/10/17.
//  Copyright © 2019 english. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZZMediator.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZZMediator (ZZBaseTool)

#pragma mark -- categary

- (UIColor *)cat_colorWithHexString:(NSString *)hexString;

- (BOOL)cat_checkPhone:(NSString *)phone;
- (BOOL)cat_checkPwd:(NSString *)pwd;

- (UIImage *)cat_getImageFixOrientation:(UIImage *)image;
/// 获取组件中的图片
/// @param imageName 图片名  imageName or imageName.png
/// @param cls 当前类 若当前组件是动态库则为 UIImage.class
/// @param bundleName  bundleName 若当前组件是静态库则为 @"" 但不可为 nil
- (UIImage *)cat_imageWithName:(NSString *)imageName atClass:(Class)cls bundleName:(NSString *)bundleName;


- (void)cat_showIndicatorHUDWithMessage:(NSString *)message view:(nullable UIView *)curView;
- (void)cat_hideIndicatorHUD:(UIView *)curView;
- (void)cat_showTextHudWithMeeage:(NSString *)message autoHide:(CGFloat)after view:(UIView *)curView;


#pragma mark -- ClipAvator

- (UIView *)cat_initClipView:(CGRect)frame type:(NSInteger)type image:(UIImage *)image midLineColor:(UIColor *)lineColor;
- (UIImage *)cat_clipedImage:(UIView *)clipView;


#pragma mark -- networkHandle

- (void)cat_getRequestWithUrl:(NSString *)urlString params:(NSDictionary *)params success:(void(^)(id responeData))success failure:(void(^)(NSError *error))failure;
- (void)cat_postRequestWithUrl:(NSString *)urlString params:(NSDictionary *)params success:(void(^)(id responeData))success failure:(void(^)(NSError *error))failure;

#pragma mark -- ZZCustomView

- (UITextView *)cat_fetchCustomTextView:(CGRect)frame font:(CGFloat)font placeHolder:(NSString *)placeHolder;

@end

NS_ASSUME_NONNULL_END
