//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>
#import "NTKColoringView.h"
#import "NTKTimeView.h"

@class NSString, NTKDigitalTimeLabelStyle, UIColor;

@interface CLKUITimeLabelStyle : NSObject <NSCopying> {
    CLKFont * _designatorFont;
    CLKFont * _fourDigitFont;
    CLKFont * _threeDigitFont;
}

@property (nonatomic, retain) CLKFont *designatorFont;
@property (nonatomic, retain) CLKFont *fourDigitFont;
@property (nonatomic, retain) CLKFont *threeDigitFont;

//- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)designatorFont;
- (id)fourDigitFont;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDesignatorFont:(id)arg1;
- (void)setFourDigitFont:(id)arg1;
- (void)setThreeDigitFont:(id)arg1;
- (id)threeDigitFont;

@end

@protocol CLKTimeFormatterDelegate, _CLKUITimeLabelManager;

@interface CLKUITimeLabel : UIView <CLKTimeFormatterDelegate, CLKTimeFormatterObserver, CLKUILabel> {
    id /* block */  _didResizeHandler;
    float  _fadeEnd;
    float  _fadeStart;
    id <_CLKUITimeLabelManager> * _fromLabelManager;
    CLKUITimeLabelStyle * _fromStyle;
    id <_CLKUITimeLabelManager> * _labelManager;
    float  _maxWidth;
    unsigned int  _options;
    BOOL  _paused;
    BOOL  _showSeconds;
    BOOL  _showsDesignator;
    CLKUITimeLabelStyle * _style;
//    struct CGRect {
//        struct CGPoint {
//            float x;
//            float y;
//        } origin;
//        struct CGSize {
//            float width;
//            float height;
//        } size;
//    }  _styleTransitionEndFrame;
    float  _styleTransitionFraction;
    BOOL  _styleTransitioning;
    CLKTimeFormatter * _timeFormatter;
    NSString * _timeText;
}

@property (nonatomic, readonly) float _lastLineBaseline;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didResizeHandler;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned int hash;
@property (nonatomic) float maxWidth;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL showSeconds;
@property (nonatomic) BOOL showsDesignator;
@property (nonatomic, copy) CLKUITimeLabelStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) CLKTimeFormatter *timeFormatter;

+ (id)labelWithOptions:(unsigned int)arg1;

//- (void).cxx_destruct;
- (void)_cancelAnimation;
- (void)_enumerateUnderlyingLabelsWithBlock:(id /* block */)arg1;
- (void)_fadeTransitionLabels;
- (float)_lastLineBaseline;
- (id)_newLabelManager;
- (id)_newUnderlyingLabel:(BOOL)arg1;
- (void)_resizeIfNecessary;
- (void)_scaleTransitionLabels;
- (id)attributedText;
- (void)cleanupAfterStyleTransition;
- (void)didMoveToWindow;
- (id /* block */)didResizeHandler;
- (id)font;
- (id)identifyingInfoForTimeFormatter:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTimeLabelOptions:(unsigned int)arg1;
//- (struct CGSize { float x1; float x2; })intrinsicSize;
- (void)layoutSubviews;
- (float)maxWidth;
//- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })opticalInsets;
- (unsigned int)options;
- (BOOL)paused;
- (void)prepareToTransitionToStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBlinkingPaused:(BOOL)arg1;
- (void)setDidResizeHandler:(id /* block */)arg1;
- (void)setFont:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setPaused:(BOOL)arg1;
- (void)setShowSeconds:(BOOL)arg1;
- (void)setShowsDesignator:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleTransitionFraction:(float)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3;
- (void)setTimeFont:(id)arg1 designatorFont:(id)arg2;
- (void)setTimeOffset:(double)arg1;
- (BOOL)showSeconds;
- (BOOL)showsDesignator;
- (void)sizeToFit;
- (id)style;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)timeFormatter;
- (void)timeFormatterTextDidChange:(id)arg1;

@end

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView>
{
    _Bool _usesLegibility;
    _Bool _frozen;
    UIColor *_color;
    UIColor *_overrideColor;
}

@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
// - (void).cxx_destruct;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
@property(readonly, nonatomic) UIColor *contentColor;
- (void)setShadowColor:(id)arg1;
- (id)_newUnderlyingLabel:(_Bool)arg1;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setFrameUsingCurrentStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NTKDigitalTimeLabelStyle *style; // @dynamic style;
@property(readonly) Class superclass;

@end

