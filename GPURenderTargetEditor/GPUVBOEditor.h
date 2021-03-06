/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPURenderTargetEditor/GPUResourceEditor.h>

#import "GPUDataTableViewDataProvider-Protocol.h"
#import "GPUDataTableViewDelegate-Protocol.h"

@class DVTBorderedView, GPUDataTableView, GPUVertexAttributeComponent, NSPopUpButton, NSString;

// Not exported
@interface GPUVBOEditor : GPUResourceEditor <GPUDataTableViewDataProvider, GPUDataTableViewDelegate>
{
    GPUVertexAttributeComponent *_bufferData;
    double _minColumnWidth;
    BOOL _isPopulated;
    GPUDataTableView *_vboView;
    NSPopUpButton *_displayFormatPopup;
    NSString *_displayFormat;
    DVTBorderedView *_bottomToolbar;
    long long _numberOfColumns;
}

+ (id)assetBundle;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) __weak DVTBorderedView *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(retain, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property(retain, nonatomic) NSPopUpButton *displayFormatPopup; // @synthesize displayFormatPopup=_displayFormatPopup;
@property(retain, nonatomic) GPUDataTableView *vboView; // @synthesize vboView=_vboView;
- (void).cxx_destruct;
- (void)beginEditor;
- (void)populate;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (id)widthInColumns;
- (void)setWidthInColumns:(id)arg1;
- (double)dataTableView:(id)arg1 minimumWidthForColumn:(long long)arg2 inGroup:(long long)arg3;
- (id)dataTableView:(id)arg1 textForCellAtRow:(long long)arg2 column:(long long)arg3 inColumnGroup:(long long)arg4;
- (long long)dataTableView:(id)arg1 numberOfColumnsInGroup:(long long)arg2;
- (long long)numberOfColumnGroupsInTableView:(id)arg1;
- (long long)numberOfRowsInDataTableView:(id)arg1;
- (BOOL)isPackedFormat;
- (id)supportedResourceClasses;

@end

