//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKAnalogScene.h>

@class NTKCollectionNode, UIColor;

@interface NTKColorAnalogScene : NTKAnalogScene
{
    NTKCollectionNode *_ticks;
    NTKCollectionNode *_timeScrubbingReplacementTicks;
    UIColor *_monogramColor;
}

// - (void).cxx_destruct;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(float)arg1 diameter:(float)arg2;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)hideTicks;
- (void)showTicks;
- (void)setTickAlphaFromFraction:(float)arg1;
- (void)applyTransitionFraction:(float)arg1 fromTickColor:(id)arg2 toTickColor:(id)arg3;
- (void)applyColor:(id)arg1;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)scrubbingObscuredCollectionNodes;
- (id)initWithSize:(struct CGSize)arg1;

@end

