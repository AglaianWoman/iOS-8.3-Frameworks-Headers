//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class NSString;

@interface VKRasterTrafficMapModel : VKMapTileModel <VKMapLayer>
{
    shared_ptr_6e6219d6 _trafficDrawStyle;
    int _sourceTileZtoStencilOffset;
    BOOL _needsTileStencil;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager>> _trafficManager;
}

- (unsigned char)commandBufferId;
- (unsigned long long)mapLayerPosition;
- (void)stylesheetDidChange;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
