/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSServiceProviderFetchOperation : VSStoreRequestOperation {
    NSArray * _appMappings;
    NSString * _identityProviderID;
}

@property (nonatomic, copy) NSArray *appMappings;
@property (nonatomic, readonly, copy) NSString *identityProviderID;

- (void).cxx_destruct;
- (id)URLBagKey;
- (id)appMappings;
- (void)handleResponseObject:(id)arg1;
- (id)identityProviderID;
- (id)init;
- (id)initWithIdentityProviderID:(id)arg1;
- (id)requestParameters;
- (void)setAppMappings:(id)arg1;

@end
