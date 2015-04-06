// For License please refer to LICENSE file in the root of YALAnimatingTabBarController project

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YALTabBarItem : NSObject

/**
 *  每一个 item 都 子item 分为 左边 右边
 */


/**
 *  当前item的图片
 */
@property (nonatomic, strong) UIImage *itemImage;
/**
 *  当前item的左边的子item
 */
@property (nonatomic, strong) UIImage *leftImage;
/**
 *  当前item的右边的子item
 */
@property (nonatomic, strong) UIImage *rightImage;

- (instancetype)initWithItemImage:(UIImage *)itemImage
                    leftItemImage:(UIImage *)leftItemImage
                   rightItemImage:(UIImage *)rightItemImage;

@end
