//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface NFEcommerceTransactionResponse : NSObject
{
    NSString *_transactionIdentifier;
    NSData *_transactionData;
}

+ (id)responseWithInfo:(id)arg1;
@property(readonly, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) NSData *transactionData; // @synthesize transactionData=_transactionData;
- (void)dealloc;

@end
