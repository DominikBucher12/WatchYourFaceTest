//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "NWMForecastDelegate.h"

@class NSObject, NTKWeatherComplicationScheduledCondition, NWMForecast, NWMUserCity, NWMUserCityList;

@interface NTKWeatherComplicationDataSource : NSObject <NWMForecastDelegate>
{
    _Bool _listening;
    _Bool _debugLastUpdateTimeEnabled;
    id _updater;
    NWMUserCityList *_cityList;
    id _cityListUpdater;
    NWMUserCity *_selectedCity;
    NWMForecast *_forecast;
    id _forecastUpdater;
    NSObject *_workQueue;
    NTKWeatherComplicationScheduledCondition *_needsUpdate;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isDebugLastUpdateTimeEnabled) _Bool debugLastUpdateTimeEnabled; // @synthesize debugLastUpdateTimeEnabled=_debugLastUpdateTimeEnabled;
@property(retain) NTKWeatherComplicationScheduledCondition *needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain) NSObject *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) id forecastUpdater; // @synthesize forecastUpdater=_forecastUpdater;
@property(retain, nonatomic) NWMForecast *forecast; // @synthesize forecast=_forecast;
@property(retain, nonatomic) NWMUserCity *selectedCity; // @synthesize selectedCity=_selectedCity;
@property(retain) id cityListUpdater; // @synthesize cityListUpdater=_cityListUpdater;
@property(retain, nonatomic) NWMUserCityList *cityList; // @synthesize cityList=_cityList;
@property _Bool listening; // @synthesize listening=_listening;
// - (void).cxx_destruct;
- (void)_readDebugLastUpdateTimeEnabledPref;
- (void)_unregisterForDebugLastUpdateTimeEnabledPrefNotitification;
- (void)_registerForDebugLastUpdateTimeEnabledPrefNotitification;
- (id)_entryForFamily:(int)arg1 weatherComplicationType:(int)arg2 weatherData:(id)arg3;
- (id)_temperatureConditionsStringForData:(id)arg1 allowsDisplayOfTemperatureUnit:(_Bool)arg2;
- (id)_conditionsStringForData:(id)arg1;
- (id)_temperatureStringDashesThatAllowsDisplayOfTemperatureUnit:(_Bool)arg1;
- (id)_temperatureStringForData:(id)arg1 allowsDisplayOfTemperatureUnit:(_Bool)arg2;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEntriesForFamily:(int)arg1 afterDate:(id)arg2 limit:(unsigned int)arg3 weatherComplicationType:(int)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getTimelineEntriesForFamily:(int)arg1 beforeDate:(id)arg2 limit:(unsigned int)arg3 weatherComplicationType:(int)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getCurrentTimelineEntryForFamily:(int)arg1 weatherComplicationType:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getDesiredUpdateIntervalWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)forecast:(id)arg1 updatedDailyForecasts:(id)arg2;
- (void)forecast:(id)arg1 updatedHourlyForecasts:(id)arg2;
- (void)forecast:(id)arg1 updatedCurrentConditions:(id)arg2;
- (void)_update;
- (void)tearDownUpdater;
@property(readonly, nonatomic) __weak id updater; // @synthesize updater=_updater;
- (void)resume;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleLocaleChange;
- (void)temperaturePreferenceChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

