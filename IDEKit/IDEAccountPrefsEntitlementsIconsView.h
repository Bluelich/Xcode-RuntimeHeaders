/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTStackView_ML.h"

@class NSDictionary;

@interface IDEAccountPrefsEntitlementsIconsView : DVTStackView_ML
{
    long long _backgroundStyle;
    NSDictionary *_entitlements;
}

@property(copy, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void).cxx_destruct;
- (void)layoutTopDown;
- (id)iconForFeature:(id)arg1 inverted:(BOOL)arg2;
- (id)features;
- (id)initWithFrame:(struct CGRect)arg1;

@end

