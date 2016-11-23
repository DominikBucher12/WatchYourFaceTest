//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFaceView.h>

#import "NTKActivityFaceViewFactoryDelegate.h"

@class HKRingsView, NSDate, NSString, NTKActivityFaceControl, NTKActivityFaceViewFactory, NTKDigitalTimeLabel, NTKPolygonCylinderView, UILabel, UIView;

@interface NTKActivityDigitalFaceView : NTKFaceView <NTKActivityFaceViewFactoryDelegate>
{
    NTKActivityFaceViewFactory *_faceViewFactory;
    HKRingsView *_ringsView;
    UILabel *_energyLabel;
    UILabel *_briskMinutesLabel;
    UILabel *_standHoursLabel;
    NTKActivityFaceControl *_tapToLaunchButton;
    UIView *_timeLabelBackgroundView;
    NTKPolygonCylinderView *_densityEditingPolygonView;
    NSDate *_timeDensityEditingOverrideDate;
    struct RingLayout _currentRingLayout;
    float _lastEnergyPercentage;
    float _lastBriskPercentage;
    float _lastSedentaryPercentage;
    float _blinkerAndSecondsWidth;
    _Bool _useTimeTravelStyleForTimeLabel;
    _Bool _showSeconds;
    float _rightTimeViewInset;
}

+ (id)_additionalPrelaunchApplicationIdentifiers;
+ (id)_newRingsView;
+ (void)_prewarm;
@property(nonatomic) _Bool showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) float rightTimeViewInset; // @synthesize rightTimeViewInset=_rightTimeViewInset;
@property(nonatomic) _Bool useTimeTravelStyleForTimeLabel; // @synthesize useTimeTravelStyleForTimeLabel=_useTimeTravelStyleForTimeLabel;
// - (void).cxx_destruct;
- (id)_ringGroupController;
- (void)_recenterTimeView;
- (float)_blinkerAndSecondsWidth;
- (void)_enumerateActivityLabels:(CDUnknownBlockType)arg1;
- (void)_updateTimeViewSecondsDisplayState;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(_Bool)arg1;
- (void)_applyEntryModel:(id)arg1 byFraction:(float)arg2 updateLabels:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_applyCurrentEntryModelByFraction:(float)arg1 updateLabels:(_Bool)arg2 animated:(_Bool)arg3;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;
- (void)applyEntryModel:(id)arg1 animated:(_Bool)arg2;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (_Bool)_wantsTimeTravelStatusModule;
- (_Bool)_supportsTimeScrubbing;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (int)_polygonIndexForAccuracy:(unsigned int)arg1;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_setActivityViewsAlpha:(float)arg1 animated:(_Bool)arg2;
- (float)_rightTimeViewInsetForEditMode:(int)arg1;
- (float)_timeAlphaForEditMode:(int)arg1;
- (float)_ringAlphaForEditMode:(int)arg1;
- (void)_cleanUpAfterDetailEditing;
- (void)_configureForDetailEditing;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (struct CGRect)_timeViewBackgroundRect;
- (struct CGRect)_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (_Bool)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (void)setDataMode:(int)arg1;
- (void)_launchButtonPressed:(id)arg1;
- (struct CGPoint)_ringCenterForLayout:(struct RingLayout)arg1;
- (void)_applyCurrentRingLayout;
- (void)_updateCurrentRingLayoutIfNecessary;
- (void)_layoutForegroundContainerView;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeView; // @dynamic timeView;

@end

