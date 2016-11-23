//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SpriteKit.h>

@class NSArray, SKAction;

@interface NTKCollectionNode : SKNode
{
    NSArray *_nodes;
    SKAction *_appearAction;
    SKAction *_disappearAction;
    CDUnknownBlockType _animateBlock;
    float _radius;
}

+ (id)labels3_10_90Chrono;
+ (id)labels3Chrono;
+ (id)labels6_10_40Chrono;
+ (id)labels6Chrono;
+ (id)ticks6Chrono;
+ (id)labels30Chrono;
+ (id)ticks30Chrono;
+ (id)labels60Chrono;
+ (id)hoursChrono;
+ (id)ticks60Chrono;
+ (id)ticksColorAnalog;
+ (id)hours12ZeusWithFont:(int)arg1;
+ (id)hours12;
+ (id)hours4;
+ (id)minutesUtilitarian;
+ (id)minutesPills;
+ (id)ticksPills;
+ (id)ticks240;
+ (id)ticks120;
+ (id)ticks60;
+ (id)ticks60Utilitarian;
+ (float)innerRadius;
+ (float)outerRadius;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(copy, nonatomic) CDUnknownBlockType animateBlock; // @synthesize animateBlock=_animateBlock;
@property(retain, nonatomic) SKAction *disappearAction; // @synthesize disappearAction=_disappearAction;
@property(retain, nonatomic) SKAction *appearAction; // @synthesize appearAction=_appearAction;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
// - (void).cxx_destruct;
- (void)createSubNodes;
- (void)scaleNodes:(id)arg1 fraction:(float)arg2;
- (void)fade:(float)arg1 inverted:(_Bool)arg2;
- (void)fadeAndScale:(float)arg1;
- (void)scaleNodes:(float)arg1;
- (void)scaleNodes:(float)arg1 andResetNodesAtIndices:(id)arg2;
- (void)fadeNodes:(float)arg1;
- (void)fadeNodes:(float)arg1 except:(id)arg2;
- (void)updateNodesWithOffset:(unsigned int)arg1 angleMultiplier:(float)arg2 rotate:(_Bool)arg3 round:(_Bool)arg4;
- (void)updateNodesWithOffset:(unsigned int)arg1 angleMultiplier:(float)arg2 scale:(float)arg3 rotate:(_Bool)arg4 round:(_Bool)arg5;
- (void)disappearAnimated;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(float)arg1;
- (void)applyAppearanceFraction:(float)arg1 inverted:(_Bool)arg2;
- (id)initWithName:(id)arg1 nodes:(id)arg2 animateBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
