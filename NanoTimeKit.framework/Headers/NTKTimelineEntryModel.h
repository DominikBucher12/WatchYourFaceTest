//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSDate;

@interface NTKTimelineEntryModel : NSObject
{
    NSDate *_entryDate;
}

@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
// - (void).cxx_destruct;
- (id)entryForComplicationFamily:(int)arg1;
- (id)templateForComplicationFamily:(int)arg1;

@end

