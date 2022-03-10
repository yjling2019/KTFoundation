//
//  UIResponder+KTHelper.h
//  KOTU
//
//  Created by KOTU on 2017/12/28.
//  Copyright © 2017年 KOTU. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIResponder (KTHelper)

/**
 使用next responder充当路由来传递事件

 @param eventName 事件名称
 @param userInfo 自定义事件内容
 */
- (void)routerEventWithName:(nullable NSString *)eventName userInfo:(nullable NSDictionary *)userInfo;

@end

NS_ASSUME_NONNULL_END
