//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3DatabaseStatement, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject
{
    ML3DatabaseStatement *_statement;
    NSDictionary *_columnNameIndexMap;
    unsigned int _limitIndex;
    NSString *_limitProperty;
    long long _limitValue;
}

@property(copy, nonatomic) NSString *limitProperty; // @synthesize limitProperty=_limitProperty;
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;
- (id)initWithStatement:(id)arg1;
- (id)columnNameIndexMap;
- (unsigned int)indexForColumnName:(id)arg1;
- (id)_statement;
@property(nonatomic) long long limitValue; // @synthesize limitValue=_limitValue;
- (id)stringValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (long long)int64ValueForFirstRowAndColumn;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasAtLeastOneRow;
- (void).cxx_destruct;
- (id)rows;
- (id)init;

@end

