/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceDaemonInterface, MNNavigationServiceReconnectorDelegate> {
    NSXPCConnection * _connection;
    <MNNavigationServiceRemoteProxyDelegate> * _delegate;
    NSDate * _lastReconnectionDate;
    MNNavigationServiceReconnector * _reconnector;
    MNSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceRemoteProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupReconnector;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)_initializeReconnectorWithDetails:(id)arg1 shouldPrepare:(bool)arg2;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)changeSettings:(id)arg1;
- (id)delegate;
- (void)didActivateAudioSession:(bool)arg1;
- (void)didArrive;
- (void)didCancelReroute;
- (void)didChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(id)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)didEnableGuidancePrompts:(bool)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didInvalidateTrafficIncidentAlert:(id)arg1;
- (void)didReceiveTrafficIncidentAlert:(id)arg1;
- (void)didRerouteWithDetails:(id)arg1 withLocationDetails:(id)arg2;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)didStartSpeakingPrompt:(id)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2;
- (void)didUpdateActiveRouteDetails:(id)arg1;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateDistanceUntilSign:(double)arg1 timeUntilSign:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateFeedback:(id)arg1 forAlightingStepAtIndex:(unsigned long long)arg2;
- (void)didUpdateHeading:(double)arg1 accuracy:(double)arg2;
- (void)didUpdateMatchedLocation:(id)arg1;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(id)arg2 closestStepIndex:(unsigned long long)arg3;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateTracePlaybackDetails:(id)arg1;
- (void)didUpdateTrafficForETARoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(id)arg4;
- (void)didUpdateTrafficIncidentAlert:(id)arg1;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(bool)arg7;
- (void)displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (bool)guidancePromptsEnabled;
- (int)headingOrientation;
- (void)hideSecondaryStep;
- (id)init;
- (void)navigationServiceReconnector:(id)arg1 didReconnectWithDetails:(id)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (id)remoteObjectProxyThreadUnsafe;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)willChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)willPauseNavigation;
- (void)willReroute;
- (void)willResumeFromPauseNavigation;

@end
