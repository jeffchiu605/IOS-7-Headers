/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol AVConferenceDelegate
- (void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)serverDiedForConference:(id)arg1;
- (void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
- (void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3;
- (void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(BOOL)arg3;
- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(int)arg3;

@optional
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(int)arg2;
- (void)conference:(id)arg1 didReceiveARPLData:(id)arg2 withCallID:(int)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)conference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(id)arg4;
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(int)arg3;
@end
