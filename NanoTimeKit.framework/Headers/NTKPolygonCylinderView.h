//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

@class _NTKPolygonCylinderTransformView;

@interface NTKPolygonCylinderView : UIView
{
    _NTKPolygonCylinderTransformView *_transformView;
    float _rotationAngle;
}

// - (void).cxx_destruct;
- (void)_updateTransform;
- (void)_informFaceViewsOfRotation;
- (void)_setRotationAngle:(float)arg1;
- (float)_rotationAngleForFaceIndex:(int)arg1;
- (void)layoutSubviews;
- (void)rotateToFraction:(float)arg1 fromFaceAtIndex:(int)arg2 toFaceAtIndex:(int)arg3;
- (void)rotateToFaceAtIndex:(int)arg1;
- (void)enumerateFaceViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)viewForFaceAtIndex:(unsigned int)arg1;
- (void)setView:(id)arg1 forFaceAtIndex:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int numberOfFaces;
- (id)initWithNumberOfFaces:(unsigned int)arg1;

@end

