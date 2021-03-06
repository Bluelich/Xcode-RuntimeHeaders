/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEARCConversionTarget, IDEFileReference, NSImage, NSString;

@interface IDEARCConversionBuildFile : NSObject
{
    IDEFileReference *_fileReference;
    IDEARCConversionTarget *_target;
    NSImage *_iconImage;
    NSString *_warningMessage;
    BOOL _enablesARC;
}

@property BOOL enablesARC; // @synthesize enablesARC=_enablesARC;
@property(readonly) NSImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;
@property(readonly) IDEARCConversionTarget *target; // @synthesize target=_target;
@property(readonly) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
- (id)_treeControllerWarningMessage;
- (id)_treeControllerChildren;
- (void)updateBuildSettings;
- (void)disableOverridingBuildSettings;
- (void)enableOverridingBuildSettings;
- (void)_setEnablesARC:(BOOL)arg1 overridingOnly:(BOOL)arg2;
@property(readonly) NSString *displayName;
- (id)initWithFileReference:(id)arg1 target:(id)arg2;

@end

