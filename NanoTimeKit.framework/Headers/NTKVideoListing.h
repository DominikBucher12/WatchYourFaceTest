//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>
#import "NTKAVListing.h"

@class NSString, NTKVideo, UIColor, UIImage;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing>
{
    NTKVideo *_video;
    UIImage *_image;
    NSString *_name;
    NSString *_videoName;
    _Bool _loops;
    NSString *_transitionImageName;
    UIColor *_overlayColor;
    unsigned int _theme;
    int _variant;
    int _clip;
    unsigned int _tags;
}

@property(readonly, nonatomic) int clip; // @synthesize clip=_clip;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned int theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
// - (void).cxx_destruct;
- (void)discardAssets;
- (_Bool)hasTag:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)snapshotDiffers:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NTKVideo *video;
- (void)_setHasAssets;
- (id)initWithName:(id)arg1 videoName:(id)arg2 loops:(_Bool)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(unsigned int)arg6 variant:(int)arg7 clip:(int)arg8 tags:(unsigned int)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

