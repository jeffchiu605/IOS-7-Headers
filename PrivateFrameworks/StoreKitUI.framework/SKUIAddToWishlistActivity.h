/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIActivity.h"

@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIAddToWishlistActivity : UIActivity
{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end

