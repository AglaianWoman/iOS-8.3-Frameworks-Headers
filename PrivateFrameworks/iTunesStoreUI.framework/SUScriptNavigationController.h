//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptNavigationBar, UINavigationController;

@interface SUScriptNavigationController : SUScriptViewController
{
    UINavigationController *_navController;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(copy) id toolbarHidden;
- (void)setTopViewController:(id)arg1;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (id)_filteredViewControllers;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_popViewControllerAnimated:(BOOL)arg1;
- (void)_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)willPerformBatchedInvocations;
- (id)_navigationController;
- (void)didPerformBatchedInvocations;
- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;
- (id)newNativeViewController;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
@property BOOL navigationBarHidden;
@property(retain) id viewControllers;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)popViewControllerAnimated:(BOOL)arg1;
@property(readonly) SUScriptViewController *topViewController;
@property(readonly) SUScriptNavigationBar *navigationBar;
- (void)dealloc;

@end

