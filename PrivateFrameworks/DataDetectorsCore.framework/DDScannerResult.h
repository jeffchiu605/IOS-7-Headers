/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding>
{
    struct __DDResult *_coreResult;
    NSArray *_subResultsCache;
}

+ (BOOL)supportsSecureCoding;
+ (id)resultsFromCoreResults:(struct __CFArray *)arg1;
+ (id)resultFromCoreResult:(struct __DDResult *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getStreet:(id *)arg1 city:(id *)arg2 state:(id *)arg3 zip:(id *)arg4 country:(id *)arg5;
- (BOOL)getIMScreenNameValue:(id *)arg1 type:(id *)arg2;
- (BOOL)getMailValue:(id *)arg1 label:(id *)arg2;
- (BOOL)getPhoneValue:(id *)arg1 label:(id *)arg2;
- (BOOL)extractStartDate:(id *)arg1 startTimezone:(id *)arg2 endDate:(id *)arg3 endTimezone:(id *)arg4 allDayRef:(char *)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id *)arg3 allDayRef:(char *)arg4;
- (double)getDuration;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setSubResults:(id)arg1;
- (id)subResults;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)matchedString;
- (id)contextualData;
- (id)location;
- (id)rawValue;
- (id)value;
- (void)setType:(id)arg1;
- (id)type;
- (long)score;
- (CDStruct_1ef3fb1f)cfRange;
@property struct __DDQueryRange queryRange;
@property struct _NSRange range;
- (struct __DDResult *)coreResult;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoreResult:(struct __DDResult *)arg1;
- (id)init;

@end
