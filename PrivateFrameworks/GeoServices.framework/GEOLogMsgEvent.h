/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEvent : PBCodable <NSCopying> {
    GEOLogMsgEventCacheHit * _cacheHitEvent;
    GEOLogMsgEventDirections * _directionsEvent;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    GEOLogMsgEventListInteractionSession * _listInteractionSession;
    GEOLogMsgEventLogFramework * _logFrameworkEvent;
    NSMutableArray * _logMsgStates;
    GEOLogMsgEventMapLaunch * _mapLaunchEvent;
    GEOLogMsgEventMapsWidgetsInteractionSession * _mapsWidgetsInteractionSession;
    GEOLogMsgEventNetwork * _networkEvent;
    GEOLogMsgEventPlaceDataCache * _placeDataCacheEvent;
    GEOLogMsgEventProactiveSuggestionInteractionSession * _proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRefineSearchSession * _refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession * _rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession * _rideBookingSession;
    GEOLogMsgEventStateTiming * _stateTimingEvent;
    GEOLogMsgEventTileSetState * _tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis * _timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime * _timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch * _transitAppLaunchEvent;
    GEOLogMsgEventUserAction * _userActionEvent;
}

@property (nonatomic, retain) GEOLogMsgEventCacheHit *cacheHitEvent;
@property (nonatomic, retain) GEOLogMsgEventDirections *directionsEvent;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasCacheHitEvent;
@property (nonatomic, readonly) bool hasDirectionsEvent;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasListInteractionSession;
@property (nonatomic, readonly) bool hasLogFrameworkEvent;
@property (nonatomic, readonly) bool hasMapLaunchEvent;
@property (nonatomic, readonly) bool hasMapsWidgetsInteractionSession;
@property (nonatomic, readonly) bool hasNetworkEvent;
@property (nonatomic, readonly) bool hasPlaceDataCacheEvent;
@property (nonatomic, readonly) bool hasProactiveSuggestionInteractionSessionEvent;
@property (nonatomic, readonly) bool hasRefineSearchSession;
@property (nonatomic, readonly) bool hasRideBookedSession;
@property (nonatomic, readonly) bool hasRideBookingSession;
@property (nonatomic, readonly) bool hasStateTimingEvent;
@property (nonatomic, readonly) bool hasTileSetStateEvent;
@property (nonatomic, readonly) bool hasTimeToLeaveHypothesisEvent;
@property (nonatomic, readonly) bool hasTimeToLeaveInitialTravelTimeEvent;
@property (nonatomic, readonly) bool hasTransitAppLaunchEvent;
@property (nonatomic, readonly) bool hasUserActionEvent;
@property (nonatomic, retain) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property (nonatomic, retain) GEOLogMsgEventLogFramework *logFrameworkEvent;
@property (nonatomic, retain) NSMutableArray *logMsgStates;
@property (nonatomic, retain) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property (nonatomic, retain) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property (nonatomic, retain) GEOLogMsgEventNetwork *networkEvent;
@property (nonatomic, retain) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property (nonatomic, retain) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property (nonatomic, retain) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession;
@property (nonatomic, retain) GEOLogMsgEventStateTiming *stateTimingEvent;
@property (nonatomic, retain) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property (nonatomic, retain) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property (nonatomic, retain) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property (nonatomic, retain) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property (nonatomic, retain) GEOLogMsgEventUserAction *userActionEvent;

+ (void)_initializeAcceptedLogMsgStateTypes;
+ (void)_initializeAllowedSessionTypes;
+ (id)acceptedLogMsgStates;
+ (id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1;
+ (bool)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2;
+ (Class)logMsgStateType;

- (int)StringAsEventType:(id)arg1;
- (bool)acceptsLogMsgStateType:(int)arg1;
- (void)addLogMsgState:(id)arg1;
- (unsigned long long)allowedSessionType;
- (id)cacheHitEvent;
- (void)clearLogMsgStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsEvent;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasCacheHitEvent;
- (bool)hasDirectionsEvent;
- (bool)hasEventType;
- (bool)hasListInteractionSession;
- (bool)hasLogFrameworkEvent;
- (bool)hasLogMsgStateOfType:(int)arg1;
- (bool)hasMapLaunchEvent;
- (bool)hasMapsWidgetsInteractionSession;
- (bool)hasNetworkEvent;
- (bool)hasPlaceDataCacheEvent;
- (bool)hasProactiveSuggestionInteractionSessionEvent;
- (bool)hasRefineSearchSession;
- (bool)hasRideBookedSession;
- (bool)hasRideBookingSession;
- (bool)hasStateTimingEvent;
- (bool)hasTileSetStateEvent;
- (bool)hasTimeToLeaveHypothesisEvent;
- (bool)hasTimeToLeaveInitialTravelTimeEvent;
- (bool)hasTransitAppLaunchEvent;
- (bool)hasUserActionEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFullCarPlayStateAllowed;
- (bool)isNavigationSessionAllowed;
- (id)listInteractionSession;
- (id)logFrameworkEvent;
- (id)logMsgStateAtIndex:(unsigned long long)arg1;
- (id)logMsgStateOfType:(int)arg1;
- (id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (id)logMsgStates;
- (unsigned long long)logMsgStatesCount;
- (id)mapLaunchEvent;
- (id)mapsWidgetsInteractionSession;
- (void)mergeFrom:(id)arg1;
- (id)networkEvent;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2;
- (id)placeDataCacheEvent;
- (id)proactiveSuggestionInteractionSessionEvent;
- (bool)readFrom:(id)arg1;
- (id)refineSearchSession;
- (id)rideBookedSession;
- (id)rideBookingSession;
- (void)setCacheHitEvent:(id)arg1;
- (void)setDirectionsEvent:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setListInteractionSession:(id)arg1;
- (void)setLogFrameworkEvent:(id)arg1;
- (void)setLogMsgStates:(id)arg1;
- (void)setMapLaunchEvent:(id)arg1;
- (void)setMapsWidgetsInteractionSession:(id)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setPlaceDataCacheEvent:(id)arg1;
- (void)setProactiveSuggestionInteractionSessionEvent:(id)arg1;
- (void)setRefineSearchSession:(id)arg1;
- (void)setRideBookedSession:(id)arg1;
- (void)setRideBookingSession:(id)arg1;
- (void)setStateTimingEvent:(id)arg1;
- (void)setTileSetStateEvent:(id)arg1;
- (void)setTimeToLeaveHypothesisEvent:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeEvent:(id)arg1;
- (void)setTransitAppLaunchEvent:(id)arg1;
- (void)setUserActionEvent:(id)arg1;
- (id)stateTimingEvent;
- (id)tileSetStateEvent;
- (id)timeToLeaveHypothesisEvent;
- (id)timeToLeaveInitialTravelTimeEvent;
- (id)transitAppLaunchEvent;
- (id)userActionEvent;
- (void)writeTo:(id)arg1;

@end
