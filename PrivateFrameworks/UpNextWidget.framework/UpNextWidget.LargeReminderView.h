/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.LargeReminderView : UpNextWidget.GutterizedView {
    void circleImageView;
    void dueDate;
    void listColor;
    void location;
    void notes;
    void reminderTrailingView;
    void title;
    void viewTapped;
}

@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic, readonly) UIView *forFirstBaselineLayout;
@property (nonatomic, readonly) UIView *forLastBaselineLayout;
@property (nonatomic, retain) UIColor *listColor;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id /* block */ viewTapped;

- (id /* block */).cxx_destruct;
- (id)dueDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)listColor;
- (id)location;
- (id)notes;
- (void)setDueDate:(id)arg1;
- (void)setListColor:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewTapped:(id /* block */)arg1;
- (void)tappedWithGestureRecognizer:(id)arg1;
- (id)title;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id /* block */)viewTapped;

@end
