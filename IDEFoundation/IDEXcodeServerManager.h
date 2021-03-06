/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTDeveloperProfileAccountProvider-Protocol.h"

@class IDEXcodeServerReachabilityManager, NSMutableSet, NSSet, NSString;

@interface IDEXcodeServerManager : NSObject <DVTDeveloperProfileAccountProvider>
{
    NSMutableSet *_servers;
    IDEXcodeServerReachabilityManager *_reachabilityManager;
    NSString *_computerName;
}

+ (BOOL)automaticallyNotifiesObserversOfEnabledServers;
+ (BOOL)automaticallyNotifiesObserversOfServers;
+ (id)sharedServerManager;
@property(retain, nonatomic) NSString *computerName; // @synthesize computerName=_computerName;
@property(retain, nonatomic) IDEXcodeServerReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(retain, nonatomic) NSSet *servers; // @synthesize servers=_servers;
- (void).cxx_destruct;
@property(readonly) NSString *typeIdentifier;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
@property(readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable;
- (id)_serverWithGUID:(id)arg1;
- (void)_serverDidChange:(id)arg1;
- (void)_readBotsFromDisk;
- (void)_writeBotsToDisk:(id)arg1;
- (id)_botsFilePath;
- (void)_writeServersToUserDefaults:(id)arg1;
- (id)_readServersFromUserDefaults;
@property(readonly, nonatomic) NSSet *enabledServers;
@property(readonly, nonatomic) NSMutableSet *mutableServers;
- (void)removeServersObject:(id)arg1;
- (void)removeServer:(id)arg1;
- (void)addServersObject:(id)arg1;
- (void)dealloc;
- (void)_updateServerReachabilityStatus:(id)arg1;
- (id)init;

@end

