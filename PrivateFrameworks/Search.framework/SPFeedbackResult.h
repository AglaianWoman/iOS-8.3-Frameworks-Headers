//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface SPFeedbackResult : NSObject <NSSecureCoding>
{
    unsigned int _domain;
    int _flags;
    NSString *_fbr;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *parsecString;
@property(retain, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

