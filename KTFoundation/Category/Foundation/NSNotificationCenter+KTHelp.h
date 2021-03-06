//
//  NSNotificationCenter+KTHelp.h
//  YYCategories <https://github.com/ibireme/YYCategories>
//
//  Created by ibireme on 13/8/24.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const kNotificationUserInfoDataKey = @"data";

/**
 Provide some method for `NSNotificationCenter`
 to post notification in different thread.
 */
@interface NSNotificationCenter (KTHelp)

/**
 Posts a given notification to the receiver on main thread.
 If current thread is main thread, the notification is posted synchronized;
 otherwise, is posted asynchronized.
 
 @param notification  The notification to post.
                      An exception is raised if notification is nil.
 */
- (void)kt_postNotificationOnMainThread:(NSNotification *)notification;

/**
 Posts a given notification to the receiver on main thread.
 
 @param notification The notification to post.
                     An exception is raised if notification is nil.
 
 @param wait         A Boolean that specifies whether the current thread blocks 
                     until after the specified notification is posted on the 
                     receiver on the main thread. Specify YES to block this 
                     thread; otherwise, specify NO to have this method return 
                     immediately.
 */
- (void)kt_postNotificationOnMainThread:(NSNotification *)notification
						  waitUntilDone:(BOOL)wait;

/**
 Creates a notification with a given name and sender and posts it to the 
 receiver on main thread. If current thread is main thread, the notification 
 is posted synchronized; otherwise, is posted asynchronized.
 
 @param name    The name of the notification.
 
 @param object  The object posting the notification.
 */
- (void)kt_postNotificationOnMainThreadWithName:(NSString *)name
										 object:(nullable id)object;

/**
 Creates a notification with a given name and sender and posts it to the
 receiver on main thread. If current thread is main thread, the notification
 is posted synchronized; otherwise, is posted asynchronized.
 
 @param name      The name of the notification.
 
 @param object    The object posting the notification.
 
 @param userInfo  Information about the the notification. May be nil.
 */
- (void)kt_postNotificationOnMainThreadWithName:(NSString *)name
										 object:(nullable id)object
									   userInfo:(nullable NSDictionary *)userInfo;

/**
 Creates a notification with a given name and sender and posts it to the
 receiver on main thread.
 
 @param name     The name of the notification.
 
 @param object   The object posting the notification.
 
 @param userInfo Information about the the notification. May be nil.
 
 @param wait     A Boolean that specifies whether the current thread blocks
                 until after the specified notification is posted on the
                 receiver on the main thread. Specify YES to block this
                 thread; otherwise, specify NO to have this method return
                 immediately.
 */
- (void)kt_postNotificationOnMainThreadWithName:(NSString *)name
										 object:(nullable id)object
									   userInfo:(nullable NSDictionary *)userInfo
								  waitUntilDone:(BOOL)wait;

@end

typedef void(^KTFastNotificationBlock)(NSNotification *notification);

@interface NSObject (KTFastNotification)

 /// ??????????????????????????????????????????????????????????????????
 /// @param name ????????????
 /// @param block ??????????????????
- (void)kt_observeNotificationForName:(NSString *)name
						   usingBlock:(void(^)(NSNotification *notification))block;

/// ????????????????????????
/// @param names ??????????????????
/// @param block ??????????????????
- (void)kt_observeNotificationForNames:(NSArray<NSString *> *)names
							usingBlock:(KTFastNotificationBlock)block;

/// ?????????????????????
/// @param name ????????????
- (void)kt_removeNotification:(NSString *)name;

/// ???????????????????????????
- (nullable NSArray<NSString *> *)kt_notificationNames;

@end

NS_ASSUME_NONNULL_END
