/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleQueryServer : HDQueryServer {
    NSObject<OS_dispatch_queue> * _batchQueue;
    unsigned long long  _maxResults;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

@property (nonatomic, readonly) unsigned long long maxResults;
@property (nonatomic, readonly) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (unsigned long long)maxResults;
- (id)sortDescriptors;

@end