/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVOperationExclusivityController : NSObject {
    NSMutableDictionary * _operations;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedExclusivityController;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1 forCategories:(id)arg2;
- (id)init;
- (void)removeOperation:(id)arg1 forCategories:(id)arg2;

@end
