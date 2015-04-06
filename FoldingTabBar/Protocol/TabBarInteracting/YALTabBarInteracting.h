// For License please refer to LICENSE file in the root of YALAnimatingTabBarController project

#import <Foundation/Foundation.h>

@class YALFoldingTabBar;

@protocol YALTabBarInteracting <NSObject>

@optional

- (void)tabBarViewWillCollapse;
- (void)tabBarViewWillExpand;

- (void)tabBarViewDidCollapsed;
- (void)tabBarViewDidExpanded;

// 左边额外部分被点
- (void)extraLeftItemDidPressed;
// 右边额外部分被点
- (void)extraRightItemDidPressed;

@end
