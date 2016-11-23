//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKPageScrollViewController.h>

@interface NTKSwitcherViewController : NTKPageScrollViewController
{
    float _zoomLevel;
    _Bool _allowsScrollingWhenZoomedIn;
    _Bool _allowsSelectionWhenZoomedIn;
    _Bool _allowsDeletionWhenZoomedIn;
    _Bool _animatingZoom;
    float _pageWidthWhenZoomedOut;
    float _verticalOffsetFromCenterWhenZoomedOut;
    float _interpageSpacingWhenZoomedIn;
    float _interpageSpacingWhenZoomedOut;
    unsigned int _zoomAnimationCurve;
    double _zoomAnimationDuration;
}

@property(readonly, nonatomic) _Bool animatingZoom; // @synthesize animatingZoom=_animatingZoom;
@property(nonatomic) unsigned int zoomAnimationCurve; // @synthesize zoomAnimationCurve=_zoomAnimationCurve;
@property(nonatomic) double zoomAnimationDuration; // @synthesize zoomAnimationDuration=_zoomAnimationDuration;
@property(nonatomic) float interpageSpacingWhenZoomedOut; // @synthesize interpageSpacingWhenZoomedOut=_interpageSpacingWhenZoomedOut;
@property(nonatomic) float interpageSpacingWhenZoomedIn; // @synthesize interpageSpacingWhenZoomedIn=_interpageSpacingWhenZoomedIn;
@property(nonatomic) float verticalOffsetFromCenterWhenZoomedOut; // @synthesize verticalOffsetFromCenterWhenZoomedOut=_verticalOffsetFromCenterWhenZoomedOut;
@property(nonatomic) float pageWidthWhenZoomedOut; // @synthesize pageWidthWhenZoomedOut=_pageWidthWhenZoomedOut;
@property(nonatomic) _Bool allowsDeletionWhenZoomedIn; // @synthesize allowsDeletionWhenZoomedIn=_allowsDeletionWhenZoomedIn;
@property(nonatomic) _Bool allowsSelectionWhenZoomedIn; // @synthesize allowsSelectionWhenZoomedIn=_allowsSelectionWhenZoomedIn;
@property(nonatomic) _Bool allowsScrollingWhenZoomedIn; // @synthesize allowsScrollingWhenZoomedIn=_allowsScrollingWhenZoomedIn;
- (void)_setAnimatingZoom:(_Bool)arg1;
- (_Bool)_shouldEnableScrolling;
- (void)_applyDefaultConfigurationToPage:(id)arg1;
- (_Bool)_canDeletePageAtIndex:(unsigned int)arg1;
- (_Bool)_canSelectPageAtIndex:(unsigned int)arg1;
- (void)_updateInterpageSpacing;
- (struct CGRect)_frameForCenteredPage;
@property(readonly, nonatomic) float currentPageScale;
@property(readonly, nonatomic) float pageScaleWhenZoomedOut;
- (void)endIncrementalZoom;
- (void)setIncrementalZoomLevel:(float)arg1;
- (void)beginIncrementalZoom;
- (void)zoomInPageAtIndex:(unsigned int)arg1 animated:(_Bool)arg2 withAnimations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)zoomInPageAtIndex:(unsigned int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)zoomOutAnimated:(_Bool)arg1 withAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)zoomOutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool zoomedOut;
- (void)setInterpageSpacing:(float)arg1;
- (void)setDataSource:(id)arg1;
- (id)initWithScrollOrientation:(int)arg1;
- (id)init;

@end

