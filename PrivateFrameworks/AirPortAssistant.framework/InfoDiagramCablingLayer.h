//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CAGradientLayer, CAShapeLayer;

@interface InfoDiagramCablingLayer : CALayer
{
    id <InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate;
    BOOL swapCabling;
    BOOL isCompactWidth;
    CAShapeLayer *internetInnerLineLayer;
    CAShapeLayer *internetOuterLineLayer;
    CAGradientLayer *internetGradientLayer;
    CAShapeLayer *broadbandToWANInnerLineLayer;
    CAShapeLayer *broadbandToWANOuterLineLayer;
    CAShapeLayer *swapArcLineLayer;
    CAShapeLayer *swapArcArrowLayer;
}

@property(nonatomic) BOOL isCompactWidth; // @synthesize isCompactWidth;
@property(retain, nonatomic) CAShapeLayer *swapArcArrowLayer; // @synthesize swapArcArrowLayer;
@property(retain, nonatomic) CAShapeLayer *swapArcLineLayer; // @synthesize swapArcLineLayer;
@property(retain, nonatomic) CAShapeLayer *broadbandToWANOuterLineLayer; // @synthesize broadbandToWANOuterLineLayer;
@property(retain, nonatomic) CAShapeLayer *broadbandToWANInnerLineLayer; // @synthesize broadbandToWANInnerLineLayer;
@property(retain, nonatomic) CAGradientLayer *internetGradientLayer; // @synthesize internetGradientLayer;
@property(retain, nonatomic) CAShapeLayer *internetInnerLineLayer; // @synthesize internetInnerLineLayer;
@property(retain, nonatomic) CAShapeLayer *internetOuterLineLayer; // @synthesize internetOuterLineLayer;
@property(nonatomic) id <InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate; // @synthesize diagramAnchorPointDelegate;
@property(nonatomic) BOOL swapCabling; // @synthesize swapCabling;
- (void)createPathForSublayer:(id)arg1;
- (id)initNoWANLinkLastFrame;
- (id)initNoWANLinkFirstFrame;
- (void)layoutSublayers;
- (void)commonInit;
- (void)dealloc;

@end
