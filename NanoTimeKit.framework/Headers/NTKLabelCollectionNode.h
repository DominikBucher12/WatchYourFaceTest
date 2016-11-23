//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCollectionNode.h>

@interface NTKLabelCollectionNode : NTKCollectionNode
{
    _Bool _paddedWithZeros;
    int _faceStyle;
    unsigned int _labels;
    unsigned int _start;
    unsigned int _multiple;
    unsigned int _repeat;
    int _font;
    float _fontSize;
    float _color;
    struct LabelPosition *_positions;
}

+ (void)applyLabelPositions:(struct LabelPosition *)arg1 withCenter:(struct CGPoint)arg2 toNodes:(id)arg3;
+ (void)applyLabelPositions:(struct LabelPosition *)arg1 toNodes:(id)arg2;
+ (void)applyLabelPosition:(struct LabelPosition *)arg1 withCenter:(struct CGPoint)arg2 toNode:(id)arg3;
+ (void)applyLabelPosition:(struct LabelPosition *)arg1 toNode:(id)arg2;
@property(nonatomic) struct LabelPosition *positions; // @synthesize positions=_positions;
@property(nonatomic) float color; // @synthesize color=_color;
@property(nonatomic) _Bool paddedWithZeros; // @synthesize paddedWithZeros=_paddedWithZeros;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) int font; // @synthesize font=_font;
@property(nonatomic) unsigned int repeat; // @synthesize repeat=_repeat;
@property(nonatomic) unsigned int multiple; // @synthesize multiple=_multiple;
@property(nonatomic) unsigned int start; // @synthesize start=_start;
@property(nonatomic) unsigned int labels; // @synthesize labels=_labels;
@property(nonatomic) int faceStyle; // @synthesize faceStyle=_faceStyle;
- (void)colorize:(id)arg1;
- (void)createSubNodes;
- (void)updateLabelNodePositions;
- (void)applyAppearanceFraction:(float)arg1 inverted:(_Bool)arg2;
- (id)init;

@end

