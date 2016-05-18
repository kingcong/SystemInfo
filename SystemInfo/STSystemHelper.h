//
//  STSystemHelper.h
//  Faith in life
//
//  Created by 王聪 on 16/4/19.
//  Copyright © 2016年 allan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>

#include <sys/types.h>
#include <sys/sysctl.h>
#include <mach/machine.h>

@interface STSystemHelper : NSObject

+ (NSString *)getSystemIMEI;    // 获取设备IMEI

+ (NSString *)getDeviceName;    //获取设备名称

+ (NSString *)getApp_version;   // 获取APP版本号

+ (NSString *)getDeviceID;  // 获取设备ID

+ (NSString *)getUserID;    // 获取用户ID

+ (NSString *)getIPInfo;    //  获取IP信息

+ (void)getBatteryMoniter;    // 获取系统电量

+ (NSString *)getCurrentDeviceModel;

+ (NSString *)getDeviceModel;

+ (NSString *)getHardParam;    // 得到硬件参数

+ (NSString *)getTelephonyInfo;     // 获取运营商信息

+ (NSString *)getIOSID;     // 获取IOSID

+ (NSString *)getiOSSDKVersion; // 获取iOS SDK版本

// 获得设备总内存
+ (NSUInteger)getTotalMemoryBytes;

// 获取网络类型
+(NSString*)getNetworkType;

@end
