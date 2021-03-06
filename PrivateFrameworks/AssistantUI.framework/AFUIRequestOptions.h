//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AFBulletin, NSDictionary, NSNumber, NSString, NSURL, SASPronunciationContext;

@interface AFUIRequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _pronunciationRequest;
    BOOL _initialBringUp;
    BOOL _useAutomaticEndpointing;
    BOOL _useStreamingDictation;
    BOOL _acousticIdEnabled;
    int _requestSource;
    NSString *_bluetoothDeviceAddress;
    AFBulletin *_bulletin;
    NSString *_appBundleIdentifier;
    NSDictionary *_messagesDirectActionContext;
    int _directActionEvent;
    NSString *_serverCommandId;
    SASPronunciationContext *_pronunciationContext;
    NSString *_text;
    NSURL *_speechFileURL;
    NSNumber *_homeButtonUpFromBeep;
    NSDictionary *_continuityInfo;
    double _expectedTimestamp;
    double _timestamp;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SASPronunciationContext *pronunciationContext; // @synthesize pronunciationContext=_pronunciationContext;
@property(nonatomic) int requestSource; // @synthesize requestSource=_requestSource;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) AFBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(readonly, nonatomic, getter=isForStark) BOOL forStark;
@property(copy, nonatomic) NSDictionary *continuityInfo; // @synthesize continuityInfo=_continuityInfo;
@property(nonatomic, getter=isInitialBringUp) BOOL initialBringUp; // @synthesize initialBringUp=_initialBringUp;
@property(nonatomic) double expectedTimestamp; // @synthesize expectedTimestamp=_expectedTimestamp;
@property(copy, nonatomic) NSURL *speechFileURL; // @synthesize speechFileURL=_speechFileURL;
@property(nonatomic, getter=isPronunciationRequest) BOOL pronunciationRequest; // @synthesize pronunciationRequest=_pronunciationRequest;
@property(copy, nonatomic) NSDictionary *messagesDirectActionContext; // @synthesize messagesDirectActionContext=_messagesDirectActionContext;
@property(nonatomic) int directActionEvent; // @synthesize directActionEvent=_directActionEvent;
@property(copy, nonatomic) NSString *bluetoothDeviceAddress; // @synthesize bluetoothDeviceAddress=_bluetoothDeviceAddress;
- (void)_configureStreamingDictationForSource:(int)arg1;
@property(readonly, nonatomic, getter=isForSpeechRequest) BOOL forSpeechRequest;
- (id)initWithRequestSource:(int)arg1;
@property(nonatomic) BOOL acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(retain, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) BOOL useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) BOOL useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

