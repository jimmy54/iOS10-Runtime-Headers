/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKWrappedPayment : NSObject <NSSecureCoding> {
    PKSecureElementCertificateSet * _certificates;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, copy) PKSecureElementCertificateSet *certificates;
@property (nonatomic, copy) NSData *transactionData;
@property (nonatomic, copy) NSString *transactionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setTransactionData:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionData;
- (id)transactionIdentifier;

@end