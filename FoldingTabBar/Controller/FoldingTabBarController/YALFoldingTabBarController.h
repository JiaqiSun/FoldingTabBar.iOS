// For License please refer to LICENSE file in the root of YALAnimatingTabBarController project

#import <UIKit/UIKit.h>

//view
#import "YALFoldingTabBar.h"

@interface YALFoldingTabBarController : UITabBarController


/**
 *  默认是选中第一个item
 *  tabBar 分为左边 中间 右边
 *  
 */

/**
 *  左边bar
 */
@property (nonatomic, copy) NSArray *leftBarItems;
/**
 *  右边bar
 */
@property (nonatomic, copy) NSArray *rightBarItems;
/**
 *  中间bar
 */
@property (nonatomic, strong) UIImage *centerButtonImage;

/**
 *  底部导航条高度
 */
@property (nonatomic, assign) CGFloat tabBarViewHeight;

/**
 *  折叠的视图 底部导航条
 */
@property (nonatomic, strong) YALFoldingTabBar *tabBarView;

@end
