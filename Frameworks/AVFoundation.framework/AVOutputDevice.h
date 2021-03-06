/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal * _outputDevice;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) bool hasBatteryLevel;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSDictionary *modelSpecificInformation;
@property (nonatomic, readonly) NSString *name;

+ (id)sharedLocalDevice;

- (id)ID;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (id)_weakReference;
- (float)batteryLevel;
- (void)dealloc;
- (long long)deviceType;
- (struct OpaqueFigEndpoint { }*)figEndpoint;
- (void)finalize;
- (double)frecencyScore;
- (bool)hasBatteryLevel;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)modelID;
- (id)modelSpecificInformation;
- (id)name;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)updateFrecencyScore;

@end
