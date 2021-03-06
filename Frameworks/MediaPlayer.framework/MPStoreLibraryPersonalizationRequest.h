/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest {
    MPModelLibraryRequest * _libraryRequest;
    MPModelRequest<MPStoreLibraryUnpersonalizedRequesting> * _unpersonalizedRequest;
}

@property (nonatomic, readonly, copy) MPModelLibraryRequest *libraryRequest;
@property (nonatomic, readonly, copy) MPModelRequest<MPStoreLibraryUnpersonalizedRequesting> *unpersonalizedRequest;

+ (id)personalizedResponseForModelObject:(id)arg1 requestedProperties:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1;
- (id)libraryRequest;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)unpersonalizedRequest;

@end
