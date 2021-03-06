//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATMessageLinkObserver.h"

@class NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ATService : NSObject <ATMessageLinkObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_messageLinks;
    NSHashTable *_observers;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)messageLinkForLibrary:(id)arg1;
@property(retain, nonatomic) NSMutableSet *messageLinks; // @synthesize messageLinks=_messageLinks;
- (void)removeMessageLink:(id)arg1;
- (void)addMessageLink:(id)arg1;
- (void)addObserver:(id)arg1;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (BOOL)run;
- (void)removeObserver:(id)arg1;
- (BOOL)stop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

