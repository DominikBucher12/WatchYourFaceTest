//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class _NTKComplicationStateLayout;

@interface NTKComplicationLayout : NSObject
{
    _NTKComplicationStateLayout *_stateLayouts[4];
}

+ (id)layoutWithDefaultRule:(id)arg1;
- (id)_layoutForState:(int)arg1;
- (id)defaultLayoutRuleForState:(int)arg1;
- (id)layoutRuleForComplicationState:(int)arg1 layoutOverride:(int)arg2;
- (void)setOverrideLayoutRule:(id)arg1 forState:(int)arg2 layoutOverride:(int)arg3;
- (void)setDefaultLayoutRule:(id)arg1 forState:(int)arg2;
- (void)dealloc;

@end

