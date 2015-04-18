//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMEvent : DOMObject
{
}

- (void)stopImmediatePropagation;
- (void)initEvent:(id)arg1:(BOOL)arg2:(BOOL)arg3;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)preventDefault;
- (void)stopPropagation;
@property BOOL cancelBubble;
@property BOOL returnValue;
@property(readonly) id <DOMEventTarget> srcElement;
- (BOOL)defaultPrevented;
@property(readonly) BOOL cancelable;
@property(readonly) BOOL bubbles;
@property(readonly) unsigned short eventPhase;
@property(readonly) id <DOMEventTarget> currentTarget;
- (void)finalize;
@property(readonly) unsigned long long timeStamp;
@property(readonly) id <DOMEventTarget> target;
@property(readonly, copy) NSString *type;
- (void)dealloc;

@end
