//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class NTKComplication;

@interface _NTKFamilyComplicationPair : NSObject <NSCopying>
{
    int _family;
    NTKComplication *_complication;
}

+ (id)pairWithFamily:(int)arg1 complication:(id)arg2;
@property(readonly) int family; // @synthesize family=_family;
@property(readonly) NTKComplication *complication; // @synthesize complication=_complication;
// - (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;

@end

