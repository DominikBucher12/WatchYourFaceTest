//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKModuleView.h>

#import "NTKComplicationDisplay.h"

@class NSString;

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay>
{
    _Bool _isXL;
    id <NTKComplicationDisplayObserver> displayObserver;
}

+ (id)_extraLargeStopwatchImageProvider;
+ (id)_modularSmallStopwatchImageProvider;
+ (id)_extraLargeTimerImageProvider;
+ (id)_modularSmallTimerImageProvider;
+ (id)_extraLargeAlarmImageProvider;
+ (id)_modularSmallAlarmImageProvider;
+ (id)largeModuleViewForComplicationType:(unsigned int)arg1;
+ (id)smallModuleViewForComplicationType:(unsigned int)arg1;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
// - (void).cxx_destruct;
- (void)_setTypographicTracking:(float)arg1 andFont:(id)arg2 onAttributedString:(id *)arg3 inRange:(struct _NSRange)arg4;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(float)arg2 baseFont:(id)arg3;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(float)arg2 baseFont:(id)arg3;
- (id)_newImageViewSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newLabelSubview;
@property(nonatomic) _Bool isXL; // @synthesize isXL=_isXL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

