//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCTermDumper, NSString, PQLConnection;

@interface BRCDumpContext : NSObject
{
    int _indentation;
    BRCTermDumper *_termDumper;
    BOOL _liveDaemon;
    struct __sFILE *_fp;
    PQLConnection *_db;
    NSString *_indentationBaseString;
}

+ (id)stringFromBackoff:(double)arg1 context:(id)arg2;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(BOOL)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 context:(id)arg3 allowsPast:(BOOL)arg4;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;
+ (id)highlightedString:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) NSString *indentationBaseString; // @synthesize indentationBaseString=_indentationBaseString;
@property(readonly, nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
@property(nonatomic) BOOL liveDaemon; // @synthesize liveDaemon=_liveDaemon;
- (id)initWithFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)popIndentation;
- (void)pushIndentation;
- (id)highlightedString:(id)arg1 type:(int)arg2;
- (void)writeLineWithFormat:(id)arg1;
@property(readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
- (void).cxx_destruct;

@end
