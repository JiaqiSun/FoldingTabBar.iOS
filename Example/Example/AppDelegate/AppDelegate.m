// For License please refer to LICENSE file in the root of YALAnimatingTabBarController project

#import "AppDelegate.h"

//model
#import "YALTabBarItem.h"

//controller
#import "YALFoldingTabBarController.h"

//helpers
#import "YALAnimatingTabBarConstants.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [self setupYALTabBarController];
    
    return YES;
}

- (void)setupYALTabBarController {
    // 折叠控制器
    YALFoldingTabBarController *tabBarController = (YALFoldingTabBarController *) self.window.rootViewController;

    //prepare leftBarItems
    YALTabBarItem *item1 = [[YALTabBarItem alloc] initWithItemImage:[UIImage imageNamed:@"nearby_icon"]
                                                      leftItemImage:nil
                                                     rightItemImage:nil];
    
    
    YALTabBarItem *item2 = [[YALTabBarItem alloc] initWithItemImage:[UIImage imageNamed:@"profile_icon"]
                                                      leftItemImage:[UIImage imageNamed:@"edit_icon"]
                                                     rightItemImage:nil];
    
    tabBarController.leftBarItems = @[item1, item2];

    //prepare rightBarItems
    YALTabBarItem *item3 = [[YALTabBarItem alloc] initWithItemImage:[UIImage imageNamed:@"chats_icon"]
                                                      leftItemImage:[UIImage imageNamed:@"search_icon"]
                                                     rightItemImage:[UIImage imageNamed:@"new_chat_icon"]];
    
    
    YALTabBarItem *item4 = [[YALTabBarItem alloc] initWithItemImage:[UIImage imageNamed:@"settings_icon"]
                                                      leftItemImage:nil
                                                     rightItemImage:nil];
    
    tabBarController.rightBarItems = @[item3, item4];
    
    tabBarController.centerButtonImage = [UIImage imageNamed:@"plus_icon"];
    
    // 选中下标为2 的item
    tabBarController.selectedIndex = 2;
    
    //customize tabBarView
    // 设置 导航条额外部分的属性
    tabBarController.tabBarView.extraTabBarItemHeight =  YALExtraTabBarItemsDefaultHeight;
    tabBarController.tabBarView.offsetForExtraTabBarItems = YALForExtraTabBarItemsDefaultOffset;
    
    // 设置导航条的属性
    tabBarController.tabBarView.backgroundColor = [UIColor colorWithRed:94.0/255.0 green:91.0/255.0 blue:149.0/255.0 alpha:1];
    tabBarController.tabBarView.tabBarColor = [UIColor colorWithRed:72.0/255.0 green:211.0/255.0 blue:178.0/255.0 alpha:1];
    tabBarController.tabBarViewHeight = YALTabBarViewDefaultHeight;
    tabBarController.tabBarView.tabBarViewEdgeInsets = YALTabBarViewHDefaultEdgeInsets;
    tabBarController.tabBarView.tabBarItemsEdgeInsets = YALTabBarViewItemsDefaultEdgeInsets;
}

@end
