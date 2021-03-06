//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapViewDelegate.h"

@class MKMapView, NSString;

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate>
{
    MKMapView *_hiddenMapView;
    id <FMF3HiddenMapTrackingHandlerDelegate> _delegate;
}

@property(retain, nonatomic) MKMapView *hiddenMapView; // @synthesize hiddenMapView=_hiddenMapView;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1;
@property(nonatomic) __weak id <FMF3HiddenMapTrackingHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

