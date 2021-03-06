//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKRemoteViewController.h>

@class GKUITheme, NSString;

@interface GKComposeRemoteViewController : GKRemoteViewController
{
    GKUITheme *_theme;
    unsigned int _rid;
    NSString *_defaultMessage;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)didRequestFriends:(id)arg1;
- (id)observedKeyPaths;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)addRecipientPlayerInternals:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(nonatomic) unsigned int rid; // @synthesize rid=_rid;
- (void)dealloc;

@end

