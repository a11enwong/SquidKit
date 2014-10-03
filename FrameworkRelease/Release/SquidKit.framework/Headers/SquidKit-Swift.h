// Generated by Swift version 1.0 (swift-600.0.51.4)

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif
#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"

#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

@class UITextField;
@class NSCoder;

SWIFT_CLASS("_TtC8SquidKit14CustomHostCell")
@interface CustomHostCell : UITableViewCell <UITextFieldDelegate>
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(UITextField *)textField;
- (void)textFieldDidEndEditing:(UITextField *)textField;
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

SWIFT_CLASS("_TtC8SquidKit25DismissibleViewController")
@interface DismissibleViewController : UIViewController
- (IBAction)dismissOrPop;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSIndexPath;

SWIFT_CLASS("_TtC8SquidKit34TableItemBackedTableViewController")
@interface TableItemBackedTableViewController : UITableViewController
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section;
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section;
- (instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8SquidKit36HostConfigurationTableViewController")
@interface HostConfigurationTableViewController : TableItemBackedTableViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDictionary (SWIFT_EXTENSION(SquidKit))
+ (NSDictionary *)dictionaryFromResourceFile:(NSString *)fileName;
@end


@interface NSURL (SWIFT_EXTENSION(SquidKit))
@property (nonatomic, readonly, copy) NSString * URLString;
@end


@interface NSURLComponents (SWIFT_EXTENSION(SquidKit))
@property (nonatomic, readonly, copy) NSString * URLString;
@end


@interface NSURLRequest (SWIFT_EXTENSION(SquidKit))
@property (nonatomic, readonly, copy) NSString * URLString;
@end


@interface NSURLRequest (SWIFT_EXTENSION(SquidKit))
@property (nonatomic, readonly) NSURLRequest * URLRequest;
@end


SWIFT_PROTOCOL("_TtP8SquidKit12TableActions_")
@protocol TableActions
- (void)deselect:(NSIndexPath *)indexPath;
- (void)reload;
- (void)pushViewController:(NSString *)storyboardName storyboardID:(NSString *)storyboardID;
- (void)presentViewController:(NSString *)storyboardName storyboardID:(NSString *)storyboardID;
@end



@interface TableItemBackedTableViewController (SWIFT_EXTENSION(SquidKit)) <TableActions>
- (void)deselect:(NSIndexPath *)indexPath;
- (void)reload;
- (void)pushViewController:(NSString *)storyboardName storyboardID:(NSString *)storyboardID;
- (void)presentViewController:(NSString *)storyboardName storyboardID:(NSString *)storyboardID;
@end


SWIFT_CLASS("_TtC8SquidKit10ThemeLabel")
@interface ThemeLabel : UILabel
@property (nonatomic, copy) NSString * textColorName;
- (void)awakeFromNib;
- (instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8SquidKit14ThemeTableView")
@interface ThemeTableView : UITableView
@property (nonatomic, copy) NSString * backgroundColorName;
- (void)awakeFromNib;
- (instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8SquidKit9ThemeView")
@interface ThemeView : UIView
@property (nonatomic, copy) NSString * backgroundColorName;
- (void)awakeFromNib;
- (instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(SquidKit))
+ (UIColor *)colorWithHex:(uint32_t)hex alpha:(float)alpha;
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(float)alpha;
@end

#pragma clang diagnostic pop
