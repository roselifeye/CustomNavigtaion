//
//  CustomBarItem.h
//  AirChinaLoc
//
//  Created by 叶思盼 on 14/12/25.
//  Copyright (c) 2014年 roselifeye. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    left,
    center,
    right
} ItemType;

@interface CustomBarItem : NSObject

@property (nonatomic, strong) UIBarButtonItem *fixBarItem;
@property (nonatomic, strong) UIButton *contentBarItem;
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, assign) ItemType itemType;
@property (nonatomic, strong) UIView *customView;
@property (nonatomic, assign) BOOL isCustomView;

+ (CustomBarItem *)itemWithTitle:(NSString *)title textColor:(UIColor *)color fontSize:(CGFloat)font itemType:(ItemType)type;
+ (CustomBarItem *)itemWithImage:(NSString *)imageName size:(CGSize)size type:(ItemType)type;
+ (CustomBarItem *)itemWithCustomeView:(UIView *)customView type:(ItemType)type;
- (void)setItemWithNavigationItem:(UINavigationItem *)navigationItem itemType:(ItemType)type;
- (void)addTarget:(id)target selector:(SEL)selector event:(UIControlEvents)event;
/**
 *设置item偏移量
 *@param offSet 正值向左偏，负值向右偏
 */
- (void)setOffset:(CGFloat)offSet;

@end
