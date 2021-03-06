/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPURenderTargetEditor/GPUResourceEditor.h>

#import "GPUDataTableViewDataProvider-Protocol.h"
#import "GPUDataTableViewDelegate-Protocol.h"

@class GPUDataTableView, NSColor, NSObject<GPUVertexAttributesProtocol>;

// Not exported
@interface GPUVertexAttributesEditor : GPUResourceEditor <GPUDataTableViewDataProvider, GPUDataTableViewDelegate>
{
    NSObject<GPUVertexAttributesProtocol> *_attributes;
    BOOL _isPopulated;
    BOOL _hasVertexArray;
    NSColor *_backgroundColor;
    GPUDataTableView *_tableView;
    long long _vertexCount;
}

@property(nonatomic) long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) __weak GPUDataTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)supportedResourceClasses;
- (void)beginEditor;
- (void)populate;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (double)dataTableView:(id)arg1 minimumWidthForColumn:(long long)arg2 inGroup:(long long)arg3;
- (id)dataTableView:(id)arg1 textForCellAtRow:(long long)arg2 column:(long long)arg3 inColumnGroup:(long long)arg4;
- (BOOL)isElementIndexPrimitiveRestart:(unsigned long long)arg1;
- (id)dataTableView:(id)arg1 titleForColumnGroup:(long long)arg2;
- (id)dataTableView:(id)arg1 titleForColumn:(long long)arg2 inGroup:(long long)arg3;
- (long long)dataTableView:(id)arg1 numberOfColumnsInGroup:(long long)arg2;
- (long long)numberOfColumnGroupsInTableView:(id)arg1;
- (long long)numberOfRowsInDataTableView:(id)arg1;
- (id)processColumnGroup:(long long)arg1 usingBlock:(id)arg2;

@end

