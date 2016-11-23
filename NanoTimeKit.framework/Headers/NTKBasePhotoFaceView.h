//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKBackgroundImageFaceView.h>

#import "NPTOImageViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NPTOImageView, NSString, NSTimer, NTKAlbumEmptyView, NTKTaskScheduler, NTKUtilityComplicationFactory, UIColor, UILongPressGestureRecognizer, UIView;

@interface NTKBasePhotoFaceView : NTKBackgroundImageFaceView <NPTOImageViewDelegate, UIGestureRecognizerDelegate>
{
    NPTOImageView *_posterImageView;
    UILongPressGestureRecognizer *_longPressGesture;
    _Bool _lastLongPressGestureWasCancelled;
    _Bool _paused;
    CDUnknownBlockType _unpauseFromSwitcherBlock;
    UIView *_blackView;
    _Bool _shouldPlayIntro;
    _Bool _shouldPlayOnWake;
    NSTimer *_playOnWakeTimeout;
    NTKTaskScheduler *_taskScheduler;
    _Bool _preLoadingPhotoOnSleep;
    _Bool _preloadedPhotoOnSleep;
    int _previousDataMode;
    unsigned int _dateAlignment;
    NTKAlbumEmptyView *_noPhotosView;
    UIView *_cornerView;
    UIColor *_foregroundColor;
    UIColor *_shadowColor;
    UIView *_currentGradientView;
    unsigned int _isContentLoaded:1;
    unsigned int _isInteractive:1;
    unsigned int _isUsingLegibility:1;
    NTKUtilityComplicationFactory *_complicationFactory;
    _Bool _noPhotosViewVisible;
}

+ (id)_analyzeSidecarPhoto:(id)arg1 dateAlignment:(unsigned int)arg2;
+ (id)_saveSidecarPhotoAnalysis:(id)arg1;
+ (id)_analysisForPhoto:(id)arg1 dateAlignment:(unsigned int)arg2;
+ (id)_temporaryDirectory;
@property(nonatomic, getter=isNoPhotosViewVisible) _Bool noPhotosViewVisible; // @synthesize noPhotosViewVisible=_noPhotosViewVisible;
@property(readonly, nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(readonly, nonatomic) NPTOImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
// - (void).cxx_destruct;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (void)imageViewDidEndPlaying:(id)arg1;
- (void)imageViewDidBeginPlaying:(id)arg1;
- (void)_setDateAttributes:(id)arg1 animated:(_Bool)arg2;
- (id)_newGradientViewWithColor:(id)arg1;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (_Bool)_usesCustomZoom;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (_Bool)_curtainViewVisible;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideCurtainView;
- (void)_showCurtainView;
- (void)_handleCSLPIBacklightWillTurnOff;
- (void)_handleScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_animateIn;
- (void)_handleLongPress:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_invalidatePreloadedPhoto;
- (_Bool)_preloadNextPhoto;
- (void)_scheduleSleepPreloadTask;
- (void)_applyDataMode;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_playVideo;
- (void)_playStill;
- (void)_playPhoto;
- (_Bool)_screenOn;
- (void)_updatePaused;
- (void)_cleanupAfterOrb:(_Bool)arg1;
- (void)_prepareForOrb;
- (void)_applySlow;
- (void)_applyFrozen;
- (id)_selectedContentView;
- (_Bool)_timeLabelUsesLegibility;
- (float)_editSpeedForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyAlignment;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_configureComplicationFactory;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (int)_utilitySlotForSlot:(id)arg1;
- (float)_timeLabelAlphaForEditMode:(int)arg1;
- (float)_backgroundImageAlphaForEditMode:(int)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (void)_setComplicationsHidden:(_Bool)arg1;
- (void)_applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1;
- (void)_applyForegroundAlphaForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_layoutForegroundContainerView;
- (id)_digitalTimeLabelStyle;
- (float)_timeTravelYAdjustment;
@property(readonly, nonatomic) unsigned int dateAlignment; // @dynamic dateAlignment;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

