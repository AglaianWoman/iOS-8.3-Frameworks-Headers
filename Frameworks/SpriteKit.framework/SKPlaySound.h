//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction
{
    NSString *_filePath;
    struct SKCPlaySound *_mycaction;
    struct CGPoint _position;
    SKSoundSource *_soundSource;
}

+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(BOOL)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end

