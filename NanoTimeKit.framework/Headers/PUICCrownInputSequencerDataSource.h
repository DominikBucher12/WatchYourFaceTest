//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class PUICCrownInputSequencer;

@protocol PUICCrownInputSequencerDataSource <NSObject>

@optional
- (void)crownInputSequencer:(PUICCrownInputSequencer *)arg1 previousDetent:(id *)arg2 nextDetent:(id *)arg3 forOffset:(double)arg4;
@end

