//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "NCInteractiveNotificationHostDelegate.h"
#import "NCInteractiveNotificationHostInterface.h"

@class NCViewServiceDescriptor, NSString;

@interface NCInteractiveNotificationHostViewController : _UIRemoteViewController <NCInteractiveNotificationHostInterface, NCInteractiveNotificationHostDelegate>
{
    BOOL _proximityMonitoringEnabled;
    BOOL _showsKeyboard;
    BOOL _modal;
    id <NCInteractiveNotificationHostDelegate> _delegate;
    float _bottomOverhangHeight;
    float _maximumHeight;
    NCViewServiceDescriptor *_inlayViewService;
    NCViewServiceDescriptor *_accessoryViewService;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)initialize;
+ (void)requestInteractiveNotificationControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_proximityStateChanged:(id)arg1;
- (void)_setProximityMonitoringEnabled:(BOOL)arg1;
@property(retain, nonatomic) NCViewServiceDescriptor *accessoryViewService; // @synthesize accessoryViewService=_accessoryViewService;
@property(retain, nonatomic) NCViewServiceDescriptor *inlayViewService; // @synthesize inlayViewService=_inlayViewService;
@property(nonatomic) float bottomOverhangHeight; // @synthesize bottomOverhangHeight=_bottomOverhangHeight;
@property(nonatomic) BOOL showsKeyboard; // @synthesize showsKeyboard=_showsKeyboard;
- (void)willPresentFromActionIdentifier:(id)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (void)didChangeRevealPercent:(float)arg1;
- (void)interactiveNotificationDidAppear;
- (void)_requestProximityMonitoringEnabled:(BOOL)arg1;
- (void)_setActionEnabled:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)_requestPreferredContentHeight:(float)arg1;
- (void)_requestDismissalEnabled:(BOOL)arg1;
- (void)_dismissWithContext:(id)arg1;
@property(nonatomic) float maximumHeight; // @synthesize maximumHeight=_maximumHeight;
- (void)handleActionAtIndex:(int)arg1;
@property(nonatomic) id <NCInteractiveNotificationHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(nonatomic, getter=isModal) BOOL modal; // @synthesize modal=_modal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

