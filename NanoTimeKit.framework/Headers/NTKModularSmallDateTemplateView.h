//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKModularTemplateView.h>

@class NTKColoringLabel;

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

+ (_Bool)supportsComplicationFamily:(int)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
// - (void).cxx_destruct;
- (void)_update;
- (void)_layoutContentView;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)setIsXL:(_Bool)arg1;
- (void)_configureContentSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

