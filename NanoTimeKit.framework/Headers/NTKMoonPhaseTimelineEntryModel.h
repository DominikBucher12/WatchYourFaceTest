//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineEntryModel.h>

@class NSDate, NSString;

@interface NTKMoonPhaseTimelineEntryModel : NTKTimelineEntryModel
{
    _Bool _currentEvent;
    NSString *_phaseName;
    unsigned int _phaseNumber;
    int _hemisphere;
    int _event;
    NSDate *_eventDate;
    NSString *_animationGroup;
}

+ (id)textForMoonPhaseEvent:(int)arg1 useShort:(_Bool)arg2;
+ (id)textForMoonPhaseEvent:(int)arg1;
+ (id)providerWithText:(id)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1;
+ (id)extraLarge:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (id)smallUtility:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)largeModular:(id)arg1;
@property(retain, nonatomic) NSString *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(nonatomic) _Bool currentEvent; // @synthesize currentEvent=_currentEvent;
@property(retain, nonatomic) NSDate *eventDate; // @synthesize eventDate=_eventDate;
@property(nonatomic) int event; // @synthesize event=_event;
@property(nonatomic) int hemisphere; // @synthesize hemisphere=_hemisphere;
@property(nonatomic) unsigned int phaseNumber; // @synthesize phaseNumber=_phaseNumber;
@property(retain, nonatomic) NSString *phaseName; // @synthesize phaseName=_phaseName;
// - (void).cxx_destruct;
- (id)templateForComplicationFamily:(int)arg1;

@end

