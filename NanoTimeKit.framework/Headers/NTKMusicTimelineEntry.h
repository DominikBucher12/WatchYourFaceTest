//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineEntryModel.h>

@class NSDate, NSNumber, NSString;

@interface NTKMusicTimelineEntry : NTKTimelineEntryModel
{
    _Bool _isPlayable;
    _Bool _isNewUser;
    _Bool _isLibraryEmpty;
    _Bool _isLive;
    unsigned int _state;
    NSNumber *_persistentID;
    NSString *_contentItemID;
    NSString *_title;
    NSString *_album;
    NSString *_artist;
    double _duration;
    double _elapsedTime;
}

@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) _Bool isLibraryEmpty; // @synthesize isLibraryEmpty=_isLibraryEmpty;
@property(readonly, nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(readonly, nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSString *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(readonly, nonatomic) NSNumber *persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)_relativeDateTextProvider;
- (id)_nowPlayingProviderForFamily:(int)arg1;
- (id)extraLarge;
- (id)circularMedium:(_Bool)arg1;
- (id)largeUtility;
- (id)smallUtility;
- (id)smallModular;
- (id)_progressProviderForRingComplications;
- (id)_italicTextProviderForText:(id)arg1;
- (id)largeModular;
- (id)templateForComplicationFamily:(int)arg1;
- (id)description;
- (_Bool)isSameTrackAs:(id)arg1;
@property(readonly, nonatomic) NSDate *projectedEndDate;
@property(readonly, nonatomic) NSDate *projectedStartDate;
- (id)initAsPastEntryWith:(id)arg1;
- (id)initAsFutureEntryWith:(id)arg1;
- (id)initAsProactiveCurrentEntryWith:(id)arg1;
- (id)initAsCurrentEntryWith:(id)arg1 isNewUser:(_Bool)arg2 isLibraryEmpty:(_Bool)arg3;
- (id)initWithNoMusicWithNewUser:(_Bool)arg1 isLibraryEmpty:(_Bool)arg2;

@end

