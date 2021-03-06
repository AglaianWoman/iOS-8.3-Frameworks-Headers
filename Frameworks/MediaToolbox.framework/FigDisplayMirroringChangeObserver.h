//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface FigDisplayMirroringChangeObserver : NSObject
{
    struct OpaqueFigPlayer *_player;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_clonedDisplays;
    NSMutableSet *_cloningSupportedDisplays;
    NSArray *_baseDisplayList;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)updatePlayerDisplayList;
- (void)removeReferenceToPlayer;
- (void)setBaseDisplayList:(id)arg1;
- (id)initWithPlayer:(struct OpaqueFigPlayer *)arg1;

@end

