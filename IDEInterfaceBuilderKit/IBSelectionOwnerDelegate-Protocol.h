/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBSelectionOwnerDelegate <NSObject>

@optional
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)selectionOwner:(id)arg1 willSelect:(id)arg2 andDeselect:(id)arg3;
- (BOOL)selectionOwner:(id)arg1 canSelect:(id)arg2;
@end

