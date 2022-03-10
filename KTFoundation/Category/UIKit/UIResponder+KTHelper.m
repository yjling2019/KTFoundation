//
//  UIResponder+KTHelper.m
//  KOTU
//
//  Created by KOTU on 2017/12/28.
//  Copyright © 2017年 KOTU. All rights reserved.
//

#import "UIResponder+KTHelper.h"

@implementation UIResponder (KTHelper)

- (void)routerEventWithName:(NSString *)eventName userInfo:(NSDictionary *)userInfo
{
    [[self nextResponder] routerEventWithName:eventName userInfo:userInfo];
}

@end
