//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDString, EDStyle;

@interface EMCellTextMapper : CMMapper
{
    EDString *edString;
    EDStyle *edStyle;
}

- (void)mapTextRunsAt:(id)arg1;
- (void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5;
- (id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3;
- (double)contentWidth;

@end

