/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCTCapabilityInfo : NSObject <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    bool  _canEnable;
    bool  _enabled;
    NSData * _provisioningPostData;
    int  _provisioningStatus;
    NSURL * _provisioningURL;
}

@property (nonatomic) bool canEnable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *provisioningPostData;
@property (nonatomic) int provisioningStatus;
@property (nonatomic, retain) NSURL *provisioningURL;
@property (getter=isProvisioningURLInvalid, nonatomic, readonly) bool provisioningURLInvalid;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canEnable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
- (bool)isEnabled;
- (bool)isProvisioningURLInvalid;
- (id)provisioningPostData;
- (int)provisioningStatus;
- (id)provisioningURL;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCanEnable:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setProvisioningPostData:(id)arg1;
- (void)setProvisioningStatus:(int)arg1;
- (void)setProvisioningURL:(id)arg1;

@end
