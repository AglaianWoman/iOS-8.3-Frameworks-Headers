//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FCRImage : NSObject
{
    unsigned int width;
    unsigned int height;
    unsigned int bytesPerRow;
    char *rawDataBuffer;
    char *alignedDataBuffer;
    BOOL freeBufferWhenDone;
}

- (char *)getAlignedImageData;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 buffer:(char *)arg4 freeBufferWhenDone:(BOOL)arg5;
@property unsigned int height; // @synthesize height;
@property unsigned int width; // @synthesize width;
- (void)dealloc;
@property unsigned int bytesPerRow; // @synthesize bytesPerRow;

@end

