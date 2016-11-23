//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import "NTKFaceCollectionObserver.h"

@class NSString, NTKFaceCollection, NTKTaskScheduler;

@interface NTKAggdReporter : NSObject <NTKFaceCollectionObserver>
{
    NTKFaceCollection *_libraryFaceCollection;
    NTKTaskScheduler *_taskScheduler;
    _Bool _loggingDirty;
}

// - (void).cxx_destruct;
- (void)_setAggdKeyForFaceCount;
- (void)_setAggdKeysForCurrentFace;
- (void)_clearAggdKeysForFaceStyle:(int)arg1;
- (void)_clearAllAggdKeys;
- (void)_cleanLogging;
- (void)_dirtyLogging;
- (void)_asyncDirtyLogging;
- (void)faceCollectionDidLoad:(id)arg1;
- (id)siriContextIdentifierForFace:(id)arg1;
- (void)dealloc;
- (id)initWithLibraryFaceCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

