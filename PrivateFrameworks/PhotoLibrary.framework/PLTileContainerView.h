//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController *_photoTileController;
}

- (void)clearBackReference;
- (id)initWithFrame:(struct CGRect)arg1 photoTileController:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end
