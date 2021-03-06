/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceCollection : NSObject <PXFaceCollection> {
    NSSet * _faces;
    NSString * _identifier;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *faces;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)transientFaceCollectionForFaces:(id)arg1;

- (void).cxx_destruct;
- (id)assetsFromCollectionUsingOptions:(id)arg1;
- (id)faces;
- (id)facesFromCollectionUsingOptions:(id)arg1;
- (id)identifier;
- (id)initWithFaces:(id)arg1;
- (id)keyFaceFromCollectionUsingOptions:(id)arg1;
- (id)name;
- (void)setIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (unsigned long long)numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 cropFactor:(unsigned long long)arg2 round:(bool)arg3 cacheResult:(bool)arg4 completionBlock:(id /* block */)arg5;

@end
