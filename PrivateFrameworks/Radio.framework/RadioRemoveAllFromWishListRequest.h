//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSArray, SSURLConnectionRequest;

@interface RadioRemoveAllFromWishListRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    NSArray *_trackStoreIDs;
}

- (id)initWithTracks:(id)arg1;
- (id)initWithTrackStoreIDs:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)init;

@end

