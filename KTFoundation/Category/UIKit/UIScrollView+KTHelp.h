//
//  UIScrollView+KTHelp.h
//  YYCategories <https://github.com/ibireme/YYCategories>
//
//  Created by ibireme on 13/4/5.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provides extensions for `UIScrollView`.
 */
@interface UIScrollView (KTHelp)

/**
 Scroll content to top with animation.
 */
- (void)kt_scrollToTop;

/**
 Scroll content to bottom with animation.
 */
- (void)kt_scrollToBottom;

/**
 Scroll content to left with animation.
 */
- (void)kt_scrollToLeft;

/**
 Scroll content to right with animation.
 */
- (void)kt_scrollToRight;

/**
 Scroll content to top.
 
 @param animated  Use animation.
 */
- (void)kt_scrollToTopAnimated:(BOOL)animated;

/**
 Scroll content to bottom.
 
 @param animated  Use animation.
 */
- (void)kt_scrollToBottomAnimated:(BOOL)animated;

/**
 Scroll content to left.
 
 @param animated  Use animation.
 */
- (void)kt_scrollToLeftAnimated:(BOOL)animated;

/**
 Scroll content to right.
 
 @param animated  Use animation.
 */
- (void)kt_scrollToRightAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
