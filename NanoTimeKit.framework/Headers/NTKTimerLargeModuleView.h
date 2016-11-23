//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationModuleView.h>

#import "NTKTimerComplicationDisplay.h"

@class NSString, NTKColoringLabel;

@interface NTKTimerLargeModuleView : NTKComplicationModuleView <NTKTimerComplicationDisplay>
{
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_countdownLabel;
}

// - (void).cxx_destruct;
- (void)_setLayoutWithTitleText:(id)arg1 countdownText:(id)arg2;
- (void)_setLayoutForNormalTime:(double)arg1;
- (void)setStoppedWithTime:(double)arg1;
- (void)setTime:(double)arg1;
- (void)_layoutContentView;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

