//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

@class NTKReminderTimelineModel;

@interface NTKReminderComplicationDataSource : NTKComplicationDataSource
{
    NTKReminderTimelineModel *_timelineModel;
}

+ (_Bool)acceptsComplicationFamily:(int)arg1;
+ (_Bool)acceptsComplicationType:(unsigned int)arg1;
// - (void).cxx_destruct;
- (void)_remindersDidChange;
- (void)_stopObserving;
- (void)_startObserving;
- (id)lockedTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)complicationApplicationIdentifier;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (id)_currentTimelineEntry;
- (unsigned int)timelineAnimationBehavior;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2;

@end

