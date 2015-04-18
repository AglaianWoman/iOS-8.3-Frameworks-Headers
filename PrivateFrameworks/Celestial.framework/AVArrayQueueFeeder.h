//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder
{
    NSMutableArray *_items;
}

- (unsigned int)itemCount;
- (void)shuffleWithCurrentIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (id)initWithArray:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (id)itemForIndex:(unsigned int)arg1;
- (id)pathAtIndex:(unsigned int)arg1;

@end
