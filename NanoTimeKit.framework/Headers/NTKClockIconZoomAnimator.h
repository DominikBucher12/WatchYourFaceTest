//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NTKClockIconView;

@protocol NTKClockIconZoomAnimator <NSObject>
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)prepareToZoomWithIconView:(NTKClockIconView *)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
@end

