//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCharacterRenderer.h>

@class NSMutableArray, _Flower, _Skirt;

@interface NTKCharacterRendererMinnie : NTKCharacterRenderer
{
    _Flower *_flower;
    _Skirt *_skirt;
    NSMutableArray *_footTexs[2];
}

// - (void).cxx_destruct;
- (void)_drawBody;
- (void)_drawTappingFoot;
- (void)_drawHead;
- (void)_drawSkirt;
- (void)_drawFlower;
- (void)setupBodyState;
- (void)setupVAOs;
- (void)loadFootTextures;
- (id)initWithLoader:(id)arg1;

@end

