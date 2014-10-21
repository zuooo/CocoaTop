#import <UIKit/UIKit.h>
#import "Proc.h"
#import "Column.h"

@interface GridTableCell : UITableViewCell
{
}
- (instancetype)initWithId:(NSString *)reuseIdentifier proc:(PSProc *)proc columns:(NSArray *)columns height:(CGFloat)height;
+ (instancetype)cellWithId:(NSString *)reuseIdentifier proc:(PSProc *)proc columns:(NSArray *)columns height:(CGFloat)height;
//- (void)drawRect:(CGRect)rect;
- (void)layoutSubviews;

@end
