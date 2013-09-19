/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOutlineView.h"

@class DVResultsOutlineViewController, NSButton;

@interface DVResultsOutlineView : NSOutlineView
{
    NSButton *showMoreLessButton;
    DVResultsOutlineViewController *controller;
}

+ (void)initialize;
- (id)menuForEvent:(id)arg1;
- (id)menuItemTitleForSortDescriptor:(id)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)reloadData;
- (id)controller;
- (id)showMoreLessButton;
- (void)updateTrackingAreas;
- (void)awakeFromNib;
- (double)preferredResultsListFontSize;

@end
