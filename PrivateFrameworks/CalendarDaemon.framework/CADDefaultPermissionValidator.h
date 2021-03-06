/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {
    ClientConnection * _connection;
}

@property (readonly) bool canMakeSpotlightChanges;
@property (readonly) bool canModifyCalendarDatabase;
@property (readonly) bool canModifySuggestedEventCalendar;
@property (readonly) bool canSetAutomaticLocationGeocodingAllowedValue;
@property (retain) ClientConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasContactsUIEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool testingAccessLevelGranted;

- (void).cxx_destruct;
- (bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(bool)arg2;
- (bool)canMakeSpotlightChanges;
- (bool)canModifyCalendarDatabase;
- (bool)canModifySuggestedEventCalendar;
- (bool)canSetAutomaticLocationGeocodingAllowedValue;
- (id)connection;
- (bool)hasContactsUIEntitlement;
- (id)initWithClientConnection:(id)arg1;
- (void)setConnection:(id)arg1;
- (bool)testingAccessLevelGranted;

@end
