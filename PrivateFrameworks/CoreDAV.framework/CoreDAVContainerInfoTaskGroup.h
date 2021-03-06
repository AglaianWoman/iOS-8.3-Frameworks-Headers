//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVPropFindTaskDelegate.h"

@class NSMutableSet, NSSet, NSString;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    int _phase;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _containerInfoDepth;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property(readonly, nonatomic) NSSet *containerURLs; // @synthesize containerURLs=_containerURLs;
- (void)startTaskGroup;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
@property(nonatomic) int containerInfoDepth; // @synthesize containerInfoDepth=_containerInfoDepth;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (int)containerInfoDepthForURL:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVContainerInfoTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

