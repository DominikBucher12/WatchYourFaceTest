//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class EKEventStore;

@interface NTKCalendarEntryModelLoadQueue : NSOperationQueue
{
    EKEventStore *_eventStore;
}

// - (void).cxx_destruct;
- (_Bool)_doesListOfEvents:(id)arg1 containEquivalentForEvent:(id)arg2;
- (_Bool)_isListOfEvents:(id)arg1 equivalentToListOfEvents:(id)arg2;
- (_Bool)_shouldExcludeEvent:(id)arg1 allowAllDayEvents:(_Bool)arg2;
- (_Bool)_isEvent:(id)arg1 overlappingEvent:(id)arg2;
- (id)_eventsEndingAfterDate:(id)arg1 fromEvents:(id)arg2;
- (_Bool)_doesEvent:(id)arg1 overlapAnyEventsIn:(id)arg2;
- (_Bool)_isEvent:(id)arg1 equivalentToEvent:(id)arg2;
- (id)_eventsAfterDate:(id)arg1 fromEvents:(id)arg2;
- (id)_selectedCalendars;
- (id)_loadEventsForSelectedCalendars:(id)arg1 inDateRange:(id)arg2 allowAllDay:(_Bool)arg3;
- (id)_loadAllEventsForDay:(id)arg1 selectedCalendars:(id)arg2;
- (id)_loadAllEventsForDayAfterDay:(id)arg1 selectedCalendars:(id)arg2;
- (id)_nextEventsFromUpcomingEvents:(id)arg1 forDate:(id)arg2 nextEvaluationDate:(id *)arg3;
- (id)_synchronouslyLoadEntryModelsForDay:(id)arg1;
- (_Bool)_isLoadInProcessForDate:(id)arg1;
- (void)enqueueLoadsForDatesBetweenStartDate:(id)arg1 endDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enqueueLoadForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1;

@end

