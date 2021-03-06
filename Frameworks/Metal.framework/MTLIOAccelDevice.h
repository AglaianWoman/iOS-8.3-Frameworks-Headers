//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/_MTLDevice.h>

@class MTLIOAccelDeviceShmemPool, MTLResourceListPool, NSObject<OS_dispatch_queue>;

@interface MTLIOAccelDevice : _MTLDevice
{
    struct __IOAccelDevice *_deviceRef;
    struct __IOAccelShared *_sharedRef;
    MTLIOAccelDeviceShmemPool *_kernelCommandShmemPool;
    MTLIOAccelDeviceShmemPool *_segmentListShmemPool;
    id *_hwResourcePools;
    unsigned int _hwResourcePoolCount;
    MTLResourceListPool *_akResourceListPool;
    MTLResourceListPool *_akPrivateResourceListPool;
    struct MTLIOAccelCommandBufferStoragePool *_commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
    unsigned int _accelID;
    unsigned long long _segmentByteThreshold;
    int _numCommandBuffers;
    struct MTLIOAccelHeap _bufferHeaps[16];
    NSObject<OS_dispatch_queue> *_device_dispatch_queue;
    unsigned int *_defaultBufferOptions;
}

+ (void)registerDevices;
- (void)dealloc;
@property(readonly) int numCommandBuffers; // @synthesize numCommandBuffers=_numCommandBuffers;
@property(readonly) unsigned int *defaultBufferOptions; // @synthesize defaultBufferOptions=_defaultBufferOptions;
@property(readonly) unsigned int hwResourcePoolCount; // @synthesize hwResourcePoolCount=_hwResourcePoolCount;
@property(readonly) id *hwResourcePools; // @synthesize hwResourcePools=_hwResourcePools;
- (id)allocBufferSubDataWithLength:(unsigned int)arg1 options:(unsigned int)arg2 alignment:(int)arg3 heapIndex:(short *)arg4 bufferIndex:(short *)arg5 bufferOffset:(int *)arg6;
- (struct __IOAccelDevice *)deviceRef;
- (id)akPrivateResourceListPool;
- (id)akResourceListPool;
- (void)setHwResourcePool:(id *)arg1 count:(int)arg2;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg1;
- (void)setSegmentListShmemSize:(unsigned int)arg1;
- (short)heapIndexWithOptions:(unsigned int)arg1;
- (id)initWithAcceleratorPort:(unsigned int)arg1;
- (void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(int)arg5;
- (struct __IOAccelShared *)sharedRef;

@end

