//
//  JYADView.h
//  ScrollView图片轮播器
//
//  Created by nero on 15/3/12.
//  Copyright (c) 2015年 zzc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JYADView : UIView

@property (nonatomic, strong) NSArray *imageArray;

@property (nonatomic, strong) UIScrollView *scrollView;

@property (nonatomic, strong) NSTimer      *timer;      //定时器

@property(nonatomic,copy)void (^adDidClick)(NSInteger index);

- (void)removeTimer;
- (void)addTimer;

@end

