/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
    int _rank;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    int _ratingSystem;
    SSItemArtworkImage *_ratingSystemLogo;
    BOOL _shouldHideWhenRestricted;
}

+ (int)ratingSystemFromString:(id)arg1;
@property(nonatomic) BOOL shouldHideWhenRestricted; // @synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted;
@property(copy, nonatomic) SSItemArtworkImage *ratingSystemLogo; // @synthesize ratingSystemLogo=_ratingSystemLogo;
@property(nonatomic) int ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(nonatomic) int rank; // @synthesize rank=_rank;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForApps:(int)arg1;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
