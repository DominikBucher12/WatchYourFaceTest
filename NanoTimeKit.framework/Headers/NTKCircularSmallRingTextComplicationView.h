//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCircularSmallRingComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView
{
    NTKColoringLabel *_label;
}

+ (_Bool)supportsComplicationFamily:(int)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
// - (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)updateLabelWithString:(id)arg1;
- (void)layoutSubviews;
- (_Bool)_wantsPlatter;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

