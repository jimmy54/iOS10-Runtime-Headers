/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *businessId;
@property (nonatomic, copy) NSDictionary *businessIds;
@property (nonatomic, copy) NSURL *businessUrl;
@property (nonatomic, copy) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *openingHours;
@property (nonatomic, copy) NSArray *phoneNumbers;
@property (nonatomic, copy) NSURL *photo;
@property (nonatomic, retain) SALocalSearchRating *rating;
@property (nonatomic, copy) NSArray *reviews;
@property (readonly) Class superclass;
@property (nonatomic) long long totalNumberOfReviews;

+ (id)business;
+ (id)businessWithDictionary:(id)arg1 context:(id)arg2;

- (id)businessId;
- (id)businessIds;
- (id)businessUrl;
- (id)categories;
- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (id)name;
- (id)openingHours;
- (id)phoneNumbers;
- (id)photo;
- (id)rating;
- (id)reviews;
- (void)setBusinessId:(id)arg1;
- (void)setBusinessIds:(id)arg1;
- (void)setBusinessUrl:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpeningHours:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setTotalNumberOfReviews:(long long)arg1;
- (long long)totalNumberOfReviews;

@end