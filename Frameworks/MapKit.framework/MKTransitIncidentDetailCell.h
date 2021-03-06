/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitIncidentDetailCell : MKTableViewCell <UITextViewDelegate> {
    NSLayoutConstraint * _descriptionFirstBaselineToTopConstraint;
    UITextView * _descriptionLabel;
    NSLayoutConstraint * _descriptionLastBaselineToBottomConstraint;
    NSDate * _lastUpdated;
    NSLayoutConstraint * _lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    _MKUILabel * _lastUpdatedLabel;
    NSLayoutConstraint * _lastUpdatedLastBaselineToBottomConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *incidentDescription;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_setConstraints;
- (void)_updateConstraintValues;
- (void)_updateLastUpdatedLabel;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)incidentDescription;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)lastUpdated;
- (void)setIncidentDescription:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateConstraints;

@end
