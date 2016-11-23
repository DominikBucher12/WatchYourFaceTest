//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>
#import "NTKVictoryAnalogBackgroundViewDelegate.h"

@class CALayer, CAMediaTimingFunction, NSArray, NSDictionary, NSMutableDictionary, NTKVictoryAnalogFakeComplicationButton, UIImage;

@interface NTKVictoryAnalogBackgroundView : UIView
{
    UIImage *_dotImage;
    NSMutableDictionary *_regularNumberImages;
    NSMutableDictionary *_largeNumberImages;
    NSArray *_ringLayers;
    _Bool _ringLayerIsDigit[12];
    NSArray *_bigNumberLayers;
    NSArray *_activeDigitIndices;
    _Bool _canonicalDigitStatesByStyle[3][12];
    NSDictionary *_transitionDigitTargetStates;
    NSArray *_transitionDigitIndices;
    NSArray *_transitionStaticDigitIndices;
    unsigned int _transitionFromStyle;
    unsigned int _transitionToStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryAnalogFakeComplicationButton *_logoButton;
    CALayer *_logoLayer;
    struct CGPoint _logoPositionRing;
    struct CGPoint _logoPositionNoDigits;
    struct CGPoint _logoPositionBig;
    unsigned int _style;
    unsigned int _color;
    id <NTKVictoryAnalogBackgroundViewDelegate> _delegate;
}

+ (id)_disabledLayerActions;
@property(nonatomic) __weak id <NTKVictoryAnalogBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int color; // @synthesize color=_color;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (id)_largeNumberImageForNumber:(unsigned int)arg1;
- (id)_regularNumberImageForNumber:(unsigned int)arg1;
- (id)_dotImage;
- (id)_logoImage;
- (id)_bigNumberInitialTransforms;
- (id)_createAndAddLayersWithCount:(unsigned int)arg1;
- (void)_createBigNumberLayersIfNeeded;
- (void)_createRingLayersIfNeeded;
- (void)_setRingLayerAtIndex:(unsigned int)arg1 isDigit:(_Bool)arg2;
- (void)willBeginEditing;
- (float)_elementScaleForTransitionProgress:(float)arg1 initialScale:(float)arg2 middleScale:(float)arg3 finalScale:(float)arg4;
- (float)_transitionProgressForDigitAtIndex:(unsigned int)arg1 overallProgress:(float)arg2 delayPerDigit:(float)arg3 digitTransitionLength:(float)arg4;
- (struct CGColor *)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(float)arg3;
- (void)applyTransitionFraction:(float)arg1 fromColor:(unsigned int)arg2 toColor:(unsigned int)arg3;
- (void)_applyColorForStyle:(unsigned int)arg1;
- (void)_clearTransitionStateForStyle:(unsigned int)arg1;
- (struct CATransform3D)_intermediateTransformForBigNumberAtIndex:(unsigned int)arg1 fraction:(float)arg2;
- (float)_dotAlphaForColor:(unsigned int)arg1 style:(unsigned int)arg2;
- (void)applyTransitionFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)setInTimeTravel:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_ringDigitOffsetAtIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)_logoTapped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

