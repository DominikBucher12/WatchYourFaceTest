//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface _RemoteOperation : NSObject
{
    _Bool _discretionary;
    NSString *_clientIdentifier;
    NSString *_appBundleIdentifier;
    int _meteringType;
}

@property(nonatomic) int meteringType; // @synthesize meteringType=_meteringType;
@property(nonatomic) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(readonly, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
- (_Bool)prolongsWakeSession;
- (_Bool)requiresActiveComplications;
- (_Bool)cancelAndReset;
- (void)activateWithClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)wantsToPokeClient;
- (void)prepareToActivate;
- (_Bool)canCoalesceWithOperation:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;

@end

