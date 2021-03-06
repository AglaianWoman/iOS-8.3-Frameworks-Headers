//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView, UITableViewController, UIView;

@interface PKPaymentSetupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UITableViewController *_tableViewController;
    UIView *_containerView;
    int _style;
    int _context;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (unsigned int)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
@property(nonatomic) int context; // @synthesize context=_context;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 context:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

