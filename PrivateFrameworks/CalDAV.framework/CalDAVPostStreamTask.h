//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVPostTask.h"

@class NSString;

@interface CalDAVPostStreamTask : CoreDAVPostTask
{
    NSString *_previousScheduleTag;
    NSString *_filename;
}

- (id)responseData;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBodyStream;
- (id)additionalHeaderValues;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)utf8PercentEscapedFilename;
- (id)lossyAsciiFilename;
@property(retain, nonatomic) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
- (void)dealloc;

@end

