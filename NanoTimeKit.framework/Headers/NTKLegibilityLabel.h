//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

#import "NTKLegibilityView.h"

@class NSString, UIColor;

@interface NTKLegibilityLabel : UILabel <NTKLegibilityView>
{
    float _sBlur;
    UIColor *_sColor;
    _Bool _legibilityEnabled;
}

@property(nonatomic) _Bool legibilityEnabled; // @synthesize legibilityEnabled=_legibilityEnabled;
// - (void).cxx_destruct;
- (struct UIEdgeInsets)_contentInsetsFromFonts;
- (void)_updateShadow;
@property(retain, nonatomic) UIColor *shadowColor; // @dynamic shadowColor;
@property(nonatomic) float shadowBlur; // @dynamic shadowBlur;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

