/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/_UITargetedProxy.h>

#import "_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h"

@class _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>
{
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end

