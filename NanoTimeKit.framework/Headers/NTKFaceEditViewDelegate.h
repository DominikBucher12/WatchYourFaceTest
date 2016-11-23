//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString, NTKFaceEditView;

@protocol NTKFaceEditViewDelegate <NSObject>
- (void)editView:(NTKFaceEditView *)arg1 didTapKeylineForKey:(NSString *)arg2 editMode:(int)arg3;
- (void)editView:(NTKFaceEditView *)arg1 keylineDidRubberBand:(float)arg2 forKey:(NSString *)arg3 editMode:(int)arg4;
- (void)editView:(NTKFaceEditView *)arg1 keylineDidBreathe:(float)arg2 forKey:(NSString *)arg3 editMode:(int)arg4;
- (void)editView:(NTKFaceEditView *)arg1 didScrollToFraction:(float)arg2 fromEditMode:(int)arg3 toEditMode:(int)arg4;
- (void)editView:(NTKFaceEditView *)arg1 didStopAtEditMode:(int)arg2;
- (void)editViewWillBeginScrolling:(NTKFaceEditView *)arg1;
@end

