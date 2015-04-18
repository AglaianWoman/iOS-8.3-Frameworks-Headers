//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest
{
    id _delegate;
    NSMutableArray *_videos;
    NSURL *_batchURL;
    unsigned int _startIndex;
    unsigned int _videosPerPage;
    unsigned int _totalResults;
    BOOL _invalidatedToken;
}

+ (int)partialFeedType;
- (void)loadRequest:(id)arg1 withDelegate:(id)arg2 accountAuthRequired:(BOOL)arg3;
- (void)didParseData;
- (int)parseData:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)failWithError:(id)arg1;

@end
