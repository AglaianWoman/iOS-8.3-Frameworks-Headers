//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SUDeferredUIView.h"

@class NSMutableDictionary, NSString;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView>
{
    BOOL _deferredEnabled;
    struct CGRect _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    BOOL _isDeferringInterfaceUpdates;
}

- (void)_saveTitlesAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
@property(nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
- (id)imageForState:(unsigned int)arg1;
- (id)titleForState:(unsigned int)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

