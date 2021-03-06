/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSAppleIDRegistrationCenterListener.h"
#import "IDSAppleIDSRegistrationCenterListener.h"
#import "IDSAppleSMSRegistrationCenterListener.h"

@class NSArray, NSMutableArray, NSString;

@interface IDSAppleRegistrationController : NSObject <IDSAppleSMSRegistrationCenterListener, IDSAppleIDRegistrationCenterListener, IDSAppleIDSRegistrationCenterListener>
{
    NSString *_deviceName;
    NSMutableArray *_handlers;
    NSMutableArray *_activeRegistrations;
    NSMutableArray *_trackedRegistrations;
    NSMutableArray *_authenticatedRegistrations;
    int _iMessageToken;
    int _faceTimeToken;
    int _callingToken;
}

+ (BOOL)systemSupportsRegistrationInfo:(id)arg1;
+ (id)sharedInstance;
+ (BOOL)validSIMStateForRegistration;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *authenticatedRegistrations; // @synthesize authenticatedRegistrations=_authenticatedRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void)_systemConfigurationPrefsChanged;
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsMatchingUserID:(id)arg1;
- (void)stopTrackingActiveRegistration:(id)arg1;
- (void)startTrackingActiveRegistration:(id)arg1;
- (void)removeAuthenticatedRegistration:(id)arg1;
- (void)addAuthenticatedRegistration:(id)arg1;
- (void)stopTrackingRegistration:(id)arg1;
- (void)startTrackingRegistration:(id)arg1;
- (void)_updateNotifyState;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_SIMInserted:(id)arg1;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_technologyChanged:(id)arg1;
- (void)_checkTechChange;
- (void)center:(id)arg1 noteRegistrationRequired:(id)arg2;
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(BOOL)arg6;
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
- (BOOL)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;
- (BOOL)_checkRegistrationCompleteSetupBeforeAuthentication:(id)arg1;
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;
- (void)centerNeedsNewIdentification:(id)arg1;
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(int)arg3;
- (void)center:(id)arg1 succeededIdentification:(id)arg2;
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededRegistration:(id)arg2;
- (void)_notifyDeregistrationStarting:(id)arg1;
- (void)_notifyRegistrationSuccess:(id)arg1;
- (void)_notifyRegistrationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyRegistrationStarting:(id)arg1;
- (void)_notifyRegistrationUpdated:(id)arg1;
- (void)_notifyNeedsNewRegistration;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (BOOL)unregisterInfo:(id)arg1;
- (BOOL)registerInfo:(id)arg1;
- (BOOL)registrationSupportedForRegistration:(id)arg1;
- (BOOL)validRegistrationStateToMakeCallsForRegistration:(id)arg1;
- (BOOL)validRegistrationStateToAcceptCallsForRegistration:(id)arg1;
- (void)dealloc;
- (id)init;

@end

