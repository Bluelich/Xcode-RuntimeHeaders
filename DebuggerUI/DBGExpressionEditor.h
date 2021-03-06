/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "NSPopoverDelegate-Protocol.h"

@class NSPopover, NSString, NSTextField;

@interface DBGExpressionEditor : NSViewController <NSPopoverDelegate>
{
    NSTextField *_expressionField;
    NSPopover *_popover;
    NSString *_expressionString;
    NSString *_subStringToSelect;
    BOOL _showInAllStackFrames;
    id _doneButtonHandler;
}

+ (id)expressionEditor:(id)arg1 subStringToSelect:(id)arg2 showInAllStackFrames:(BOOL)arg3;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(copy) id doneButtonHandler; // @synthesize doneButtonHandler=_doneButtonHandler;
@property BOOL showInAllStackFrames; // @synthesize showInAllStackFrames=_showInAllStackFrames;
@property(copy) NSString *subStringToSelect; // @synthesize subStringToSelect=_subStringToSelect;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (void).cxx_destruct;
- (void)popoverDidShow:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)_selectSubString;
- (id)init;

@end

