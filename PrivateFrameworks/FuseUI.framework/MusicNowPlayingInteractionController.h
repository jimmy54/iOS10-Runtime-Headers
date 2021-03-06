/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingInteractionController : MPUPercentDrivenInteractionTransition {
    MusicNowPlayingTransitionController * _animationController;
    <UIViewControllerContextTransitioning> * _context;
    UIPanGestureRecognizer * _gestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    bool  _isRubberbanding;
    MusicNowPlayingPresentationController * _presentationController;
    bool  _transitionCanceled;
    bool  _transitionFinished;
    bool  _transitionStarted;
}

@property (nonatomic, retain) MusicNowPlayingTransitionController *animationController;
@property (nonatomic, retain) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic, retain) MusicNowPlayingPresentationController *presentationController;

- (void).cxx_destruct;
- (void)_panRecognized:(id)arg1;
- (id)animationController;
- (void)cancelInteractiveTransition;
- (void)dealloc;
- (void)finishInteractiveTransition;
- (id)gestureRecognizer;
- (id)presentationController;
- (void)setAnimationController:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setPresentationController:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)stopInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;

@end
