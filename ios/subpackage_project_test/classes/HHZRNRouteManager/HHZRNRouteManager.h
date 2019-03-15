//
//  HHZRNRouteManager.h
//  subpackage_project_test
//
//  Created by yunshan on 2019/3/15.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HHZRNRouteModel.h"
#import <React/RCTBridge.h>
#import "RCTBridge+HHZLoadOtherJS.h"
#import <React/RCTRootView.h>

NS_ASSUME_NONNULL_BEGIN

@interface HHZRNRouteManager : NSObject
//桥接bridge
@property (nonatomic, strong) RCTBridge * bridge;

/**
 获取当前Manager实例
 */
+(instancetype)shareManager;


/**
 以配置文件启动
 */
-(void)startWithConfig:(NSArray<HHZRNRouteModel *> *)modelArray;


/**
 生成RCTView对象

 @param key 当前Key
 */
-(RCTRootView *)generateRCTViewWithModuleName:(NSString *)moduleName key:(NSString *)key;
@end

NS_ASSUME_NONNULL_END