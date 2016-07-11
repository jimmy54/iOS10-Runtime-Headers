/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, retain) NSArray *userIdentityLookupInfos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityCreate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id)userIdentityLookupInfos;

@end