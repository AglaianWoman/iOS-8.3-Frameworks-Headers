//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityViewController.h"

@class RCCompositionController;

@interface RCShareMemoViewController : UIActivityViewController
{
    RCCompositionController *_compositionController;
}

+ (void)presentInViewController:(id)arg1 composition:(id)arg2 ignoringInteraction:(BOOL)arg3 shouldContinuePreparingBlock:(CDUnknownBlockType)arg4 preparedToPresentBlock:(CDUnknownBlockType)arg5;
+ (id)unsupportedActivityTypes;
+ (id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
+ (void)prepareToShareComposition:(id)arg1 ignoringInteraction:(BOOL)arg2 shouldContinuePreparingBlock:(CDUnknownBlockType)arg3 preparedHandler:(CDUnknownBlockType)arg4;
+ (id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1;
@property(readonly, nonatomic) RCCompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (id)initWithCompositionController:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;

@end
