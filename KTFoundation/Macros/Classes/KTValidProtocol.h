//
//  KTValidProtocol.h
//  KTFoundation
//
//  Created by KOTU on 2020/4/13.
//  Copyright © 2020 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol KTValidProtocol <NSObject>

@property (nonatomic, assign, readonly) BOOL kt_isValid;

@end

NS_ASSUME_NONNULL_END
