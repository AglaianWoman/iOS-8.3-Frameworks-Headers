//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3MusicLibrary, NSString;

@interface ML3SpotlightMatchingNameCache : NSObject
{
    unordered_set_cccfe4a5 _matchingSet;
    NSString *_matchString;
    BOOL _idle;
    ML3MusicLibrary *_library;
}

+ (void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
+ (void)initialize;
- (id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
