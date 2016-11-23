//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

#import "NTKTimelineEntryModelCacheDataSource.h"

@class CLLocation, NSNumber, NSString, NTKTimelineEntryModelCache;

@interface NTKSunriseComplicationDataSource : NTKComplicationDataSource <NTKTimelineEntryModelCacheDataSource>
{
    NTKTimelineEntryModelCache *_entryModelCache;
    struct NSNumber *_token;
    CLLocation *_location;
    NSString *_locationName;
}

+ (_Bool)acceptsComplicationFamily:(int)arg1;
+ (_Bool)acceptsComplicationType:(unsigned int)arg1;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSNumber *token; // @synthesize token=_token;
// - (void).cxx_destruct;
- (void)_invalidate;
- (void)_stopObserving;
- (void)_startObserving;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(_Bool)arg2 constantSun:(int)arg3 haveLocation:(_Bool)arg4;
- (id)_animationGroupForNoLocation;
- (id)_animationGroupForDate:(id)arg1 showingSunrise:(_Bool)arg2 constantSun:(int)arg3;
- (_Bool)_needCurrentEventEntry;
- (id)_entryModelsForDate:(id)arg1 nextEvaluationDate:(id *)arg2;
- (id)loadEntryModelsForDay:(id)arg1;
- (id)_timelineEntryFromModel:(id)arg1;
- (unsigned int)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (id)_currentEntry:(_Bool)arg1;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
