//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GraphRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelled;
}

+ (id)sharedRenderer;
+ (void)clearSharedRenderer;
- (void)performRenderOperation:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

