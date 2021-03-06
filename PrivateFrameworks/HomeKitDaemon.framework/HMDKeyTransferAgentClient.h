/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceBrowserDelegate, HMFNetServiceDelegate> {
    NSMutableDictionary * _bonjourKeys;
    NSMutableDictionary * _idsKeys;
    NSString * _pairingWithUUID;
    bool  _resolutionInProgress;
    HMFNetServiceBrowser * _serviceBrowser;
    NSMutableSet * _targetsToProcess;
}

@property (nonatomic, retain) NSMutableDictionary *bonjourKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *idsKeys;
@property (nonatomic, retain) NSString *pairingWithUUID;
@property (nonatomic) bool resolutionInProgress;
@property (readonly) HMFNetServiceBrowser *serviceBrowser;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *targetsToProcess;

+ (id)logCategory;
+ (void)twoFactorAuthenticationEnabledForAccount:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)__deviceUpdated:(id)arg1;
- (void)_accessoryIsReachable:(id)arg1;
- (void)_beginBonjourResolution:(bool)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (void)_endPairingWithError:(id)arg1;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (bool)_newDeviceSeen:(id)arg1;
- (void)_reallyBeginBonjourResolution;
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2;
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (id)bonjourKeys;
- (void)dealloc;
- (id)idsKeys;
- (id)initWithHomeManager:(id)arg1;
- (id)logIdentifier;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (id)pairingWithUUID;
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;
- (bool)resolutionInProgress;
- (id)serviceBrowser;
- (void)setBonjourKeys:(id)arg1;
- (void)setIdsKeys:(id)arg1;
- (void)setPairingWithUUID:(id)arg1;
- (void)setResolutionInProgress:(bool)arg1;
- (void)setTargetsToProcess:(id)arg1;
- (id)targetsToProcess;

@end
