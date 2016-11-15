//
//  UIView+GYH.h
//  YHCategory
//
//  Created by 郭月辉 on 2016/11/15.
//  Copyright © 2016年 Theshy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (GYH)

@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

/**
 抖动 view
 */
- (void)shake;

@end
