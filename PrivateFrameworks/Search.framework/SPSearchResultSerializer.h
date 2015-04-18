//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SPSearchResultSerializer : NSObject
{
    unsigned int _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    NSMutableArray *_sections;
    Class _lastResultClass;
    BOOL _respondsToTitleUTF8String;
    BOOL _respondsToSubtitleUTF8String;
    BOOL _respondsToAuxiliaryTitleUTF8String;
    BOOL _respondsToAuxiliarySubtitleUTF8String;
    BOOL _respondsToSummaryUTF8String;
    BOOL _respondsToIdentifier;
    BOOL _respondsToURL;
    BOOL _respondsToBadgeValue;
    BOOL _inProc;
    BOOL _completed;
}

- (unsigned int)byteVector;
- (unsigned int)byteVectorCount;
- (void)updateScoesForQuery:(id)arg1 inDomain:(int)arg2;
- (BOOL)appendResult:(id)arg1;
- (BOOL)appendSection:(id)arg1;
- (id)initWithInitialCapacity:(unsigned int)arg1;
- (unsigned int)_allocateSize:(unsigned int)arg1;
- (BOOL)lockedAppendResult:(id)arg1 toSection:(id)arg2;
- (id)_convertConformingResult:(id)arg1;
- (id)initWithInitialCapacity:(unsigned int)arg1 inProc:(BOOL)arg2;
- (void)serialize;
- (unsigned int)sectionCount;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) BOOL completed; // @synthesize completed=_completed;

@end
