//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerDocumentTableCell.h>

@class UIImageView;

@interface _UIDocumentPickerDocumentTableContainerCell : _UIDocumentPickerDocumentTableCell
{
    UIImageView *_containerIconView;
}

@property(retain, nonatomic) UIImageView *containerIconView; // @synthesize containerIconView=_containerIconView;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)reloadItem:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
