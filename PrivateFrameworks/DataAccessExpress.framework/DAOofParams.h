//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface DAOofParams : NSObject
{
    int _oofState;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_message;
    int _externalState;
    NSString *_externalMessage;
}

@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
- (void)enableOof:(BOOL)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4;
@property(retain, nonatomic) NSString *externalMessage; // @synthesize externalMessage=_externalMessage;
@property(nonatomic) int externalState; // @synthesize externalState=_externalState;
@property(nonatomic) int oofState; // @synthesize oofState=_oofState;
- (id)dictionaryRepresentationForASSettingTask;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (BOOL)isEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end
