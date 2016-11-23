//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCircularComplicationView.h>

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView
{
    NTKColoringLabel *_firstLineLabel;
    NTKColoringLabel *_secondLineLabel;
}

+ (_Bool)supportsComplicationFamily:(int)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
// - (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
