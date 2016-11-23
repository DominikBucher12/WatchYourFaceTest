//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityComplicationView.h>

@class NTKColoringLabel, UIView;

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_firstLabel;
    NTKColoringLabel *_secondLabel;
}

@property(retain, nonatomic) NTKColoringLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) NTKColoringLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateWithImageProvider:(id)arg1;
- (void)_setSecondLabelText:(id)arg1;
- (void)_setLabelAttributedText:(id)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_setLabelTextProvider:(id)arg1;
- (_Bool)_isViewVisible:(id)arg1;
- (float)_gapBetweenView:(id)arg1 nextView:(id)arg2;
- (void)_layoutSubviewsHorizontally:(id)arg1;
- (float)_widthThatFits;
- (void)_updateFirstLabelMaxSize;
- (_Bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

