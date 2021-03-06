//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropFindTaskDelegate.h"

@class NSSet, NSString, NSURL;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    NSURL *_url;
    NSSet *_sharees;
}

- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;
@property(retain, nonatomic) NSSet *sharees; // @synthesize sharees=_sharees;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

