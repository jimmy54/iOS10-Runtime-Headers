/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredential : NSObject {
    long long  _credentialType;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSString * _expiration;
    NSString * _longDescription;
    PKPaymentRequirementsResponse * _requirementsResponse;
    NSString * _sanitizedPrimaryAccountNumber;
}

@property (nonatomic) long long credentialType;
@property (nonatomic, retain) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSString *longDescription;
@property (nonatomic, retain) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;

+ (id)fakeRemoteCredentials;

- (void).cxx_destruct;
- (long long)credentialType;
- (id)eligibilityResponse;
- (id)expiration;
- (bool)isLocalPassCredential;
- (bool)isRemoteCredential;
- (id)localPassCredential;
- (id)longDescription;
- (id)remoteCredential;
- (id)requirementsResponse;
- (id)sanitizedPrimaryAccountNumber;
- (void)setCredentialType:(long long)arg1;
- (void)setEligibilityResponse:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setRequirementsResponse:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;

@end
