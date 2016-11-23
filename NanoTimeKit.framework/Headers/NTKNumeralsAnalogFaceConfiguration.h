//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NTKNumeralsAnalogFaceConfiguration : NSObject
{
    _Bool _areAllComplicationsOff;
    unsigned int _faceColor;
    unsigned int _colorSchemeUnits;
    unsigned int _selectedStyle;
    int _utilitySlot;
}

@property(readonly, nonatomic) int utilitySlot; // @synthesize utilitySlot=_utilitySlot;
@property(readonly, nonatomic) _Bool areAllComplicationsOff; // @synthesize areAllComplicationsOff=_areAllComplicationsOff;
@property(readonly, nonatomic) unsigned int selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(readonly, nonatomic) unsigned int colorSchemeUnits; // @synthesize colorSchemeUnits=_colorSchemeUnits;
@property(readonly, nonatomic) unsigned int faceColor; // @synthesize faceColor=_faceColor;
- (id)initWithFaceColor:(unsigned int)arg1 colorSchemeUnits:(unsigned int)arg2 areAllComplicationsOff:(_Bool)arg3 utilitySlot:(int)arg4 selectedStyle:(unsigned int)arg5;

@end
