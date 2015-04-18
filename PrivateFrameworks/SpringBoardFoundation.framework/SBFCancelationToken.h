//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFCancelable.h"

@class NSMutableArray, NSString;

@interface SBFCancelationToken : NSObject <SBFCancelable>
{
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
- (void)callCancelationBlocks:(id)arg1;
- (id)nts_cancel;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCanceled;
- (id)init;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
