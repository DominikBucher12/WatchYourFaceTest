//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKLocationManager.h>

@interface NTKSimpleLocationManager : NTKLocationManager
{
    unsigned int _nextToken;
}

- (void)placemarkForCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (id)nameOfCurrentLocation;
- (void)stopLocationUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;

@end

