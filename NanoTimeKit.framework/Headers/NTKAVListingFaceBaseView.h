//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKAVFaceBaseView.h>

@class NSTimer, NTKDelayedBlock, NTKTaskScheduler, UIView;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView
{
    CDUnknownBlockType _unpauseFromSwitcherBlock;
    NTKTaskScheduler *_taskScheduler;
    _Bool _preLoadingVideoOnSleep;
    _Bool _preLoadedVideoOnSleep;
    _Bool _shouldPlayOnWake;
    _Bool _isPauseLockedout;
    _Bool _isPaused;
    _Bool _shouldPause;
    NSTimer *_playOnWakeTimeout;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_pauseLockoutBlock;
    UIView *_blackView;
    int _previousDataMode;
    _Bool _shouldChangeVariantForScreenWake;
    _Bool _contentUnloadedForFaceSwiping;
    id <NTKAVListing> _currentListing;
}

@property(nonatomic) _Bool contentUnloadedForFaceSwiping; // @synthesize contentUnloadedForFaceSwiping=_contentUnloadedForFaceSwiping;
@property(nonatomic) _Bool shouldChangeVariantForScreenWake; // @synthesize shouldChangeVariantForScreenWake=_shouldChangeVariantForScreenWake;
@property(retain, nonatomic) id <NTKAVListing> currentListing; // @synthesize currentListing=_currentListing;
@property(readonly, nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(readonly, nonatomic) _Bool paused; // @synthesize paused=_isPaused;
// - (void).cxx_destruct;
- (void)_reset;
- (void)_updateImageToBlur;
- (void)_cancelPauseLockout;
- (void)_activatePauseLockout;
- (void)_cancelDelayedPlayback;
- (void)_playNextVideoAfterDelay:(double)arg1;
- (void)_playNextVideo;
- (void)_playQueuedUpVideo;
- (void)_transitionToPosterView:(id)arg1;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_unpauseFromSwitcher;
- (void)_playVideoForScreenWake:(id)arg1;
- (void)_playVideo;
- (void)_pauseImmediately;
- (void)_updatePaused;
- (_Bool)_timeLabelUsesLegibility;
- (void)_prepareForEditing;
- (void)_applySlow;
- (void)_applyFrozen;
- (void)faultInFaceContentSkippedDuringSwiping;
- (void)_applyDataMode;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)_cleanupAfterOrb:(_Bool)arg1;
- (void)_prepareForOrb;
- (_Bool)_needsVignette;
- (id)_curtainView;
- (_Bool)_curtainViewVisible;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideCurtainView;
- (void)_showCurtainView;
- (void)_handleCSLPIBacklightWillTurnOff;
- (void)_handleScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_queuePreloadVideoTask;
- (void)_performPreloadVideoTask;
- (void)_addSubviewInOrder:(id)arg1;
- (id)_onDeckPosterImageView;
- (id)_nextListing;
- (void)_resetVideoForListing;
- (void)_loadVideoForListing;
- (void)_selectDefaultListing;
- (_Bool)_changeCurrentListing;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

