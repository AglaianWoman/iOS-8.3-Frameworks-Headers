//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject
{
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
@property(readonly, nonatomic) MPMediaPropertyPredicate *nativePredicate;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(readonly) NSString *property;
@property(readonly) id value;
- (void)dealloc;
@property(readonly) NSString *comparisonType;

@end

