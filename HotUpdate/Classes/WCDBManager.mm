//
//  WCDBManager.m
//  Pods-HotUpdate_Example
//
//  Created by 刘渊 on 2018/11/15.
//

#import "WCDBManager.h"
//#import <WCDB/WCDB.h>
@implementation WCDBManager
/**
 单例模式
 */
//+ (instancetype)shared
//{
//    static WCDBManager *manager = nil;
//    static dispatch_once_t onceToken;
//    dispatch_once(&onceToken, ^{
//        manager = [[WCDBManager alloc] init];
//        [manager initializeDataBase];
//    });
//    return manager;
//}
//
//- (void)initializeDataBase {
//    NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
//    NSString *filePath = [documentsPath stringByAppendingPathComponent:@"HanTalkCache.sqlite"];
//    NSLog(@"%@",filePath);
//    WCTDatabase *database = [[WCTDatabase alloc]initWithPath:filePath];
//}
@end
