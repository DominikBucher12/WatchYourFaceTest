//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/_RemoteOperation.h>

@interface _GetNextWakeDateOperation : _RemoteOperation
{
    CDUnknownBlockType _wakeDateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wakeDateHandler; // @synthesize wakeDateHandler=_wakeDateHandler;
// - (void).cxx_destruct;
- (_Bool)prolongsWakeSession;
- (_Bool)requiresActiveComplications;
- (void)activateWithClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canCoalesceWithOperation:(id)arg1;

@end

