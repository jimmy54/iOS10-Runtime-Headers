/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    NSNumber * _persistentID;
    long long  _status;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSNumber *persistentID;
@property (nonatomic) long long status;

+ (id)_resultWithPersistentID:(long long)arg1 status:(long long)arg2 error:(id)arg3;
+ (id)resultWithExistingActivity:(long long)arg1;
+ (id)resultWithInvalidActivity:(long long)arg1;
+ (id)resultWithValidActivity:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)persistentID;
- (void)setError:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
