//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "NTKComplicationTimelineDelegate.h"
#import "NTKUtilityComplicationFactoryDelegate.h"
#import "NTKWellnessTimelineModelSubscriber.h"

@class NSDate, NSString, NTKActivityFaceTimeline, NTKUtilityComplicationFactory, NTKWellnessEntryModel;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber, NTKComplicationTimelineDelegate>
{
    _Bool _wantsUpdateNowEntryModelNextLive;
    _Bool _timeTravellingOutsideBounds;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    _Bool _hasBeenLiveOrOnDeck;
    _Bool _isHistoricalDataLoaded;
    _Bool _isLoadingData;
    _Bool _showsCanonicalContent;
    _Bool _showsLockedContent;
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKActivityFaceTimeline *_timeline;
    NSDate *_timeTravelDate;
    id <NTKActivityFaceViewFactoryDelegate> _delegate;
    int _dataMode;
}

+ (_Bool)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarm;
+ (void)_purgeGLContexts;
@property(nonatomic) int dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) __weak id <NTKActivityFaceViewFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsLockedContent; // @synthesize showsLockedContent=_showsLockedContent;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool isHistoricalDataLoaded; // @synthesize isHistoricalDataLoaded=_isHistoricalDataLoaded;
@property(nonatomic) _Bool hasBeenLiveOrOnDeck; // @synthesize hasBeenLiveOrOnDeck=_hasBeenLiveOrOnDeck;
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) NTKActivityFaceTimeline *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) NTKUtilityComplicationFactory *complicationFactory; // @synthesize complicationFactory=_complicationFactory;
// - (void).cxx_destruct;
- (id)_complicationSlots;
- (id)_colorComplicationSlots;
- (id)_utilityComplicationSlots;
- (int)_utilitySlotForSlot:(id)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)launchActivityApp;
- (float)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (unsigned int)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (int)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned int)arg2 slot:(id)arg3;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(int)arg3 slot:(id)arg4;
- (float)_lisaGapForState:(int)arg1;
- (float)_edgeGapForState:(int)arg1;
- (float)_keylinePaddingForState:(int)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)_dateComplicationFontForStyle:(unsigned int)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned int)arg1;
- (void)_resetWristRaiseAnimationTimeout;
- (_Bool)shouldPerformFromZeroWristRaise;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)dealloc;
- (void)_handleActiveEnergyUnitChange;
- (id)_canonicalEntryModel;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) NTKWellnessEntryModel *currentEntryModel;
- (void)_updateRingsForCurrentEntryModelAnimated:(_Bool)arg1;
- (void)_updateRingsForCurrentEntryModel;
- (void)_updateTimeTravelBoundaries;
- (void)endScrubbing;
- (void)startScrubbing;
- (void)_updateDimStateForCurrentTimeline;
- (void)scrubToDate:(id)arg1;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_loadCurrentEntry;
- (void)_extendRightWithEntryModel:(id)arg1;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (void)wellnessTimelineModelHistorcalDataLoaded:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

