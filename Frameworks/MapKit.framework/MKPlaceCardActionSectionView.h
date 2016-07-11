/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    <MKPlaceCardActionSectionViewDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    UIButton * _leftButton;
    NSLayoutConstraint * _leftButtonYConstraint;
    MKPlaceCardActionItem * _leftItem;
    UIButton * _rightButton;
    NSLayoutConstraint * _rightButtonYConstraint;
    MKPlaceCardActionItem * _rightItem;
    bool  _usingSmallFonts;
}

@property (nonatomic) <MKPlaceCardActionSectionViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *leftButton;
@property (nonatomic, retain) MKPlaceCardActionItem *leftItem;
@property (nonatomic, retain) UIButton *rightButton;
@property (nonatomic, retain) MKPlaceCardActionItem *rightItem;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_leftButtonIsPressed:(id)arg1;
- (id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(bool)arg2 useSmallFonts:(bool)arg3;
- (void)_rightButtonIsPressed:(id)arg1;
- (void)_setUpViewWithButtons;
- (void)dealloc;
- (id)delegate;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(bool)arg3;
- (id)leftButton;
- (id)leftItem;
- (id)rightButton;
- (id)rightItem;
- (void)setDelegate:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setLeftItem:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightItem:(id)arg1;
- (void)setTopHairlineHidden:(bool)arg1;
- (void)tintColorDidChange;

@end