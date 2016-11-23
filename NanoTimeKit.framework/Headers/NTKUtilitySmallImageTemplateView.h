//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUtilityCircularComplicationView.h>

@class UIView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView
{
    _Bool _needsLayoutContent;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (void)load;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setNeedsLayoutContent;
- (void)_updateForTemplateChange;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

