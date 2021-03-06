//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKModularTemplateView.h>

@class NTKColoringLabel, UIView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_headerLeadingLabel;
    NTKColoringLabel *_headerTrailingLabel;
    _Bool _shouldTruncateHeaderLeadingLabelFirst;
    NTKColoringLabel *_body1Label;
    NTKColoringLabel *_body2Label;
    UIView<NTKComplicationImageView> *_headerGlyph;
    UIView<NTKComplicationImageView> *_body1Glyph;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
// - (void).cxx_destruct;
- (void)_updateLabelsMaxWidths;
- (void)_updateForTallBodyTemplate:(id)arg1;
- (void)_updateForStandardBodyTemplate:(id)arg1;
- (void)_update;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newLabelSubview;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

