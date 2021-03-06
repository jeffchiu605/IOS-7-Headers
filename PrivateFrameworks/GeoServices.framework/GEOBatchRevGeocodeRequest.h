/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBRequest.h"

@class NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest
{
    CDStruct_56d48c16 _additionalPlaceTypes;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    BOOL _splitIntoClusters;
    struct {
        unsigned int splitIntoClusters:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (unsigned int)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)clearAdditionalPlaceTypes;
@property(readonly, nonatomic) int *additionalPlaceTypes;
@property(readonly, nonatomic) unsigned int additionalPlaceTypesCount;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
@property(nonatomic) BOOL hasSplitIntoClusters;
@property(nonatomic) BOOL splitIntoClusters; // @synthesize splitIntoClusters=_splitIntoClusters;
- (void)dealloc;

@end

