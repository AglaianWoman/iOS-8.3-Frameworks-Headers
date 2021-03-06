//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface SCNJitterer : NSObject
{
    BOOL _enabled;
    unsigned int _state;
    unsigned int _iteration;
    BOOL _jitteringSupported;
    BOOL _restartSourceIsSuspended;
    id <SCNJittererDelegate> _delegate;
    NSObject<OS_dispatch_source> *_restartSource;
}

+ (void)initialize;
- (id)initWithDelegate:(id)arg1;
- (void)update;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)dealloc;
- (BOOL)isAborting;
- (void)delegateWillDie;
- (void)jitter;
- (void)stopIfNeeded;
- (void)restart;

@end

