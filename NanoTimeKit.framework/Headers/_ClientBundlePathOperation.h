//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/_RemoteOperation.h>

@interface _ClientBundlePathOperation : _RemoteOperation
{
    CDUnknownBlockType _bundlePathHandler;
}

@property(copy, nonatomic) CDUnknownBlockType bundlePathHandler; // @synthesize bundlePathHandler=_bundlePathHandler;
// - (void).cxx_destruct;
- (void)activateWithClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canCoalesceWithOperation:(id)arg1;

@end

