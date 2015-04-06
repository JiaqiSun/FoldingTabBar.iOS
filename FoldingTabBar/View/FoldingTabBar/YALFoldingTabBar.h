// For License please refer to LICENSE file in the root of YALAnimatingTabBarController project

#import <UIKit/UIKit.h>

@class YALFoldingTabBar;

@protocol YALTabBarViewDataSource <NSObject>   // tabBar数据源方法

@required
- (NSArray *)leftTabBarItemsInTabBarView:(YALFoldingTabBar *)tabBarView;
- (NSArray *)rightTabBarItemsInTabBarView:(YALFoldingTabBar *)tabBarView;
- (UIImage *)centerImageInTabBarView:(YALFoldingTabBar *)tabBarView;

@end

@protocol YALTabBarViewDelegate <NSObject>

@optional
// 点击item 选择控制器
- (void)itemInTabBarViewPressed:(YALFoldingTabBar *)tabBarView atIndex:(NSUInteger)index;

// tabBar将折叠
- (void)tabBarViewWillCollapse:(YALFoldingTabBar *)tabBarView;
// tabBar将展开
- (void)tabBarViewWillExpand:(YALFoldingTabBar *)tabBarView;

// tabBar已经折叠
- (void)tabBarViewDidCollapsed:(YALFoldingTabBar *)tabBarView;
// tabBar已经展开
- (void)tabBarViewDidExpanded:(YALFoldingTabBar *)tabBarView;

// 左外item被点击
- (void)extraLeftItemDidPressedInTabBarView:(YALFoldingTabBar *)tabBarView;
// 右外item被点击
- (void)extraRightItemDidPressedInTabBarView:(YALFoldingTabBar *)tabBarView;

@end

typedef NS_ENUM(NSUInteger, YALTabBarState) {
    YALStateCollapsed,   // 折叠
    YALStateExpanded     // 展开
};

@interface YALFoldingTabBar : UIView

- (instancetype)initWithFrame:(CGRect)frame state:(YALTabBarState)state;

@property (nonatomic, weak) IBOutlet id<YALTabBarViewDataSource> dataSource;
@property (nonatomic, weak) IBOutlet id<YALTabBarViewDelegate> delegate;

// 导航条状态
@property (nonatomic, assign, readonly) YALTabBarState state;
// 选中导航条的下标
@property (nonatomic, assign) NSUInteger selectedTabBarItemIndex;

@property (nonatomic, copy) UIColor *tabBarColor;
// 导航条的内边距
@property (nonatomic, assign) UIEdgeInsets tabBarViewEdgeInsets;
// 导航条内部元素的内边距
@property (nonatomic, assign) UIEdgeInsets tabBarItemsEdgeInsets;

// 额外的导航元素的高度
@property (nonatomic, assign) CGFloat extraTabBarItemHeight;
// 偏移量 额外的导航元素的便宜量
@property (nonatomic, assign) CGFloat offsetForExtraTabBarItems;

@end
