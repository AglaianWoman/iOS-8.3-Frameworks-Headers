//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentDataItem.h>

@class CNContact, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentCardDataItem : PKPaymentDataItem
{
}

+ (int)dataType;
@property(readonly, nonatomic) PKPaymentPass *pass;
- (BOOL)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) CNContact *billingAddress;
- (int)status;
@property(readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property(readonly, nonatomic) BOOL requiresBillingAddress;

@end

