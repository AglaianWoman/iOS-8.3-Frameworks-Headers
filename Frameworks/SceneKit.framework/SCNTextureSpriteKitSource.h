//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class SKScene;

@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource
{
    SKScene *_scene;
    double _lastUpdate;
}

- (void)dealloc;
- (double)__updateTextureWithSKScene:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3;
-     // Error parsing type: v48@0:4@8@12^{__C3DRendererContext={__CFRuntimeBase=I[4C]}lI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBL^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vi^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[8I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}LIiI^vii}{?=[2I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}16^v2024d40, name: __renderSKScene:withSKSCNRenderer:c3dRenderer:cglContext:viewport:atTime:
-     // Error parsing type: v12@0:4^{__C3DRendererContext={__CFRuntimeBase=I[4C]}lI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBL^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vi^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[8I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}LIiI^vii}{?=[2I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}8, name: cleanup:
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 nextFrameTime:(double *)arg2;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;

@end

