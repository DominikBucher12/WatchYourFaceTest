//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "NTKComplicationTimelineWindow.h"

@class NSString, _TimelineEntryNode, _TimelineSegment;

@interface _TimelineWindow : NSObject <NTKComplicationTimelineWindow>
{
    unsigned int _maxNodes;
    _TimelineEntryNode *_focalNode;
    _TimelineSegment *_leftSegment;
    _TimelineSegment *_rightSegment;
}

@property(readonly, nonatomic) _TimelineSegment *rightSegment; // @synthesize rightSegment=_rightSegment;
@property(readonly, nonatomic) _TimelineSegment *leftSegment; // @synthesize leftSegment=_leftSegment;
@property(readonly, nonatomic) _TimelineEntryNode *focalNode; // @synthesize focalNode=_focalNode;
// - (void).cxx_destruct;
- (unsigned int)rightEntryCount;
- (unsigned int)leftEntryCount;
- (id)rightmostContiguousEntryDate;
- (id)leftmostContiguousEntryDate;
- (id)rightmostNode;
- (id)leftmostNode;
- (_Bool)containsNode:(id)arg1;
- (void)rebalance;
- (void)updateFocalNodeWithDate:(id)arg1;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
