/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUDialRequest : NSObject <NSCopying, NSSecureCoding, TUCallRequest, TUVideoRequest> {
    NSString * _audioSourceIdentifier;
    int  _callIdentifier;
    NSString * _contactIdentifier;
    NSString * _destinationID;
    bool  _dialAssisted;
    long long  _dialType;
    bool  _endpointOnCurrentDevice;
    bool  _hostOnCurrentDevice;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    long long  _originatingUIType;
    bool  _performDialAssist;
    bool  _performLocalDialAssist;
    TUCallProvider * _provider;
    TUCallProviderManager * _providerManager;
    bool  _showUIPrompt;
    long long  _ttyType;
    NSString * _uniqueProxyIdentifier;
    bool  _video;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, copy) NSString *audioSourceIdentifier;
@property (nonatomic) int callIdentifier;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *destinationID;
@property (getter=isDialAssisted, nonatomic) bool dialAssisted;
@property (nonatomic) long long dialType;
@property (nonatomic) bool endpointOnCurrentDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hostOnCurrentDevice;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (nonatomic) long long originatingUIType;
@property (nonatomic) bool performDialAssist;
@property (nonatomic) bool performLocalDialAssist;
@property (nonatomic, retain) TUCallProvider *provider;
@property (nonatomic, readonly) TUCallProviderManager *providerManager;
@property (nonatomic, readonly) int service;
@property (nonatomic) bool showUIPrompt;
@property (readonly) Class superclass;
@property (nonatomic) long long ttyType;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (nonatomic, readonly) bool useTTY;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSArray *validityErrors;
@property (getter=isVideo, nonatomic) bool video;

+ (id /* block */)callIdentifierToContactIdentifierTransformBlock;
+ (id /* block */)contactIdentifierToCallIdentifierTransformBlock;
+ (long long)dialRequestTypeForIntentDestinationType:(long long)arg1;
+ (long long)intentTTYTypeForTTYType:(long long)arg1;
+ (long long)originatingUITypeForString:(id)arg1;
+ (void)setCallIdentifierToContactIdentifierTransformBlock:(id /* block */)arg1;
+ (void)setContactIdentifierToCallIdentifierTransformBlock:(id /* block */)arg1;
+ (id)stringForDialType:(long long)arg1;
+ (id)stringForOriginatingUIType:(long long)arg1;
+ (id)stringForTTYType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)ttyTypeForIntentTTYType:(long long)arg1;
+ (long long)ttyTypeForString:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLHost;
- (id)URLQueryItems;
- (id)URLScheme;
- (id)_contactFromINPerson:(id)arg1 bestGuessDestinationID:(id*)arg2;
- (id)audioSourceIdentifier;
- (id)audioSourceIdentifierURLQueryItem;
- (bool)boolValueForQueryItemWithName:(id)arg1 inURLComponents:(id)arg2;
- (int)callIdentifier;
- (int)callIdentifierFromURLComponents:(id)arg1;
- (id)callIdentifierQueryItemName;
- (id)callIdentifierURLQueryItem;
- (id)contactIdentifier;
- (id)contactStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationID;
- (id)destinationIDFromURL:(id)arg1;
- (id)dialAssistedURLQueryItem;
- (id)dialRequestByReplacingProvider:(id)arg1;
- (long long)dialType;
- (void)encodeWithCoder:(id)arg1;
- (bool)endpointOnCurrentDevice;
- (id)forceAssistURLQueryItem;
- (unsigned long long)hash;
- (bool)hostOnCurrentDevice;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDialIntent:(id)arg1 providerManager:(id)arg2;
- (id)initWithProvider:(id)arg1;
- (id)initWithProvider:(id)arg1 providerManager:(id)arg2;
- (id)initWithService:(int)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2;
- (bool)isDialAssisted;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDialRequest:(id)arg1;
- (bool)isValid;
- (bool)isVideo;
- (id)isVoicemailURLQueryItem;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (id)noPromptURLQueryItem;
- (long long)originatingUIType;
- (id)originatingUIURLQueryItem;
- (bool)performDialAssist;
- (bool)performLocalDialAssist;
- (id)provider;
- (id)providerManager;
- (int)service;
- (int)serviceFromURLComponents:(id)arg1;
- (void)setAudioSourceIdentifier:(id)arg1;
- (void)setCallIdentifier:(int)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setDialAssisted:(bool)arg1;
- (void)setDialType:(long long)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setHostOnCurrentDevice:(bool)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setOriginatingUIType:(long long)arg1;
- (void)setPerformDialAssist:(bool)arg1;
- (void)setPerformLocalDialAssist:(bool)arg1;
- (void)setProvider:(id)arg1;
- (void)setShowUIPrompt:(bool)arg1;
- (void)setTtyType:(long long)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)setVideo:(bool)arg1;
- (bool)showUIPrompt;
- (id)suppressAssistURLQueryItem;
- (long long)ttyType;
- (id)ttyTypeURLQueryItem;
- (id)uniqueProxyIdentifier;
- (bool)useTTY;
- (id)userActivity;
- (id)validityErrorForDestinationIDWithVoicemail;
- (id)validityErrorForEmergencyCall;
- (id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
- (id)validityErrorForNonNormalDialTypeWithoutTelephony;
- (id)validityErrorForNormalDialTypeWithUnknownDestination;
- (id)validityErrorForUnspecifiedProvider;
- (id)validityErrorForVideoUnsupported;
- (id)validityErrors;

@end
