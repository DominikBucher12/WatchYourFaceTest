//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@protocol CLKUILabel <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) float _lastLineBaseline;
@property(nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@end

