//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CLNotifierData : NSObject
{
    void *_data;
    CDUnknownBlockType _destructor;
}

- (void).cxx_destruct;
@property(nonatomic) void *data; // @synthesize data=_data;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType destructor; // @synthesize destructor=_destructor;
- (id)initWithData:(void *)arg1 destructor:(CDUnknownBlockType)arg2;

@end

