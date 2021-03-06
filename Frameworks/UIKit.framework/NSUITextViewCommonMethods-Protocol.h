/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTextContainerView.h"
#import "NSTextLayoutOrientationProvider.h"

@class NSTextContainer;

@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider, NSTextContainerView>
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (BOOL)isHorizontallyResizable;
- (struct CGSize)minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (struct CGSize)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (struct CGRect)visibleRect;

@optional
@property(nonatomic) NSTextContainer *textContainer;
- (void)addTextAttachmentView:(id)arg1 forAttachment:(id)arg2;
@end

