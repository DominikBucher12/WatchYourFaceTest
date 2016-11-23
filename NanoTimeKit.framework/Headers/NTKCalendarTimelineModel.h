//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "PSYSyncStateObserverDelegate.h"

@class EKEventStore, NSString, NTKCalendarEntryModelCache, NTKCalendarEntryModelLoadQueue, PSYSyncStateObserver;

@interface NTKCalendarTimelineModel : NSObject <PSYSyncStateObserverDelegate>
{
    _Bool _syncComplete;
    EKEventStore *_eventStore;
    NTKCalendarEntryModelCache *_entryModelCache;
    NTKCalendarEntryModelLoadQueue *_loadQueue;
    PSYSyncStateObserver *_syncStateObserver;
}

+ (_Bool)_syncObserverHasCompletedCalendar:(id)arg1;
+ (_Bool)_shouldSkipWaitForInitialSync;
+ (id)sharedModel;
@property(nonatomic) _Bool syncComplete; // @synthesize syncComplete=_syncComplete;
@property(retain, nonatomic) PSYSyncStateObserver *syncStateObserver; // @synthesize syncStateObserver=_syncStateObserver;
@property(retain, nonatomic) NTKCalendarEntryModelLoadQueue *loadQueue; // @synthesize loadQueue=_loadQueue;
@property(retain, nonatomic) NTKCalendarEntryModelCache *entryModelCache; // @synthesize entryModelCache=_entryModelCache;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
// - (void).cxx_destruct;
- (void)syncStateObserverDidChangeSyncState:(id)arg1;
- (void)_openEventStoreIfAvailable;
- (_Bool)_isEventStoreReadyToOpen;
- (void)_invalidateDataSources;
- (void)_reloadCacheAndInvalidateOnComplete;
- (void)_closeEventStoreAndStopObservingChanges;
- (void)_openEventStoreAndObserveChanges;
- (void)_invalidateDataSources:(id)arg1;
- (void)_selectedCalendarsChanged:(id)arg1;
- (void)_timeZoneChanged:(id)arg1;
- (void)_eventStoreChangedNotification:(id)arg1;
- (void)_stopObserving;
- (void)_startObserving;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_enqueueEntryLoadForDate:(id)arg1;
- (void)getEntriesBeforeDate:(id)arg1 limit:(unsigned int)arg2 family:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (void)getEntriesAfterDate:(id)arg1 limit:(unsigned int)arg2 family:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (id)entryOrLoadingEntryForDate:(id)arg1 family:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
