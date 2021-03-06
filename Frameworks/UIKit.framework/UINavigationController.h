//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegatePrivate.h"
#import "UINavigationBarDelegate.h"

@class NSArray, NSString, NSUUID, UIGestureRecognizer, UINavigationBar, UINavigationTransitionView, UIPanGestureRecognizer, UITapGestureRecognizer, UIToolbar, UIView, _UIAnimationCoordinator, _UIBarPanGestureRecognizer, _UIBarTapGestureRecognizer, _UINavigationControllerPalette, _UINavigationInteractiveTransition, _UINavigationParallaxTransition;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate>
{
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    float _bottomInsetDelta;
    float _statusBarHeightForHideShow;
    UIViewController *_disappearingViewController;
    id <UINavigationControllerDelegate> _delegate;
    int _savedNavBarStyleBeforeSheet;
    int _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    _UINavigationControllerPalette *_topPalette;
    _UINavigationControllerPalette *_freePalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
    struct {
        unsigned int isAppearingAnimated:1;
        unsigned int isAlreadyPoppingNavigationItem:1;
        unsigned int isNavigationBarHidden:1;
        unsigned int isToolbarShown:1;
        unsigned int needsDeferredTransition:1;
        unsigned int isTransitioning:1;
        unsigned int paletteTransitionPending:1;
        unsigned int lastOperation:4;
        unsigned int lastOperationAnimated:1;
        unsigned int deferredTransition:8;
        unsigned int didPreloadKeyboardAnimation:1;
        unsigned int didHideBottomBar:1;
        unsigned int didExplicitlyHideTabBar:1;
        unsigned int isChangingOrientationForPop:1;
        unsigned int pretendNavBarHidden:1;
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding:1;
        unsigned int searchBarHidNavBar:1;
        unsigned int useSystemPopoverBarAppearance:1;
        unsigned int isCustomTransition:1;
        unsigned int isBuiltinTransition:1;
        unsigned int resetDidHideOnCancel:1;
        unsigned int delegateWillShowViewController:1;
        unsigned int delegateDidShowViewController:1;
        unsigned int delegateTransitionController:1;
        unsigned int delegateTransitionControllerEx:1;
        unsigned int delegateInteractionController:1;
        unsigned int delegateInteractionControllerEx:1;
        unsigned int delegateShouldCrossFadeNavigationBar:1;
        unsigned int delegateShouldCrossFadeBottomBars:1;
        unsigned int delegateShouldUseBuiltinInteractionController:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateLayoutTransitioningClass:1;
        unsigned int navigationBarHidesCompletelyOffscreen:1;
        unsigned int clipUnderlapWhileTransitioning:1;
        unsigned int isCrossfadingOutTabBar:1;
        unsigned int isCrossfadingInTabBar:1;
        unsigned int skipContentInsetCalculation:1;
        unsigned int neverInWindow:1;
        unsigned int useStandardStatusBarHeight:1;
        unsigned int allowUserInteractionDuringTransition:1;
        unsigned int enableBackButtonDuringTransition:1;
        unsigned int allowsGroupBlending:1;
        unsigned int allowNestedNavigationControllers:1;
        unsigned int nestedNavigationBarWasHidden:1;
        unsigned int nestedToolbarWasHidden:1;
        unsigned int isNested:1;
        unsigned int searchHidNavigationBar:1;
        unsigned int suppressMixedOrientationPop:1;
        unsigned int disappearingViewControllerIsBeingRemoved:1;
        unsigned int isWrappingDuringAdaptation:1;
    } _navigationControllerFlags;
    BOOL _interactiveTransition;
    BOOL _hidesBarsWhenKeyboardAppears;
    BOOL _hidesBarsOnSwipe;
    BOOL _hidesBarsWhenVerticallyCompact;
    BOOL _hidesBarsOnTap;
    BOOL __usingBuiltinAnimator;
    BOOL __barAnimationWasCancelled;
    Class _toolbarClass;
    float _customNavigationTransitionDuration;
    id <UIViewControllerAnimatedTransitioning> __transitionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    id <UIViewControllerInteractiveTransitioning> __interactionController;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    NSUUID *__toolbarAnimationId;
    NSUUID *__navbarAnimationId;
    CDUnknownBlockType __updateNavigationBarHandler;
    id __keyboardAppearedNotificationToken;
    _UIBarPanGestureRecognizer *__barSwipeHideGesture;
    _UIAnimationCoordinator *__barInteractiveAnimationCoordinator;
    _UIBarTapGestureRecognizer *__barTapHideGesture;
    int _builtinTransitionStyle;
    float _builtinTransitionGap;
    NSString *__backdropGroupName;
}

