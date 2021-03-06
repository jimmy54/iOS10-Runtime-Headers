/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPlayButtonView : LPComponentView <LPContentInsettable> {
    LPiTunesPlayButton * _button;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSString * _storefrontIdentifier;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStoreIdentifier:(id)arg1 withStorefrontIdentifier:(id)arg2;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateVisibility;

@end
