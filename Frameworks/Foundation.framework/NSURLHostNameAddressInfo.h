//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSURLHostNameAddressInfo : NSObject
{
    double timestamp;
    struct addrinfo *addressInfo;
}

+ (void)asyncResolveWithCallbackClient:(id)arg1;
+ (id)addressInfoForHost:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (struct addrinfo *)addrinfo;
- (id)_initWithAddressInfo:(struct addrinfo *)arg1;
- (double)_timestamp;

@end

