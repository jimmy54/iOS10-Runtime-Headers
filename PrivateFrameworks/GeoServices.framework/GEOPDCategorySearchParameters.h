/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {
    unsigned int  _blurredHourOfDay;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int blurredHourOfDay : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int maxResults : 1; 
        unsigned int searchType : 1; 
    }  _has;
    unsigned int  _maxResults;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    int  _searchType;
    NSData * _suggestionEntryMetadata;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) bool hasBlurredHourOfDay;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasRecentRouteInfo;
@property (nonatomic) bool hasSearchType;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic) int searchType;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (int)StringAsSearchType:(id)arg1;
- (unsigned int)blurredHourOfDay;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBlurredHourOfDay;
- (bool)hasDayOfWeek;
- (bool)hasMaxResults;
- (bool)hasRecentRouteInfo;
- (bool)hasSearchType;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recentRouteInfo;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setBlurredHourOfDay:(unsigned int)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setHasBlurredHourOfDay:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRecentRouteInfo:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
