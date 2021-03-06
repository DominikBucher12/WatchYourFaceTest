//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

@class PUICAutoreversingClientSideAnimation, UIView, _KeylineLabel;

@interface _KeylineContainerView : UIView
{
    PUICAutoreversingClientSideAnimation *_breathingAnimation;
    UIView<NTKKeylineView> *_keylineView;
    _KeylineLabel *_label;
    unsigned int _labelAlignment;
    struct CGRect _selectedFrame;
    struct CGRect _deselectedFrame;
}

@property(nonatomic) unsigned int labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(retain, nonatomic) _KeylineLabel *label; // @synthesize label=_label;
@property(nonatomic) struct CGRect deselectedFrame; // @synthesize deselectedFrame=_deselectedFrame;
@property(nonatomic) struct CGRect selectedFrame; // @synthesize selectedFrame=_selectedFrame;
@property(retain, nonatomic) UIView<NTKKeylineView> *keylineView; // @synthesize keylineView=_keylineView;
// - (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)stopBreathingWithUrgency:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startBreathingWithApplier:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

