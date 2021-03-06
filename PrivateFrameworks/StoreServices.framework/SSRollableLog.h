//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, SSLogFileOptions;

@interface SSRollableLog : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    SSLogFileOptions *_options;
}

@property(readonly) SSLogFileOptions *logOptions;
- (void)_rollLogFiles;
- (id)_activeLogFilePath;
- (id)_logFilePathWithIndex:(int)arg1;
- (void)_closeLogFile;
- (void)_checkLogFileSize;
- (void)_openLogFile;
- (id)initWithLogOptions:(id)arg1;
- (void)writeString:(id)arg1;
- (void)dealloc;

@end

