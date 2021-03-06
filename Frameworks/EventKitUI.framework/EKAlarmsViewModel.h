/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKAlarmsViewModel : NSObject {
    EKCalendarItem * _calendarItem;
    bool  _needsUpdate;
    NSMutableArray * _uiAlarms;
}

@property (nonatomic, retain) EKCalendarItem *calendarItem;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) NSMutableArray *uiAlarms;

- (void).cxx_destruct;
- (bool)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (id)calendarItem;
- (id)init;
- (id)initWithCalendarItem:(id)arg1;
- (bool)needsUpdate;
- (void)setCalendarItem:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setUiAlarms:(id)arg1;
- (id)uiAlarms;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end
