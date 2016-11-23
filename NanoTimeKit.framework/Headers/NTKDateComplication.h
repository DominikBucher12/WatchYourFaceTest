//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplication.h>

@interface NTKDateComplication : NTKComplication
{
    unsigned int _dateStyle;
}

+ (_Bool)supportsSecureCoding;
+ (id)complicationWithDateStyle:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int dateStyle; // @synthesize dateStyle=_dateStyle;
- (id)_initWithComplicationType:(unsigned int)arg1 JSONDictionary:(id)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)_migrateFromSkiHillWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (_Bool)appearsInDailySnapshotForFamily:(int)arg1;

@end
