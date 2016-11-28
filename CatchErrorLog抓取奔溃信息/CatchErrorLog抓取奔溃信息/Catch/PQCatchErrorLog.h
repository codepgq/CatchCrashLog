//
//  PQCatchErrorLog.h
//  CatchErrorLog抓取奔溃信息
//
//  Created by Mac on 16/11/28.
//  Copyright © 2016年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PQCatchErrorLog : NSObject

/**
 抓取LOG
 */
+ (void)catchLog;


/**
 打印LOG信息
 */
+ (void)printErrorLog;


/**
 得到LOG信息

 @return log信息 - NSString
 */
+ (NSString *)logInfo;


/**
 得到LOG信息，以便于上传

 @return log信息 - Data
 */
+ (NSData *)logData;


/**
 删除error信息

 @return 返回是否删除成功
 */
+ (BOOL)delErrorLogFile;

@end


// ----------------   把时间转化为字符串     -----------------
@interface NSDate (PQCatchErrorLog)
/**
 把当前时间转化字符串
 
 @return 当前时间字符串
 */
+ (NSString *)currentDateForDateSeconds;
@end



// ----------------   文件地址拼接     -----------------
@interface NSString (PQCatchErrorLog)
/**
 为字符串添加地址
 
 @return 地址
 */
- (NSString *)byAppendToCacheDocument;
@end

