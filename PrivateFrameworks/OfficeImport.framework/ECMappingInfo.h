//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ECMappingInfo : NSObject
{
    NSString *mSheetName;
}

+ (id)mappingInfoWithSheetName:(id)arg1;
@property(readonly, nonatomic) NSString *sheetName; // @synthesize sheetName=mSheetName;
- (id)initWithSheetName:(id)arg1;
@property(readonly, nonatomic) int rowOffset;
@property(readonly, nonatomic) int columnOffset;
- (void)dealloc;

@end
