/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStore/ISDataProvider.h>

#import "NSCopying.h"

@interface ISProtocolDataProvider : ISDataProvider <NSCopying>
{
    BOOL _shouldPostFooterSectionChanged;
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessAuthenticationDialogs;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
}

@property BOOL shouldTriggerDownloads; // @synthesize shouldTriggerDownloads=_shouldTriggerDownloads;
@property BOOL shouldProcessProtocol; // @synthesize shouldProcessProtocol=_shouldProcessProtocol;
@property BOOL shouldProcessDialogs; // @synthesize shouldProcessDialogs=_shouldProcessDialogs;
@property BOOL shouldProcessAuthenticationDialogs; // @synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs;
@property BOOL shouldProcessAccount; // @synthesize shouldProcessAccount=_shouldProcessAccount;
@property BOOL shouldPostFooterSectionChanged; // @synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_selectFooterSection:(id)arg1;
- (BOOL)_processFailureTypeFromDictionary:(id)arg1 error:(id *)arg2;
- (void)_performActionsForResponse:(id)arg1;
- (void)_checkInAppPurchaseQueueForAction:(id)arg1;
- (void)_checkDownloadQueues;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (BOOL)processDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)processDialogFromDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

