//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKEnumeratedEditOption.h>

@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(unsigned int)arg1;
+ (id)_snapshotKeyForValue:(unsigned int)arg1;
+ (id)_orderedValues;
+ (int)indexForAccuracy:(unsigned int)arg1;
+ (id)optionWithAccuracy:(unsigned int)arg1;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned int accuracy;

@end

