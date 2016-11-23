//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityImageAndLabelsComplicationView.h>

#import "NTKWorldClockComplicationDisplay.h"

@class NSString, NTKDigitalTimeLabel, NTKTimeOfDayLabel;

@interface NTKShortWorldClockUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKWorldClockComplicationDisplay>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKTimeOfDayLabel *_timeTravelLabel;
    _Bool _timeTravel;
}

+ (id)_preferredAdditionalFontSettings;
// - (void).cxx_destruct;
- (void)endTimeTravelAnimated:(_Bool)arg1;
- (void)startTimeTravelAnimated:(_Bool)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)_applyForegroundAlpha;
- (void)_updateContentForEditingChange;
- (float)_widthThatFits;
- (void)setForegroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (float)fontSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
