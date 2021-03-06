//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineComplicationController.h>

#import "NTKComplicationCollectionObserver.h"
#import "NTKComplicationTimelineDelegate.h"
#import "NTKTimeTravel.h"

@class CLKComplicationTemplate, NSDate, NSMutableSet, NSString, NSTimer, NTKComplicationCollection, NTKComplicationTimeline, NTKRemoteComplication, NTKTimelineDataOperation, PCPersistentTimer;

@interface NTKRemoteTimelineComplicationController : NTKTimelineComplicationController <NTKComplicationTimelineDelegate, NTKTimeTravel, NTKComplicationCollectionObserver>
{
    NSDate *_timeTravelDate;
    _Bool _supportsTimeTravelForward;
    _Bool _supportsTimeTravelBackward;
    NSDate *_timelineStartDate;
    NSDate *_timelineEndDate;
    unsigned int _timelineAnimationBehavior;
    _Bool _hasQueuedAnimation;
    unsigned int _queuedAnimation;
    unsigned int _privacyBehavior;
    NTKComplicationTimeline *_timeline;
    NTKTimelineDataOperation *_currentOperation;
    _Bool _needsTimelineReload;
    _Bool _needsTimelineExtend;
    _Bool _performingTimelineReload;
    _Bool _performingTimelineExtend;
    id <CLKComplicationDataSource> _wakeSessionDataSource;
    CDUnknownBlockType _wakeSessionCompletionHandler;
    NSMutableSet *_suspendedLeftBoundaryDates;
    NSMutableSet *_suspendedRightBoundaryDates;
    NTKComplicationCollection *_complicationCollection;
    CLKComplicationTemplate *_sampleTemplate;
    CLKComplicationTemplate *_noContentTemplate;
    NSTimer *_setupOperationGracePeriodTimer;
    _Bool _inSetupOperationGracePeriod;
    NSDate *_forcedExtensionTimerStartDate;
    PCPersistentTimer *_forcedExtensionTimer;
    NSTimer *_removeDataAndWakeSessionGracePeriodTimer;
    _Bool _inRemoveDataAndWakeSessionGracePeriod;
    _Bool _hasSetup;
    CLKComplicationTemplate *_currentTemplate;
}

+ (_Bool)_acceptsComplicationType:(unsigned int)arg1 family:(int)arg2;
@property(readonly, nonatomic) CLKComplicationTemplate *currentTemplate; // @synthesize currentTemplate=_currentTemplate;
@property(readonly, nonatomic) _Bool hasSetup; // @synthesize hasSetup=_hasSetup;
// - (void).cxx_destruct;
- (void)_endSetupOperationGracePeriod;
- (void)_setupOperationGracePeriodTimerFired:(id)arg1;
- (void)_startSetupOperationGracePeriod;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (_Bool)hasTapAction;
- (void)_updateComplicationDimState;
- (id)_currentEntry;
- (void)_startExtendLeftOperationFromDate:(id)arg1;
- (void)_startExtendRightOperationFromDate:(id)arg1;
- (void)_completeExtendLeftOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_completeExtendRightOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_clearSuspendedBoundaryDates;
- (void)_suspendRightBoundaryDate:(id)arg1;
- (void)_suspendLeftBoundaryDate:(id)arg1;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_completeEndDateOperationWithEndDate:(id)arg1;
- (void)_updateEndDateAndExtendTimelineIfNecessaryAndPossible;
- (void)_considerForcedTimelineExtension;
- (void)_handleSignificantTimeChange;
- (void)_forcedExtensionTimerFired:(id)arg1;
- (void)_resetForcedTimelineExtensionTimer;
- (void)_scheduleForcedTimelineExtensionTimer;
- (void)setCurrentTemplate:(id)arg1 withAnimation:(unsigned int)arg2;
- (void)_startSetupOperationIfPossible;
- (void)_completeSetupOperationWithDirections:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 privacyBehavior:(unsigned int)arg4 timelineAnimationBehavior:(unsigned int)arg5 currentEntry:(id)arg6;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_queueAnimationForNextUpdate:(unsigned int)arg1;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)setTimelineEndDate:(id)arg1;
- (void)setTimelineStartDate:(id)arg1;
- (void)_reloadTimeline;
- (id)_sampleTemplateIfExists;
- (void)_updateCurrentTemplate;
- (void)_updateTimeTravelBoundaries;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)addDisplayWrapper:(id)arg1;
- (void)_endWakeSessionNormally;
- (void)cancelWakeSession;
- (void)performWakeSessionWithDataSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSampleOrNoContentTemplatesIfNecessary;
- (void)setNeedsTimelineExtend;
- (void)setNeedsTimelineReload;
- (void)setShowsLockedUI:(_Bool)arg1;
- (void)setDataMode:(int)arg1 forDisplayWrapper:(id)arg2;
- (void)_applyUpdatingMode;
- (void)_applyCachingMode;
- (void)_setupRemoveDataAndWakeSessionGracePeriodTimer;
- (void)_cancelRemoveDataAndWakeSessionGracePeriod;
- (void)_removeDataAndWakeSession;
- (void)_activate;
- (void)_deactivate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NTKRemoteComplication *complication; // @dynamic complication;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

