//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NNMKSQLiteUtils : NSObject
{
}

+ (double)doubleFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (BOOL)boolFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)dataFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (void)bindData:(id)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (id)stringFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (unsigned int)unsignedIntegerFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)dateFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (void)closeExecutedPreparedStatement:(struct sqlite3_stmt *)arg1;
+ (BOOL)isResponseOkFromPreparedStatementExecution:(int)arg1;
+ (void)bindDouble:(double)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindString:(id)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindUnsignedInteger:(unsigned int)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindDate:(id)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindBool:(BOOL)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;

@end

