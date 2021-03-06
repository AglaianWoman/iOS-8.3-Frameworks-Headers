//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate.h"

@class MPAVRoutingController, NSArray, NSMutableArray, NSMutableDictionary, NSString, PUAirplayRoute;

@interface PUAirplayController : NSObject <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController *_airplayDeviceController;
    BOOL _applicationInBackground;
    BOOL _hasNonDefaultRoute;
    NSMutableDictionary *_knownRoutes;
    NSArray *_sortedRoutes;
    PUAirplayRoute *_defaultRoute;
    PUAirplayRoute *_currentRoute;
    NSMutableArray *_availabilityHandlers;
    NSMutableArray *_routeHandlers;
    NSMutableArray *_currentRouteHandlers;
    CDUnknownBlockType _routeChangeCompletionBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)makeRouteCurrent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultRoute;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)_updateFromAVRoute:(id)arg1;
- (void)_updateCurrentRoute;
- (void)_broadcastRouteInformation;
- (void)_updateRouteInformationFromRoutes:(id)arg1;
- (void)_gatherRouteInformation;
- (void)_updateAirplayDiscoveryMode;
- (id)currentRoute;
- (void)requestCurrentRouteUpdatesFor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopCurrentRouteUpdatesFor:(id)arg1;
- (void)stopRouteAvailabilityUpdatesFor:(id)arg1;
- (void)requestRouteAvailabilityUpdatesFor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopRouteUpdatesFor:(id)arg1;
- (void)requestRouteUpdatesFor:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

