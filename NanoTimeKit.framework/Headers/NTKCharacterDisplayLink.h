//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class CADisplayLink, NTKCharacterTimeView;

@interface NTKCharacterDisplayLink : NSObject
{
    NTKCharacterTimeView *_timeView;
    CADisplayLink *_displayLink;
}

// - (void).cxx_destruct;
- (void)invalidate;
- (void)setPaused:(_Bool)arg1;
- (void)setAnimationFrameInterval:(int)arg1;
- (void)drawView:(id)arg1;
- (id)initWithTarget:(id)arg1 loader:(id)arg2;

@end

