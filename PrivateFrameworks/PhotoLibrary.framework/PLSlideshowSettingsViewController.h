//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPMediaPickerControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPMediaItemCollection, MPMediaPickerController, NSArray, NSString, PLSlideshowAirPlayRoutesViewController, PLSlideshowTransitionsViewController, UITableView, UITableViewCell;

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate>
{
    NSArray *_airplayRoutes;
    unsigned int _selectedAirplayRouteIndex;
    NSArray *_transitionKeys;
    NSArray *_alternateTransitionLocalizations;
    MPMediaPickerController *_mediaPicker;
    PLSlideshowTransitionsViewController *_transitionsController;
    PLSlideshowAirPlayRoutesViewController *_airPlayRoutesController;
    UITableView *_table;
    UITableViewCell *_transitionCell;
    UITableViewCell *_selectedMusicCell;
    UITableViewCell *_playMusicSwitchCell;
    BOOL _slideshowShouldPlayMusic;
    id <PLSlideshowSettingsViewControllerDelegate> _delegate;
    NSString *_selectedTransition;
    MPMediaItemCollection *_slideshowMusicCollection;
}

+ (int)_uiTransitionForTransitionKey:(id)arg1;
+ (id)iPadTransitions;
+ (id)iPhoneTransitions;
+ (id)TVOutTransitions;
+ (id)AppleTVPushTransitions;
- (id)slideshowSettings;
- (void)updateTransitionKeys:(id)arg1;
- (void)_playButtonWasPressed:(id)arg1;
- (id)_selectedMusic;
- (void)_playMusicSwitchValueDidChange:(id)arg1;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned int)arg2;
- (int)_buttonSection;
- (int)_airPlaySection;
- (BOOL)_includeAirPlaySection;
- (void)applySlideshowSettings:(id)arg1;
- (id)_selectedAirplayRoute;
- (void)_updateSettingsInfo;
- (int)_mainSection;
@property(retain, nonatomic) MPMediaItemCollection *slideshowMusicCollection; // @synthesize slideshowMusicCollection=_slideshowMusicCollection;
@property(nonatomic) BOOL slideshowShouldPlayMusic; // @synthesize slideshowShouldPlayMusic=_slideshowShouldPlayMusic;
@property(copy, nonatomic) NSString *selectedTransition; // @synthesize selectedTransition=_selectedTransition;
- (void)_preheatMediaPicker;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
@property(nonatomic) id <PLSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

