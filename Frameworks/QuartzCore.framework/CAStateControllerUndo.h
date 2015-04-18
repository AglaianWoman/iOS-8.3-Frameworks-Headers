//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAStateRecorder.h"

@class CAState, NSMutableArray, NSString;

@interface CAStateControllerUndo : NSObject <CAStateRecorder>
{
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

- (void)addElement:(id)arg1;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) CAState *state; // @synthesize state=_state;
- (void)dealloc;
@property(readonly) CAStateControllerUndo *next; // @synthesize next=_next;
@property(retain, nonatomic) NSMutableArray *transitions; // @synthesize transitions=_transitions;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
