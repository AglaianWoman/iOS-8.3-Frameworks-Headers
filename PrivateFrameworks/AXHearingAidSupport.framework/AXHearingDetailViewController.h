//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController
{
    BOOL _isLiveListening;
    AXRemoteHearingAidDevice *_device;
}

@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (id)specifiers;
- (struct _NSRange)programsRange;
- (id)disconnectedSpecifiers;
- (void)liveListenToggle:(id)arg1;
- (id)_modeSpecifiers;
- (id)_volumeSpecifiers;
- (id)deviceSpecifiers;
- (void)updateLiveListenCell:(id)arg1;
- (id)specifierForKey:(id)arg1;
- (void)updateView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;

@end

