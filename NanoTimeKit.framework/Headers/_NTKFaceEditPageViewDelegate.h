//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString, _NTKFaceEditPageView;

@protocol _NTKFaceEditPageViewDelegate <NSObject>
- (void)pageView:(_NTKFaceEditPageView *)arg1 didTapKeylineForKey:(NSString *)arg2;
- (void)pageView:(_NTKFaceEditPageView *)arg1 keylineDidRubberBand:(float)arg2 forKey:(NSString *)arg3;
- (void)pageView:(_NTKFaceEditPageView *)arg1 keylineDidBreathe:(float)arg2 forKey:(NSString *)arg3;
@end
