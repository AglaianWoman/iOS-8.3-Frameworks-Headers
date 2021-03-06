//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ISAuthenticationChallenge : NSObject
{
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property(readonly) BOOL userNameIsEmail;
@property(readonly) BOOL userNameIsEditable;
- (void)useCredential:(id)arg1;
- (void)cancelAuthentication;
@property(readonly) int failureCount;
@property(readonly, retain) NSString *user;
@property(readonly, retain) NSString *password;
@property(retain) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly) id <NSURLAuthenticationChallengeSender> sender;
- (void)dealloc;
@property(retain) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly) BOOL hasPassword;

@end

