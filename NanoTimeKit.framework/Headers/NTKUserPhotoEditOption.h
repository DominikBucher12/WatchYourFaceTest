//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption
{
    _Bool _usesDefaultPhoto;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionUsingDefaultPhoto:(_Bool)arg1;
@property(nonatomic) _Bool usesDefaultPhoto; // @synthesize usesDefaultPhoto=_usesDefaultPhoto;
- (_Bool)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;

@end

