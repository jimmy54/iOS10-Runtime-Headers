/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBatchUploader : NSObject {
    NSMutableSet * _cameraAsset;
    PLCloudPhotoLibraryManager * _cplManager;
    NSMutableSet * _downloadedDeleteUuid;
    bool  _initialUpload;
    PLPhotoLibrary * _photoLibrary;
    bool  _shouldGenerateDerivatives;
    NSMutableArray * _uploadBatchArray;
}

@property bool initialUpload;
@property bool shouldGenerateDerivatives;

- (void)_addAsset:(id)arg1 toAssetChanges:(id)arg2 withMode:(int)arg3 seenAssetUuid:(id)arg4;
- (void)_addLocalResourcesToRecord:(id)arg1;
- (bool)_asset:(id)arg1 isIn:(id)arg2;
- (void)_cleanUploadedResources:(id)arg1;
- (id)_fetchChangesFromEvent:(id)arg1;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1;
- (bool)_isKnownDeletionForUuid:(id)arg1;
- (bool)_needsToIncludeMaster:(id)arg1 forAsset:(id)arg2;
- (void)_processAlbumDeletes:(id)arg1 albumInserts:(id)arg2 albumChanges:(id)arg3 withBatchManager:(id)arg4;
- (void)_processPendingAlbums:(id)arg1 withBatchManager:(id)arg2;
- (void)_processPendingAssets:(id)arg1 withBatchManager:(id)arg2;
- (void)_push:(id)arg1;
- (void)_pushBatches:(id)arg1;
- (void)_sendAlbums:(id)arg1 toBatchManager:(id)arg2;
- (void)_sendAssets:(id)arg1 toBatchManager:(id)arg2;
- (void)_sortData:(id)arg1 withMode:(int)arg2 forUploadChanges:(id)arg3 assets:(id)arg4 albums:(id)arg5 inManagedObjectContext:(id)arg6;
- (void)_sortRelationshipData:(id)arg1 forRelationshipUpdate:(id)arg2 inManagedObjectContext:(id)arg3;
- (id)_validateAssets:(id)arg1 fromCloudUuidDeleteList:(id)arg2;
- (void)addBatches:(id)arg1;
- (void)clearUploadArray;
- (id)createBatchesForChanges:(id)arg1 insertedPhotoCount:(unsigned long long*)arg2 insertedVideoCount:(unsigned long long*)arg3 totalSizeOfUnpushedOriginals:(unsigned long long*)arg4;
- (id)createUploadBatchesForDeletionFromEvent:(id)arg1;
- (void)dealloc;
- (void)handleUploadBatchesForDeletionFromEvent:(id)arg1;
- (void)handleUploadBatchesFromEvent:(id)arg1 insertedPhotoCount:(unsigned long long*)arg2 insertedVideoCount:(unsigned long long*)arg3 totalSizeOfUnpushedOriginals:(unsigned long long*)arg4;
- (bool)hasBatchesToUpload;
- (id)initWithLibrary:(id)arg1 withCPLManager:(id)arg2;
- (bool)initialUpload;
- (unsigned long long)numberOfBatchesToUpload;
- (id)pop;
- (id)processCommitError:(id)arg1 andFinalizeError:(id)arg2 forUploadBatchContainer:(id)arg3 totalSizeOfUnpushedOriginals:(unsigned long long*)arg4;
- (void)processGenerateDerivativesCommitError:(id)arg1 inUploadBatch:(id)arg2;
- (void)recordDeletionOnUuids:(id)arg1;
- (void)setInitialUpload:(bool)arg1;
- (void)setShouldGenerateDerivatives:(bool)arg1;
- (bool)shouldGenerateDerivatives;
- (bool)shouldProcessDuringInitialUpload:(id)arg1;
- (void)uploadFullPhotoLibraryToCloud;

@end
