//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFDiagnosticsGenerator.h"

@class MFWeakSet, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator>
{
    MFWeakSet *_diagnosticsGenerators;
}

+ (id)sharedController;
- (void)removeDiagnosticsGenerator:(id)arg1;
- (void)addDiagnosticsGenerator:(id)arg1;
- (id)copyDiagnosticInformation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

