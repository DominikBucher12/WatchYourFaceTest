//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NTKWheelsOfTimeDialGenerator : NSObject
{
}

+ (id)imageForType:(unsigned int)arg1 style:(unsigned int)arg2;
+ (void)createAndSaveAllWOTImages:(id)arg1;
+ (void)saveImage:(id)arg1 toPath:(id)arg2;
+ (id)_create24HourWOTImage:(unsigned int)arg1;
+ (id)_create12HourWOTImage:(unsigned int)arg1;
+ (id)_createMinutesWOTImage:(unsigned int)arg1;
+ (id)_createWOTDialImageForType:(unsigned int)arg1 style:(unsigned int)arg2 digitStrings:(id)arg3 xPositions:(float *)arg4;
+ (void)_drawDialText:(id)arg1 baselinePositions:(float *)arg2 xPositions:(float *)arg3 kernValue:(float)arg4;
+ (float)_dialTextKernValue:(unsigned int)arg1;
+ (id)_tickImageForType:(unsigned int)arg1 style:(unsigned int)arg2;
+ (id)_generateImage:(id)arg1 thinTickImage:(id)arg2;
+ (id)_dialTextFont;

@end

