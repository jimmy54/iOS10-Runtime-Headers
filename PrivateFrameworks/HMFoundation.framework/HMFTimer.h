/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFTimer : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFTimerDelegate> * _delegate;
    unsigned long long  _leeway;
    unsigned long long  _options;
    bool  _running;
    double  _timeInterval;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMFTimerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long leeway;
@property (nonatomic, readonly) unsigned long long options;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)_fire;
- (void)_handleExpiration;
- (void)_kick;
- (void)_resume;
- (void)_suspend;
- (id)clientQueue;
- (void)dealloc;
- (id)delegate;
- (void)fire;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (bool)isRunning;
- (void)kick;
- (unsigned long long)leeway;
- (unsigned long long)options;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)suspend;
- (double)timeInterval;
- (id)timer;

@end
