/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BBSectionIcon, BBSectionInfo, BBSectionParameters, NSArray, NSDictionary, NSString;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding>
{
    CDStruct_c264898c _traits;
    NSString *_sectionIdentifier;
    BBSectionInfo *_defaultSectionInfo;
    NSString *_sectionDisplayName;
    BBSectionIcon *_sectionIcon;
    NSArray *_sortDescriptors;
    BBSectionParameters *_sectionParameters;
    NSArray *_defaultSubsectionInfos;
    NSDictionary *_subsectionDisplayNames;
    NSString *_sortKey;
    BOOL _syncsBulletinDismissal;
}

+ (BOOL)supportsSecureCoding;
+ (id)identityForDataProvider:(id)arg1;
@property(readonly, nonatomic) BOOL syncsBulletinDismissal; // @synthesize syncsBulletinDismissal=_syncsBulletinDismissal;
@property(copy, nonatomic) NSDictionary *subsectionDisplayNames; // @synthesize subsectionDisplayNames=_subsectionDisplayNames;
@property(copy, nonatomic) NSArray *defaultSubsectionInfos; // @synthesize defaultSubsectionInfos=_defaultSubsectionInfos;
@property(retain, nonatomic) BBSectionParameters *sectionParameters; // @synthesize sectionParameters=_sectionParameters;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) BBSectionIcon *sectionIcon; // @synthesize sectionIcon=_sectionIcon;
@property(copy, nonatomic) NSString *sectionDisplayName; // @synthesize sectionDisplayName=_sectionDisplayName;
@property(copy, nonatomic) BBSectionInfo *defaultSectionInfo; // @synthesize defaultSectionInfo=_defaultSectionInfo;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) CDStruct_c264898c traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initForDataProvider:(id)arg1;

@end

