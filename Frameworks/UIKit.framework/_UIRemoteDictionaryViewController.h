//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface _UIRemoteDictionaryViewController : UITableViewController
{
    NSArray *_availableDictionaries;
}

- (void)_handleDeleteButton:(id)arg1;
- (id)_downloadButton;
- (id)_downloadOptionsDictionary;
- (void)_handleDownloadButton:(id)arg1;
- (id)_downloadImageWithTintColor:(id)arg1;
- (id)_downloadArrowImage;
- (id)_cloudBackgroundImage;
- (id)initWithStyle:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
