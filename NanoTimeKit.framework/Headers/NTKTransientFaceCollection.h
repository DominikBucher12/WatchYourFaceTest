//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFaceCollection.h>

@interface NTKTransientFaceCollection : NTKFaceCollection
{
}

+ (id)sharedFallbackCollection;
- (_Bool)hasLoaded;
- (void)_createFallbackContent;
- (id)init;

@end

