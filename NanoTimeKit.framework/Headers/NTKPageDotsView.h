//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

@class NSMutableArray, UIColor;

@interface NTKPageDotsView : UIView
{
    unsigned int _numberOfPages;
    unsigned int _currentPage;
    UIColor *_currentPageColor;
    UIColor *_otherPageColor;
    float _dotDiameter;
    float _dotPadding;
    NSMutableArray *_pageDots;
}

@property(retain, nonatomic) NSMutableArray *pageDots; // @synthesize pageDots=_pageDots;
@property(nonatomic) float dotPadding; // @synthesize dotPadding=_dotPadding;
@property(nonatomic) float dotDiameter; // @synthesize dotDiameter=_dotDiameter;
@property(retain, nonatomic) UIColor *otherPageColor; // @synthesize otherPageColor=_otherPageColor;
@property(retain, nonatomic) UIColor *currentPageColor; // @synthesize currentPageColor=_currentPageColor;
@property(nonatomic) unsigned int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
// - (void).cxx_destruct;
- (void)_regenerateDots;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyDefaultConfiguration;
- (id)makePageDot;
- (id)initWithFrame:(struct CGRect)arg1;

@end

