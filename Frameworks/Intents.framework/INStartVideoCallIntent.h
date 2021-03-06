/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntent>

@property (nonatomic) long long audioRoute;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (long long)audioRoute;
- (id)contacts;
- (id)initWithContacts:(id)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setContacts:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)_cdInteractionMechanism;
- (id)_cdRecipients;

@end
