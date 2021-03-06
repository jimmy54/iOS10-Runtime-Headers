/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideFareLineItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currencyCode;
    NSDecimalNumber * _price;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 price:(id)arg2 currencyCode:(id)arg3;
- (id)price;
- (id)title;

@end