+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
+ (BOOL)_directlySetsContentOverlayInsetsForChildren;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (id)paletteForEdge:(unsigned int)arg1 size:(struct CGSize)arg2;
- (void)detachPalette:(id)arg1;
- (void)_detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(BOOL)arg2;
- (id)existingPaletteForEdge:(unsigned int)arg1;
- (void)attachPalette:(id)arg1 isPinned:(BOOL)arg2;
- (id)_pinningBarForPalette:(id)arg1;
- (struct CGRect)_boundsForPalette:(id)arg1 size:(struct CGSize)arg2;
@property BOOL isExpanded;
@property(retain) UIViewController *detailViewController;
- (id)_topPalette;
@property(nonatomic, getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:) float builtinTransitionGap; // @synthesize builtinTransitionGap=_builtinTransitionGap;
@property(nonatomic, getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:) int builtinTransitionStyle; // @synthesize builtinTransitionStyle=_builtinTransitionStyle;
@property(retain, nonatomic, setter=_setBarTapHideGesture:) _UIBarTapGestureRecognizer *_barTapHideGesture; // @synthesize _barTapHideGesture=__barTapHideGesture;
@property(retain, nonatomic, setter=_setBarSwipeHideGesture:) _UIBarPanGestureRecognizer *_barSwipeHideGesture; // @synthesize _barSwipeHideGesture=__barSwipeHideGesture;
@property(retain, nonatomic, setter=_setKeyboardAppearedNotificationToken:) id _keyboardAppearedNotificationToken; // @synthesize _keyboardAppearedNotificationToken=__keyboardAppearedNotificationToken;
@property(nonatomic, setter=_setBarAnimationWasCancelled:) BOOL _barAnimationWasCancelled; // @synthesize _barAnimationWasCancelled=__barAnimationWasCancelled;
@property(retain, nonatomic, setter=_setCachedInteractionController:) _UINavigationInteractiveTransition *_cachedInteractionController; // @synthesize _cachedInteractionController=__cachedInteractionController;
@property(retain, nonatomic, setter=_setCachedTransitionController:) _UINavigationParallaxTransition *_cachedTransitionController; // @synthesize _cachedTransitionController=__cachedTransitionController;
@property(nonatomic) BOOL hidesBarsOnTap; // @synthesize hidesBarsOnTap=_hidesBarsOnTap;
@property(nonatomic) BOOL hidesBarsWhenVerticallyCompact; // @synthesize hidesBarsWhenVerticallyCompact=_hidesBarsWhenVerticallyCompact;
@property(nonatomic) BOOL hidesBarsWhenKeyboardAppears; // @synthesize hidesBarsWhenKeyboardAppears=_hidesBarsWhenKeyboardAppears;
@property(nonatomic, setter=_setToolbarClass:) Class _toolbarClass; // @synthesize _toolbarClass;
@property(readonly, nonatomic) UITapGestureRecognizer *barHideOnTapGestureRecognizer;
@property(readonly, retain, nonatomic) UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer;
- (void)setCondensesBarsOnSwipe:(BOOL)arg1;
- (BOOL)condensesBarsOnSwipe;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(int)arg1 duration:(double)arg2 curve:(int)arg3;
- (BOOL)isAlreadyPoppingNavItem;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(BOOL)arg2;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)__viewWillLayoutSubviews;
- (id)_builtinTransitionController;
- (void)_setCustomTransition:(BOOL)arg1;
- (BOOL)isBuiltinTransition;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(int)arg2;
- (id)_screenEdgePanGestureRecognizer;
- (BOOL)isShown;
- (void)setToolbar:(id)arg1;
- (void)_sendNavigationBarToBack;
@property(nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)_setSearchHidNavigationBar:(BOOL)arg1;
@property(nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
- (Class)navigationBarClass;
- (void)_setContentInset:(struct UIEdgeInsets)arg1;
- (void)_setClipsToBounds:(BOOL)arg1;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)setEnableBackButtonDuringTransition:(BOOL)arg1;
- (void)setAllowUserInteractionDuringTransition:(BOOL)arg1;
- (BOOL)_useCurrentStatusBarHeight;
- (void)_setUseStandardStatusBarHeight:(BOOL)arg1;
- (void)_setUseCurrentStatusBarHeight:(BOOL)arg1;
@property(nonatomic, getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:) BOOL didHideTabBar;
@property(nonatomic, getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:) BOOL crossfadingInTabBar;
@property(nonatomic, getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:) BOOL crossfadingOutTabBar;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
@property(nonatomic) BOOL pretendNavBarHidden;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_setBarsHidden:(BOOL)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
@property(retain, nonatomic, setter=_setInteractiveAnimationCoordinator:) _UIAnimationCoordinator *_barInteractiveAnimationCoordinator; // @synthesize _barInteractiveAnimationCoordinator=__barInteractiveAnimationCoordinator;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_makeBarHideGestureIfNecessary;
- (void)_makeBarSwipeGestureIfNecessary;
@property(nonatomic) BOOL hidesBarsOnSwipe; // @synthesize hidesBarsOnSwipe=_hidesBarsOnSwipe;
- (void)_hideForKeyboardAppearance;
- (void)_setBarsHidden:(BOOL)arg1 allowAnimation:(BOOL)arg2;
- (void)_configureBarTapGesture;
- (void)_configureBarSwipeGesture;
- (void)_configureKeyboardBarHiding;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (id)_existingToolbarWithItems;
- (BOOL)_useCrossFadeForGestureHiding;
- (BOOL)_shouldHideBarsForTraits:(id)arg1;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)arg1;
- (void)makeModalViewControllerTopViewController;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (id)_findViewControllerToPopTo;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (id)_nthChildViewControllerFromTop:(unsigned int)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
@property(nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;
@property(nonatomic, getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:) BOOL isNestedNavigationController;
@property(copy, nonatomic, setter=_setUpdateNavigationBarHandler:) CDUnknownBlockType _updateNavigationBarHandler; // @synthesize _updateNavigationBarHandler=__updateNavigationBarHandler;
- (void)_startCustomTransition:(id)arg1;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (struct UIEdgeInsets)_expectedContentInsetDeltaForViewController:(id)arg1;
- (float)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (float)_scrollViewTopContentInsetForViewController:(id)arg1;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (void)_layoutViewController:(id)arg1;
- (BOOL)_shouldBottomBarBeHidden;
- (BOOL)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (BOOL)_shouldStatusBarInsetViewController:(id)arg1;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(char *)arg3;
- (BOOL)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(char *)arg3;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(char *)arg2;
- (BOOL)_isNavigationBarEffectivelyVisible;
- (BOOL)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (BOOL)_isNavigationBarVisible;
@property(nonatomic) BOOL needsDeferredTransition;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_clearLastOperation;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_viewControllerForDisappearCallback;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2 crossFade:(BOOL)arg3;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(unsigned int)arg2 duration:(double)arg3;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_configureToolbar;
- (void)_configureBarsAutomaticActions;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (void)_layoutTopViewControllerInSheet;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_startInteractiveNavbarTransition;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (BOOL)_useStandardStatusBarHeight;
- (BOOL)_searchHidNavigationBar;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(int)arg2 edge:(unsigned int *)arg3 duration:(double *)arg4;
- (int)lastOperation;
- (BOOL)wasLastOperationAnimated;
- (void)_repositionPaletteWithNavigationBarHidden:(BOOL)arg1 duration:(double)arg2 shouldUpdateNavigationItems:(BOOL)arg3;
- (void)_layoutTopViewController;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (BOOL)_hasNestedNavigationController;
- (void)_setNavigationBarHidesCompletelyOffscreen:(BOOL)arg1;
- (struct CGPoint)_computeTopBarCenter:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned int)arg3 center:(struct CGPoint)arg4 offset:(float)arg5;
- (struct CGRect)_frameForPalette:(id)arg1;
- (int)_positionForBar:(id)arg1;
- (void)_positionTopBar:(id)arg1 hidden:(BOOL)arg2 edge:(unsigned int)arg3 center:(struct CGPoint)arg4 offset:(float)arg5;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(unsigned int)arg2 duration:(double)arg3;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
- (id)_navigationBarHiddenByDefault:(BOOL)arg1;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(int)arg2;
- (int)_navigationTransitionForUITransition:(int)arg1;
- (void)_cancelInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
- (void)_finishInteractiveTransition:(float)arg1 transitionContext:(id)arg2;
@property(nonatomic, getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:) BOOL _usingBuiltinAnimator; // @synthesize _usingBuiltinAnimator=__usingBuiltinAnimator;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4;
@property(readonly, nonatomic) UINavigationTransitionView *navigationTransitionView;
- (BOOL)_isPerformingLayoutToLayoutTransition;
- (id)_keyboardAnimationStyle;
- (int)_deferredTransition;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)_frameForViewController:(id)arg1;
- (id)_transitionAnimationContext;
- (void)_startInteractiveToolbarTransition;
@property(nonatomic, getter=isInteractiveTransition) BOOL interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)isCustomTransition;
- (BOOL)_toolbarIsAnimatingInteractively;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(float)arg3 isFinished:(BOOL)arg4 didComplete:(BOOL)arg5 completionSpeed:(float)arg6 completionCurve:(int)arg7;
- (id)_navigationBarForNestedNavigationController;
- (BOOL)_navbarIsAppearingInteractively;
@property(retain, nonatomic, setter=_setNavbarAnimationId:) NSUUID *_navbarAnimationId; // @synthesize _navbarAnimationId=__navbarAnimationId;
- (id)_startInteractiveBarTransition:(id)arg1;
@property(retain, nonatomic, setter=_setToolbarAnimationId:) NSUUID *_toolbarAnimationId; // @synthesize _toolbarAnimationId=__toolbarAnimationId;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_executeNavigationHandler:(CDUnknownBlockType)arg1 deferred:(BOOL)arg2;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (void)_startDeferredTransitionIfNeeded;
@property(nonatomic) float customNavigationTransitionDuration; // @synthesize customNavigationTransitionDuration=_customNavigationTransitionDuration;
- (id)_customInteractionController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (BOOL)allowUserInteractionDuringTransition;
- (id)_customTransitionController:(BOOL)arg1;
- (BOOL)_usesTransitionController;
- (void)setNeedsDeferredTransition;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(int)arg4;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3 operation:(int)arg4;
- (id)_existingNavigationBar;
@property(readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;
- (id)_navigationItems;
- (id)_outermostNavigationController;
- (BOOL)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(BOOL)arg3;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
@property(readonly, retain, nonatomic) UIViewController *visibleViewController;
- (void)_positionPaletteHidden:(BOOL)arg1 edge:(unsigned int)arg2 initialOffset:(float)arg3;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(unsigned int)arg2 initialOffset:(float)arg3;
- (void)_releaseContainerViews;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (void)_confirmBarAccessMethods;
@property(readonly, nonatomic) UIToolbar *toolbar;
- (void)setNavigationBarClass:(Class)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
- (BOOL)_viewControllerWasSelected;
- (id)_additionalViewControllersToCheckForUserActivity;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (float)_topBarHeight;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (id)tabBarItem;
- (void)updateTabBarItemForViewController:(id)arg1;
@property(nonatomic, getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:) BOOL allowNestedNavigationControllers;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_updateInteractivePopGestureEnabledState;
- (id)defaultPNGName;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
@property(readonly, nonatomic) UIViewController *bottomViewController;
- (id)_lastNavigationItems;
- (BOOL)searchBarHidNavBar;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(CDStruct_f39609a0 *)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_allowsAutorotation;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
@property(retain, nonatomic, setter=_setInteractionController:) id <UIViewControllerInteractiveTransitioning> _interactionController; // @synthesize _interactionController=__interactionController;
@property(retain, nonatomic, setter=_setTransitionController:) id <UIViewControllerAnimatedTransitioning> _transitionController; // @synthesize _transitionController=__transitionController;
- (int)modalTransitionStyle;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (int)_keyboardDirectionForTransition:(int)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (BOOL)_reallyWantsFullScreenLayout;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (id)_backdropBarGroupName;
- (void)updateTitleForViewController:(id)arg1;
- (void)_didGainChildScrollView:(id)arg1;
- (void)viewDidUnload;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_isPresentationContextByDefault;
- (id)_viewForContentInPopover;
- (BOOL)isModalInPopover;
- (void)setContentSizeForViewInPopover:(struct CGSize)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)_updateChildContentMargins;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char *)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)preferredContentSize;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setIsWrappingDuringAdaptation:(BOOL)arg1;
- (double)durationForTransition:(int)arg1;
- (id)_builtinInteractionController;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)editing;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (BOOL)enableBackButtonDuringTransition;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (float)_customNavigationTransitionDuration;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (BOOL)_shouldCrossFadeNavigationBar;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (void)_updatePaletteBackground;
- (void)_updatePaletteConstraints;
- (void)setNavigationBar:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_transitionCoordinator;
- (id)preferredFocusedItem;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)becomeFirstResponder;
- (id)_deepestUnambiguousResponder;
- (int)preferredStatusBarStyle;
- (id)_snapshotView;
- (id)popViewControllerAnimated:(BOOL)arg1;
@property(readonly, nonatomic) UIViewController *previousViewController;
- (id)navigationItem;
@property(readonly, retain, nonatomic) UIViewController *topViewController;
- (id)_existingToolbar;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (BOOL)_shouldUseBuiltinInteractionController;
- (BOOL)_isTransitioning;
- (BOOL)_clipUnderlapWhileTransitioning;
@property(nonatomic) id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

