/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEActivityReporter.h>

@class DVTMapTable, DVTObservingToken;

@interface IDEExecutionActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_launchSessionsStateObserverToken;
    DVTMapTable *_reportForLaunchSessionTable;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_updateActivityReport:(id)arg1;
- (id)_titleForLaunchSession:(id)arg1 prefix:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end
