//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSSystemPolicyManager : NSObject
{
}

+ (id)thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)thirdPartyApplicationProxies;
+ (id)_dataUsageWorkspaceInfo;
+ (BOOL)_notificationSettingsNeededForBundleID:(id)arg1;
+ (BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1;
+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1;
+ (BOOL)_locationSettingsNeededForBundleID:(id)arg1;
+ (BOOL)_privacySettingsNeededForProxy:(id)arg1;
+ (BOOL)_systemSettingsNeededForProxy:(id)arg1;
+ (BOOL)_shouldIncludeProxy:(id)arg1;
+ (void)_populateBBSectionIDs;

@end

