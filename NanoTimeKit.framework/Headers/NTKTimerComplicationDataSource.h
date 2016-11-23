//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

@class NTSTimerModel;

@interface NTKTimerComplicationDataSource : NTKComplicationDataSource
{
    NTSTimerModel *_timerModel;
}

+ (_Bool)acceptsComplicationType:(unsigned int)arg1;
@property(retain, nonatomic) NTSTimerModel *timerModel; // @synthesize timerModel=_timerModel;
// - (void).cxx_destruct;
- (void)_timerDidChange:(id)arg1;
- (void)_stopObserving;
- (void)_startObserving;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)complicationApplicationIdentifier;
- (void)resume;
- (void)pause;
- (id)_currentTimelineEntry;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2;

@end

