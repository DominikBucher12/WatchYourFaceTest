//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFace.h>

@interface NTKVictoryAnalogFace : NTKFace
{
}

+ (int)_customEditModeForUniqueConfiguration;
+ (id)_defaultOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
+ (id)_customEditModes;
+ (id)_initialDefaultComplicationForSlot:(id)arg1;
+ (id)_complicationSlotDescriptors;
- (Class)_optionClassForCustomEditMode:(int)arg1;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)_orderedComplicationSlots;
- (int)_editModeForOldEncodingIndex:(int)arg1;

@end

