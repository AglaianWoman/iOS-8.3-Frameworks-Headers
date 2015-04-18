//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface TCMessageContext : NSObject
{
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_currentObjectStack;
    NSMutableDictionary *m_placeholderToObjectIdMap;
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;
}

+ (void)reportWarning:(struct TCTaggedMessageStructure *)arg1;
+ (void)restoreObjectStack:(unsigned int)arg1;
+ (unsigned int)saveObjectStack;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;
+ (id)pushCurrentPlaceholder;
+ (void)pushCurrentObject:(id)arg1;
+ (BOOL)isFileStructuredStorage;
+ (void)setIsFileStructuredStorage:(BOOL)arg1;
+ (id)getErrorArray;
+ (id)getWarningArray;
+ (void)removeContextForCurrentThread;
+ (void)createContextForCurrentThread;
+ (void)reportErrorException:(id)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)reportError:(struct TCTaggedMessageStructure *)arg1;
+ (void)reportObject:(id)arg1 withWarning:(struct TCTaggedMessageStructure *)arg2;
+ (void)popCurrentObject;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)replacePlaceholdersWithObjects;
+ (id)currentObjectOrPlaceholder;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct TCTaggedMessageStructure *)arg2 parameters:(void *)arg3;
+ (void)initialize;
- (void)reportWarningForObject:(id)arg1 affectedObject:(id)arg2 warning:(struct TCTaggedMessageStructure *)arg3 parameterList:(void *)arg4;
- (void)setObject:(id)arg1 forPlaceholderKey:(id)arg2;
- (void)replacePlaceholdersWithObjects;
- (void)popPlaceholder:(id)arg1;
- (id)pushPlaceholder;
- (void)popObject;
- (void)pushObject:(id)arg1;
- (void)addWarningMessageEntry:(id)arg1;
- (void)addErrorMessageEntry:(id)arg1;
- (id)currentObject;
- (id)init;
- (void)dealloc;

@end
