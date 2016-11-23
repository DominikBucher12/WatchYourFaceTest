//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKit.h>

@class NSArray, NTKPolygonCylinderView;

@interface NTKEditOptionPickerView : UIView
{
    NSArray *_rows;
    unsigned int _visibleRowBufferSize;
    CDUnknownBlockType _optionToViewMapper;
    _Bool _active;
    NTKPolygonCylinderView *_cylinderView;
    unsigned int _numberOfSides;
    UIView *_selectedOptionView;
    unsigned int _numberOfRows;
    unsigned int _selectedRowIndex;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) unsigned int selectedRowIndex; // @synthesize selectedRowIndex=_selectedRowIndex;
@property(readonly, nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) UIView *selectedOptionView; // @synthesize selectedOptionView=_selectedOptionView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned int numberOfSides; // @synthesize numberOfSides=_numberOfSides;
@property(copy, nonatomic) CDUnknownBlockType optionToViewMapper; // @synthesize optionToViewMapper=_optionToViewMapper;
@property(readonly, nonatomic) NTKPolygonCylinderView *cylinderView; // @synthesize cylinderView=_cylinderView;
// - (void).cxx_destruct;
- (void)_enumerateFaceViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_rotateAnimatedToSelectedRowFromRow:(unsigned int)arg1;
- (void)_rotateToSelectedRow;
- (void)_willDisplayFaceView:(id)arg1;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (Class)_cylinderFaceViewClass;
- (void)_tileCylinderForRotationDirection:(int)arg1;
- (id)_selectedFaceView;
- (id)_faceViewAtFaceIndex:(unsigned int)arg1;
- (struct CGRect)_frameForCylinderView;
- (void)applyRubberBandingFraction:(float)arg1;
- (void)applyBreathingScale:(float)arg1;
- (void)layoutSubviews;
- (void)setTransitionFraction:(float)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)setSelectedRowIndex:(unsigned int)arg1 animated:(_Bool)arg2;
- (id)optionAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) id selectedOption;
- (void)decrementSelection;
- (void)incrementSelection;
- (id)description;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;

@end

