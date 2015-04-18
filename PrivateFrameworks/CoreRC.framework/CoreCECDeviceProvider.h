//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRC/CoreCECDevice.h>

@interface CoreCECDeviceProvider : CoreCECDevice
{
    struct {
        unsigned char destination;
        struct CECUserControl control;
        char isValid;
    } _userControlInitiatorState;
    struct {
        CoreCECDevice *sender;
        struct CECUserControl control;
        char isValid;
    } _userControlFollowerState;
    unsigned int _userControlInitiatorRepetitionTimeoutGeneration;
    unsigned int _userControlFollowerSafetyTimeoutGeneration;
    unsigned char _sendFromAddress;
    unsigned short _deckStatusRequestMask;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short deckStatusRequestMask; // @synthesize deckStatusRequestMask=_deckStatusRequestMask;
- (BOOL)abortTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)giveOSDNameTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)pollTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)getMenuLanguageTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)setStreamPathPhysicalAddress:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)routingInformationPhysicalAddress:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)routingChangeOriginalAddress:(unsigned int)arg1 newAddress:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)textViewOnTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)imageViewOnTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 to:(unsigned char)arg3 error:(id *)arg4;
- (BOOL)deckStatusWithInfo:(unsigned int)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)inactiveSourceTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)activeSource:(id *)arg1;
- (void)userControlCancelFollowerSafetyTimeout;
- (void)userControlScheduleFollowerSafetyTimeout;
- (BOOL)reportPowerStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)cecVersion:(unsigned char)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)deviceVendorID:(unsigned int)arg1 error:(id *)arg2;
- (void)error:(id)arg1 handlingMessage:(id)arg2 fromDevice:(id)arg3;
- (void)handleSystemAudioModeStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleUserControlReleasedMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleUserControlPressedMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDeckStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleGiveDevicePowerStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleReportPowerStatusMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleSetSystemAudioModeMessage:(id)arg1 fromDevice:(id)arg2;
- (void)sendFeatureAbort:(unsigned char)arg1 forMessage:(id)arg2;
- (BOOL)setOSDName:(union CECOSDName)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)setMenuLanguage:(struct CECLanguage)arg1 error:(id *)arg2;
- (void)handleGetCECVersionMessage:(id)arg1 fromDevice:(id)arg2;
- (void)handleCECVersionMessage:(id)arg1 fromDevice:(id)arg2;
- (BOOL)handleUserControl:(struct CECUserControl)arg1 pressed:(BOOL)arg2 fromDevice:(id)arg3 abortReason:(unsigned char *)arg4;
- (void)userControlFollowerSynthesizeRelease;
- (void)userControlFollowerSafetyTimeoutExpired;
- (void)userControlInitiatorRepetitionTimeoutExpired;
- (BOOL)systemAudioModeRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (id)busProvider;
- (BOOL)giveSystemAudioModeStatusTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)sendActiveSourceStatus:(BOOL)arg1 error:(id *)arg2;
- (BOOL)userControlReleasedTo:(unsigned char)arg1 error:(id *)arg2;
- (void)userControlCancelInitiatorRepetitionTimeout;
- (BOOL)userControlPressed:(struct CECUserControl)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (void)userControlScheduleInitiatorRepetitionTimeout;
- (BOOL)getRemoteControlDestination:(id *)arg1 logicalAddress:(unsigned char *)arg2 forTargetDevice:(id)arg3 command:(unsigned char)arg4 error:(id *)arg5;
- (BOOL)giveDevicePowerStatusTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)givePhysicalAddressTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)standbyTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)oneTouchPlayWithMenu:(BOOL)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)giveDeckStatusWithRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)playWithMode:(unsigned int)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)deckControlWithMode:(unsigned int)arg1 to:(unsigned char)arg2 error:(id *)arg3;
- (void)sendDeckStatusToDevice:(id)arg1;
@property(nonatomic) unsigned char sendFromAddress; // @synthesize sendFromAddress=_sendFromAddress;
- (BOOL)getCECVersionTo:(unsigned char)arg1 error:(id *)arg2;
- (BOOL)sendMessage:(id)arg1 error:(id *)arg2;
- (void)trackMessage:(id)arg1 fromDevice:(id)arg2;
- (void)trackMessage:(id)arg1 toDevice:(id)arg2;
- (void)handleMessage:(id)arg1 fromDevice:(id)arg2 broadcast:(BOOL)arg3;
- (void)didReceiveMessage:(id)arg1 fromDevice:(id)arg2;
- (BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id *)arg3;
- (id)filterMessage:(id)arg1 fromDevice:(id)arg2;
- (BOOL)updateActiveSourceStatus:(BOOL)arg1 error:(id *)arg2;
- (BOOL)reportPhysicalAddress:(id *)arg1;
- (BOOL)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id *)arg3;
- (id)initWithBus:(id)arg1 logicalAddress:(unsigned char)arg2 physicalAddress:(unsigned int)arg3 deviceType:(unsigned int)arg4;
- (BOOL)systemAudioModeRequest:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id *)arg2;
- (BOOL)resignActiveSource:(id *)arg1;
- (BOOL)requestActiveSource:(id *)arg1;
- (BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id *)arg2;
- (BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id *)arg2;
- (BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)deckControlPlayWithMode:(unsigned int)arg1 target:(id)arg2 error:(id *)arg3;
- (BOOL)deckControlCommandWithMode:(unsigned int)arg1 target:(id)arg2 error:(id *)arg3;
- (BOOL)deckControlSetDeckStatus:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id *)arg3;
- (id)filterMessage:(id)arg1 toDevice:(id)arg2;
- (void)didNotHandleMessage:(id)arg1 unsupportedOperand:(BOOL)arg2;
- (BOOL)giveDeviceVendorIDTo:(unsigned char)arg1 error:(id *)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end
