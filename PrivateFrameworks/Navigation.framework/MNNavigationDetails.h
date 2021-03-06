/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationDetails : NSObject {
    MNActiveRouteDetails * _activeRouteDetails;
    unsigned long long  _closestStepIndex;
    NSString * _displayString;
    double  _distanceUntilManeuver;
    double  _distanceUntilSign;
    int  _guidanceLevel;
    bool  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    int  _headingOrientation;
    bool  _isDetour;
    bool  _isNavigating;
    MNLocation * _location;
    int  _navigationState;
    double  _proceedToRouteDistance;
    unsigned long long  _reconnectionRouteIndex;
    double  _remainingDistance;
    double  _remainingTime;
    GEOComposedRoute * _route;
    unsigned long long  _routeIndex;
    MNRoutePlanningDetails * _routePlanningDetails;
    NSMutableDictionary * _routes;
    double  _timeUntilManeuver;
    double  _timeUntilSign;
    NSArray * _traceBookmarks;
    double  _traceDuration;
    bool  _traceIsPlaying;
    NSString * _tracePath;
    double  _tracePosition;
}

@property (nonatomic, retain) MNActiveRouteDetails *activeRouteDetails;
@property (nonatomic) unsigned long long closestStepIndex;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic) double distanceUntilManeuver;
@property (nonatomic) double distanceUntilSign;
@property (nonatomic) int guidanceLevel;
@property (nonatomic) bool guidancePromptsEnabled;
@property (nonatomic, retain) GEONavigationGuidanceState *guidanceState;
@property (nonatomic) int headingOrientation;
@property (nonatomic) bool isDetour;
@property (nonatomic) bool isNavigating;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, retain) MNLocation *location;
@property (nonatomic) int navigationState;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic) double proceedToRouteDistance;
@property (nonatomic, readonly) unsigned long long reconnectionRouteIndex;
@property (nonatomic) double remainingDistance;
@property (nonatomic) double remainingTime;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) unsigned long long routeIndex;
@property (nonatomic, retain) MNRoutePlanningDetails *routePlanningDetails;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic) double timeUntilManeuver;
@property (nonatomic) double timeUntilSign;
@property (nonatomic, retain) NSArray *traceBookmarks;
@property (nonatomic) double traceDuration;
@property (nonatomic) bool traceIsPlaying;
@property (nonatomic, copy) NSString *tracePath;
@property (nonatomic) double tracePosition;

- (void).cxx_destruct;
- (id)activeRouteDetails;
- (unsigned long long)closestStepIndex;
- (id)displayString;
- (double)distanceUntilManeuver;
- (double)distanceUntilSign;
- (int)guidanceLevel;
- (bool)guidancePromptsEnabled;
- (id)guidanceState;
- (int)headingOrientation;
- (bool)isDetour;
- (bool)isNavigating;
- (unsigned long long)legIndex;
- (id)location;
- (int)navigationState;
- (int)navigationType;
- (double)proceedToRouteDistance;
- (unsigned long long)reconnectionRouteIndex;
- (double)remainingDistance;
- (double)remainingTime;
- (id)route;
- (id)routeForRouteDetailsID:(id)arg1;
- (unsigned long long)routeIndex;
- (id)routePlanningDetails;
- (void)setActiveRouteDetails:(id)arg1;
- (void)setClosestStepIndex:(unsigned long long)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDistanceUntilManeuver:(double)arg1;
- (void)setDistanceUntilSign:(double)arg1;
- (void)setGuidanceLevel:(int)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setGuidanceState:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsDetour:(bool)arg1;
- (void)setIsNavigating:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setProceedToRouteDistance:(double)arg1;
- (void)setRemainingDistance:(double)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setRoutePlanningDetails:(id)arg1;
- (void)setTimeUntilManeuver:(double)arg1;
- (void)setTimeUntilSign:(double)arg1;
- (void)setTraceBookmarks:(id)arg1;
- (void)setTraceDuration:(double)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePath:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (unsigned long long)stepIndex;
- (double)timeUntilManeuver;
- (double)timeUntilSign;
- (id)traceBookmarks;
- (double)traceDuration;
- (bool)traceIsPlaying;
- (id)tracePath;
- (double)tracePosition;

@end
