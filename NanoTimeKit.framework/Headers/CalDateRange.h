#import <Foundation/Foundation.h>

@class NSDate;

@protocol CalDateRangeProtocol <NSObject>
- (NSDate *)endDate;
- (NSDate *)startDate;
@end

@interface CalDateRange : NSObject <CalDateRangeProtocol, NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 components:(id)arg3 calendar:(id)arg4;
+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 duration:(double)arg3;
+ (id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 multiplier:(unsigned int)arg3;
+ (id)rangeWithRange:(id)arg1;
+ (id)rangeWithStartDate:(id)arg1 duration:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (BOOL)supportsSecureCoding;

//// - (void).cxx_destruct;
- (id)_calculateMidnightsInCalendar:(id)arg1;
- (id)briefDescription;
- (BOOL)containsDate:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)intersectionWithRange:(id)arg1;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)intersectsRange:(id)arg1 allowSinglePointIntersection:(BOOL)arg2;
- (BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)midnightsForRangeInTimeZoneString:(id)arg1;
- (id)midpoint;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDate:(id)arg1 duration:(double)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;
- (id)subtractRange:(id)arg1;
- (id)unionRange:(id)arg1;

@end
