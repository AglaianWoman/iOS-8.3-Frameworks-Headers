//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLDismissableViewController.h"

@class NSString, PUEditPlugin;

@interface PUEditPluginHostViewController : UIViewController <PLDismissableViewController>
{
    BOOL __extensionDidBeginContentEditing;
    BOOL __didHandleCancel;
    BOOL __didHandleDone;
    PUEditPlugin *_plugin;
    id <PUEditPluginHostViewControllerDataSource> _dataSource;
    id <PUEditPluginHostViewControllerDelegate> _delegate;
    UIViewController *__remoteViewController;
    id <NSCopying> __request;
    id __disablingIdleTimerToken;
}

- (void)_dismiss;
- (void).cxx_destruct;
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(retain, setter=_setRemoteViewController:) UIViewController *_remoteViewController; // @synthesize _remoteViewController=__remoteViewController;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (void)loadRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlugin:(id)arg1;
@property(retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken; // @synthesize _disablingIdleTimerToken=__disablingIdleTimerToken;
- (void)_beginDisablingIdleTimer;
@property(nonatomic, setter=_setDidHandleDone:) BOOL _didHandleDone; // @synthesize _didHandleDone=__didHandleDone;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)_handleCancel;
@property(nonatomic, setter=_setExtensionDidBeginContentEditing:) BOOL _extensionDidBeginContentEditing; // @synthesize _extensionDidBeginContentEditing=__extensionDidBeginContentEditing;
@property(nonatomic, setter=_setDidHandleCancel:) BOOL _didHandleCancel; // @synthesize _didHandleCancel=__didHandleCancel;
- (id)_hostContext;
@property(copy, setter=_setRequest:) id <NSCopying> _request; // @synthesize _request=__request;
- (id)_extensionVendorProxy;
- (void)_beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_handleDoneButton:(id)arg1;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_handleCancelButton:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

