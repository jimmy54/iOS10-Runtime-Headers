/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingAtmosphericStatusBar : UIView {
    MPUPinningView * _atmosphericContentView;
    UIView * _containerView;
    MusicNowPlayingAtmosphericEffectView * _effectView;
    MusicStatusBar * _statusBar;
}

@property (nonatomic, readonly) MPUPinningView *atmosphericContentView;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) <MusicNowPlayingAtmosphericStatusBarDelegate> *delegate;
@property (nonatomic) long long effect;
@property (nonatomic, retain) MusicNowPlayingAtmosphericEffectView *effectView;

- (void).cxx_destruct;
- (id)atmosphericContentView;
- (id)backdropGroupName;
- (id)delegate;
- (long long)effect;
- (id)effectView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackdropGroupName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffect:(long long)arg1;
- (void)setEffectView:(id)arg1;

@end
