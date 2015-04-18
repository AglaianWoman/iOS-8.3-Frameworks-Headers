//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPPlaybackContext : NSObject
{
    BOOL _keepPlayingCurrentItemIfPossible;
    BOOL _shouldStartPlayback;
    unsigned int _shuffleType;
    unsigned int _repeatType;
}

+ (Class)queueFeederClass;
- (id)init;
@property(nonatomic) BOOL shouldStartPlayback; // @synthesize shouldStartPlayback=_shouldStartPlayback;
@property(nonatomic) BOOL keepPlayingCurrentItemIfPossible; // @synthesize keepPlayingCurrentItemIfPossible=_keepPlayingCurrentItemIfPossible;
@property(nonatomic) unsigned int shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) unsigned int repeatType; // @synthesize repeatType=_repeatType;

@end
