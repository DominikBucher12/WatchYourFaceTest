//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NTKWellnessEntryModel;

@protocol NTKWellnessTimelineModelSubscriber <NSObject>

@optional
- (void)wellnessTimeLineModelHistoricalDataWasUpdated;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(NTKWellnessEntryModel *)arg1;
- (void)wellnessTimelineModelHistorcalDataLoaded:(_Bool)arg1;
@end

