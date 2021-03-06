//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKDigitalFaceView.h>

#import "NTKTimeView.h"
#import "PUICCrownInputSequencerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CLKFont, NSDateComponentsFormatter, NSDictionary, NSMutableSet, NSString, NSTimer, NTKBezierPathView, NTKColorCurve, NTKComplicationController, NTKDateComplicationLabel, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFloatCurve, NTKLayoutRule, NTKSolarDiskView, NTKSolarPath, NTKSolarTimeModel, PUICClientSideAnimation, PUICCrownInputSequencer, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface NTKSolarFaceView : NTKDigitalFaceView <NTKTimeView, PUICCrownInputSequencerDelegate, UIGestureRecognizerDelegate>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKDigitalTimeLabelStyle *_timeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle *_timeLabelSmallInUpperRightCornerStyle;
    UIView *_solarPathObjectContainerView;
    NTKBezierPathView *_solarBezierPathView;
    NTKSolarDiskView *_solarDiskView;
    UIView *_solarDiskHaloParentView;
    UIImageView *_solarDiskHaloView;
    UIView *_solarDiskHaloMaskView;
    NTKColorCurve *_preNoonSolarDiskColorCurve;
    NTKColorCurve *_postNoonSolarDiskColorCurve;
    PUICClientSideAnimation *_solarDiskAnimation;
    float _solarDiskOverridePercentage;
    UILabel *_waypointLabel;
    NSDictionary *_waypoints;
    NSDictionary *_waypointViews;
    UIView *_horizonView;
    UIImageView *_horizonGradientView;
    UIView *_horizonGradientContainerView;
    NTKColorCurve *_preNoonHorizonGradientColorCurve;
    NTKColorCurve *_postNoonHorizonGradientColorCurve;
    UIView *_belowHorizonView;
    NTKSolarTimeModel *_solarTimeModel;
    _Bool _solarPathNeedsUpdate;
    float _currentSolarDiskPercentage;
    NTKFloatCurve *_preNoonHorizonHeightCurve;
    NTKFloatCurve *_postNoonHorizonHeightCurve;
    NTKSolarPath *_solarPath;
    UITapGestureRecognizer *_viewModeTapGesture;
    int _previousViewMode;
    struct NSNumber *_clockTimerToken;
    struct NSNumber *_locationManagerToken;
    NTKComplicationController *_dateComplicationController;
    NTKDateComplicationLabel *_dateComplicationLabel;
    NTKLayoutRule *_dateComplicationLayoutRule;
//    _Bool _canHandleHardwareEvents;
//    PUICCrownInputSequencer *_crownSequencer;
    NTKDigitalTimeLabel *_timeScrubLabel;
    NTKDigitalTimeLabelStyle *_timeScrubLabelStyle;
    UILabel *_timeScrubNowLabel;
    UILabel *_timeDifferenceScrubLabel;
    NTKLayoutRule *_timeDifferenceScrubLabelLayoutRule;
    NSDateComponentsFormatter *_intervalDateFormatter;
    _Bool _useLocationAwareInteractiveMode;
    CDUnknownBlockType _waypointSettleAnimationBlock;
    UIView *_wristRaiseBackgroundView;
    UIView *_wristRaiseSunView;
    UIView *_wristRaiseSunMaskView;
    UIView *_zoomMaskView;
    struct CGPoint _timeLabelZoomEndingCenter;
    struct CGPoint _dateLabelZoomEndingCenter;
    struct CGPoint _solarDiskViewZoomEndingCenter;
    UIView *_borrowedTimeViewFromClockIcon;
    UIView *_borrowedCircleViewFromClockIcon;
    NSMutableSet *_animatingReasons;
    _Bool _isContentLoaded;
    NSTimer *_wheelDelayTimer;
    NSTimer *_buttonPressTimer;
    CLKFont *_labelFont;
}

// - (void).cxx_destruct;
- (void)_layoutTimeLabelForViewMode:(int)arg1;
- (id)_timeLabelStyleForViewMode:(int)arg1;
- (void)_layoutSolarDiskViewForViewMode:(int)arg1;
- (void)_layoutSolarPathAndContainerForViewMode:(int)arg1;
- (void)_layoutHorizonForViewMode:(int)arg1;
- (void)_layoutCrownLabelsForViewMode:(int)arg1;
- (void)_layoutDateComplicationForViewMode:(int)arg1;
- (_Bool)_isAnimatingForReason:(id)arg1;
- (_Bool)_isAnimating;
- (void)_endAnimatingForReason:(id)arg1;
- (void)_beginAnimatingForReason:(id)arg1;
- (void)_cleanupAfterSettingViewMode:(int)arg1;
- (void)_prepareForSettingViewMode:(int)arg1;
- (void)_setViewMode:(int)arg1 animated:(_Bool)arg2;
- (_Bool)_canEnterInteractiveMode;
- (void)_setSolarBezierPath:(id)arg1 animated:(_Bool)arg2;
- (id)_createSolarBezierPath;
- (void)_updateSolarPathForChangedDate:(id)arg1;
- (void)_updateSolarPathForChangedLocation:(id)arg1;
- (struct CGPoint)_pointOnSolarPathForPercentage:(float)arg1;
- (id)_createWaypointView;
- (void)_animateSolarDiskFromPercentage:(float)arg1 toPercentage:(float)arg2 reason:(id)arg3;
- (void)_animateSolarDiskToRestPercentageIfNeeded;
- (void)_updateSolarDiskHaloViewPosition;
- (void)_solarDiskPercentageChanged:(float)arg1;
- (float)_solarDiskIdealizedDatePercentage;
- (float)_solarDiskRestPercentage;
- (void)_updateSolarHorizonGradientColorWithPercentage:(float)arg1;
- (void)_updateSolarHorizonGradientAlphaWithSolarDiskCenter:(struct CGPoint)arg1;
- (void)_updateSolarHorizonGradientAlphaWithPercentage:(float)arg1;
- (void)_updateSolarHaloWithPercentage:(float)arg1;
- (void)_updateColorCurves;
- (void)_updateWaypointLabelForCrownMovement;
- (id)_waypointLabelTextForPercentage:(float)arg1;
- (int)_waypointForPercentage:(float)arg1 withSmallThreshold:(float)arg2 largeThreshold:(float)arg3;
- (float)_percentageForWaypoint:(int)arg1;
- (void)_updateWaypoints;
- (void)_handleViewModeTapGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_makeLocationAwareInteractiveModeUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_localeChanged;
- (void)_timeZoneChanged:(id)arg1;
- (_Bool)_solarPathRequiresUpdateForChangedLocation:(id)arg1;
- (void)_sharedLocationManagerUpdatedLocation:(id)arg1 error:(id)arg2;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (_Bool)_usesCustomZoom;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_applyDataMode;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (void)_updateTimeScrubbingContent;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)_buttonPressTimerFired;
- (void)_wheelDelayTimerFired;
- (_Bool)_handlePhysicalButton:(unsigned int)arg1 event:(unsigned int)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (void)_adjustUIForBoundsChange;
- (void)_loadLayoutRules;
- (void)layoutSubviews;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)setViewMode:(int)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFrozen) _Bool frozen;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

