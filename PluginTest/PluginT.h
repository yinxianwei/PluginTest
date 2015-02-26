//
//  PluginT.h
//  PluginTest
//
//  Created by 尹现伟 on 15-2-26.
//  Copyright (c) 2015年 DNE Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

#warning 需修改plist文件的DVTPlugInCompatibilityUUIDs属性，打开控制台程序来查看。

@interface PluginT : NSObject

@property (nonatomic,copy) NSString *selectedText;

@end
