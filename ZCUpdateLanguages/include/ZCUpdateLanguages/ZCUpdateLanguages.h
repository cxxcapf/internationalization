//
//  ZCUpdateLanguages.h
//  ZCUpdateLanguages
//
//  Created by wangzhichao on 2016/12/19.
//  Copyright © 2016年 wangzhichao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZCUpdateLanguages : NSObject

/**
 * 初始化
 */
+ (instancetype)sharedLanguages;

/**
 * 设置国际化字段标识，默认为空
 * 若设置activeLocalizedStringHead
 *  给label.text赋值时，会首先检查label.text是否以activeLocalizedStringHead开头，不是则直接不会查询国际化是否有此字段
 */
@property(nonatomic, strong) NSString *activeLocalizedStringHead;

/**
 * 获取、更新app语言
 * 默认为空，会根据系统语言显示
 */
@property(nonatomic, strong, setter=updateText:) NSString *languages;

/**
 * 在对应语言的Localizable.strings文件中查询相应key对应的内容
 */
- (NSString *)getString:(NSString *)key;

@end
