//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class EKSharee, UIAlertController;

@interface EKShareeViewController : UITableViewController
{
    UIAlertController *_removeAlertController;
    BOOL _allowEditing;
    BOOL _allowStopSharing;
    BOOL _allowResendInvitations;
    EKSharee *_sharee;
    id <EKShareeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
@property(nonatomic) __weak id <EKShareeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(nonatomic) BOOL allowResendInvitations; // @synthesize allowResendInvitations=_allowResendInvitations;
@property(nonatomic) BOOL allowStopSharing; // @synthesize allowStopSharing=_allowStopSharing;
- (void)removeClicked:(id)arg1;
- (void)_allowEditingChanged:(id)arg1;
- (int)_subitemAtRow:(int)arg1;
- (BOOL)_shouldDisplayStopSharingButton;
@property(nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
- (void)_reloadTitle;
- (BOOL)_shouldDisplayResendInvitationButton;
@property(retain, nonatomic) EKSharee *sharee; // @synthesize sharee=_sharee;
- (int)_rowForSubitem:(int)arg1;
- (id)initWithSharee:(id)arg1;

@end
