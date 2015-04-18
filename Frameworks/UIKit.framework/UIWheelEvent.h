//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInternalEvent.h>

@class NSMutableArray;

@interface UIWheelEvent : UIInternalEvent
{
    int _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    int lastSubtype;
}

- (BOOL)_canHaveVelocity;
- (float)_wheelVelocity;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (int)subtype;
- (int)type;
- (void)dealloc;

@end
