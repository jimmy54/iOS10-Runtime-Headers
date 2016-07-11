/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate> {
    HAPCharacteristic * _categoryCharacteristic;
    bool  _discoveredBridgeableAccessory;
    HAPCharacteristic * _reachabilityCharacteristic;
}

@property (nonatomic) HAPCharacteristic *categoryCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool discoveredBridgeableAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic) HAPCharacteristic *reachabilityCharacteristic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)__category;
- (bool)__isReachable;
- (bool)__parseBridgeService:(id)arg1;
- (bool)__parseServices;
- (id)_initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 discoveredBridgeableAccessory:(bool)arg4;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (id)category;
- (id)categoryCharacteristic;
- (bool)discoveredBridgeableAccessory;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (bool)isPrimary;
- (bool)mergeWithAccessory:(id)arg1;
- (id)reachabilityCharacteristic;
- (void)setCategory:(id)arg1;
- (void)setCategoryCharacteristic:(id)arg1;
- (void)setDiscoveredBridgeableAccessory:(bool)arg1;
- (void)setReachabilityCharacteristic:(id)arg1;
- (void)setReachable:(bool)arg1;
- (id)shortDescription;

@end