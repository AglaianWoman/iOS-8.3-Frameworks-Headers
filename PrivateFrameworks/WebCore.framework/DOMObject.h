//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/WebScriptObject.h>

#import "NSCopying.h"

@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying>
{
    struct DOMObjectInternal *_internal;
}

@property(readonly) DOMStyleSheet *sheet;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

