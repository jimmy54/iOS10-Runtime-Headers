/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHandlePushNotificationResult : NSObject <NSCopying> {
    bool  _handled;
    FCCKRecordZone * _recordZone;
}

@property (getter=wasHandled, nonatomic) bool handled;
@property (nonatomic, retain) FCCKRecordZone *recordZone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)recordZone;
- (void)setHandled:(bool)arg1;
- (void)setRecordZone:(id)arg1;
- (bool)wasHandled;

@end
