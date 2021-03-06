//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationControllerDelegate.h"
#import "UIPrinterBrowserOwner.h"

@class NSString, PKPrinter, UINavigationController, UIPopoverController, UIPrinterBrowserViewController, UIPrinterPickerController, UIWindow;

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate>
{
    UIPrinterPickerController *_printerPickerController;
    UINavigationController *_navigationController;
    UIPrinterBrowserViewController *_printerBrowserViewController;
    UIViewController *_parentController;
    UIViewController *_originalViewControllerInNav;
    UIPopoverController *_poverController;
    UIWindow *_window;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
    BOOL _userSelectedPrinter;
    PKPrinter *_printer;
}

@property BOOL userSelectedPrinter; // @synthesize userSelectedPrinter=_userSelectedPrinter;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)presentPrinterPickerPanelAnimated:(BOOL)arg1;
- (id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2;
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (BOOL)shouldShowPrinter:(id)arg1;
- (void)cancelPrinting;
- (BOOL)filtersPrinters;
- (void)dismissPrinterPickerAnimated:(BOOL)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentWindow;
- (void)printerBrowserViewDidDisappear;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

