//
//  UIView+IALayout.h
//  IALayout
//
//  Created by 金峰 on 2019/3/18.
//  Copyright © 2019年 JinFeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IAFrameMaker.h"
#import "IAConstraintMaker.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIView (IALayout)

- (IAFrameMaker *)framer;

- (IAConstraintMaker *)builder;

@end

NS_ASSUME_NONNULL_END