//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCollectionNode.h>

@interface NTKTickCollectionNode : NTKCollectionNode
{
    unsigned int _ticks;
    float _smallColor;
    float _largeColor;
    float _smallFilterWidth;
    float _largeFilterWidth;
    unsigned int _l1mod;
    unsigned int _l2mod;
    struct CGSize _smallSizeInPoints;
    struct CGSize _largeSizeInPoints;
}

@property(nonatomic) unsigned int l2mod; // @synthesize l2mod=_l2mod;
@property(nonatomic) unsigned int l1mod; // @synthesize l1mod=_l1mod;
@property(nonatomic) float largeFilterWidth; // @synthesize largeFilterWidth=_largeFilterWidth;
@property(nonatomic) float smallFilterWidth; // @synthesize smallFilterWidth=_smallFilterWidth;
@property(nonatomic) struct CGSize largeSizeInPoints; // @synthesize largeSizeInPoints=_largeSizeInPoints;
@property(nonatomic) struct CGSize smallSizeInPoints; // @synthesize smallSizeInPoints=_smallSizeInPoints;
@property(nonatomic) float largeColor; // @synthesize largeColor=_largeColor;
@property(nonatomic) float smallColor; // @synthesize smallColor=_smallColor;
@property(nonatomic) unsigned int ticks; // @synthesize ticks=_ticks;
- (void)colorizeBackground:(id)arg1;
- (void)colorizeWithTickColor:(id)arg1 alternateTickColor:(id)arg2;
- (void)createSubNodes;

@end

