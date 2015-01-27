//
//  UINavigationItem+CustomItem.h
//  AirChinaLoc
//
//  Created by 叶思盼 on 14/12/25.
//  Copyright (c) 2014年 roselifeye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomBarItem.h"

@interface UINavigationItem (CustomItem)

- (CustomBarItem *)setItemWithTitle:(NSString *)title textColor:(UIColor *)color fontSize:(CGFloat)font itemType:(ItemType)type;
- (CustomBarItem *)setItemWithImage:(NSString *)imageName size:(CGSize)size itemType:(ItemType)type;
- (CustomBarItem *)setItemWithCustomView:(UIView *)customView itemType:(ItemType)type;

@end
