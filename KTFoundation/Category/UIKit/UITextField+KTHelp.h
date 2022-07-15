//
//  UITextField+KTHelp.h
//  YYCategories <https://github.com/ibireme/YYCategories>
//
//  Created by ibireme on 14/5/12.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provides extensions for `UITextField`.
 */
@interface UITextField (KTHelp)

/**
 Set all text selected.
 */
- (void)kt_selectAllText;

/**
 Set text in range selected.
 
 @param range  The range of selected text in a document.
 */
- (void)kt_setSelectedRange:(NSRange)range;

/// limit input length. If length less than 1, then no limit
/// @param length limit text length
- (void)kt_setLimitTextLength:(NSInteger)length;

/// limit chinese string length. If length less than 1, then no limit
/// @param length limit string length
- (void)kt_setLimitChineseStringLength:(NSInteger)length;

@end

NS_ASSUME_NONNULL_END
