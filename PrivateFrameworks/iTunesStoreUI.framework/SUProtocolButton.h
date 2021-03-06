//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject <NSCopying>
{
    NSDictionary *_buttonDictionary;
}

@property(readonly, nonatomic) NSDictionary *buttonDictionary; // @synthesize buttonDictionary=_buttonDictionary;
- (id)initWithButtonDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *buttonLocation;
@property(readonly, nonatomic) NSString *buttonTarget;
@property(readonly, nonatomic) NSString *buttonTitle;
@property(readonly, nonatomic) NSURL *URL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end

