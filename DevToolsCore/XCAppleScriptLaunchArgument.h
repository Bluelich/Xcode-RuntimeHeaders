/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PBXExecutable;

@interface XCAppleScriptLaunchArgument : NSObject
{
    long long _index;
    PBXExecutable *_executable;
    NSString *_name;
    BOOL _active;
}

- (id)objectSpecifier;
- (void)handleMoveCommand:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)_setActive:(BOOL)arg1;
- (BOOL)active;
- (void)setName:(id)arg1;
- (void)_setName:(id)arg1;
- (id)name;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (id)argumentEntries;
- (void)setExecutable:(id)arg1;
- (id)executable;
- (void)dealloc;
- (id)init;

@end

