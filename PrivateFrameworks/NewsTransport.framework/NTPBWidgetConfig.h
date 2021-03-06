/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetConfig : PBCodable <NSCopying> {
    unsigned int  _enabledSections;
    long long  _forYouCutoffTime;
    struct { 
        unsigned int forYouCutoffTime : 1; 
        unsigned int topStoriesCutoffTime : 1; 
        unsigned int trendingCutoffTime : 1; 
        unsigned int enabledSections : 1; 
    }  _has;
    long long  _topStoriesCutoffTime;
    long long  _trendingCutoffTime;
}

@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) long long forYouCutoffTime;
@property (nonatomic) bool hasEnabledSections;
@property (nonatomic) bool hasForYouCutoffTime;
@property (nonatomic) bool hasTopStoriesCutoffTime;
@property (nonatomic) bool hasTrendingCutoffTime;
@property (nonatomic) long long topStoriesCutoffTime;
@property (nonatomic) long long trendingCutoffTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enabledSections;
- (long long)forYouCutoffTime;
- (bool)hasEnabledSections;
- (bool)hasForYouCutoffTime;
- (bool)hasTopStoriesCutoffTime;
- (bool)hasTrendingCutoffTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabledSections:(unsigned int)arg1;
- (void)setForYouCutoffTime:(long long)arg1;
- (void)setHasEnabledSections:(bool)arg1;
- (void)setHasForYouCutoffTime:(bool)arg1;
- (void)setHasTopStoriesCutoffTime:(bool)arg1;
- (void)setHasTrendingCutoffTime:(bool)arg1;
- (void)setTopStoriesCutoffTime:(long long)arg1;
- (void)setTrendingCutoffTime:(long long)arg1;
- (long long)topStoriesCutoffTime;
- (long long)trendingCutoffTime;
- (void)writeTo:(id)arg1;

@end
