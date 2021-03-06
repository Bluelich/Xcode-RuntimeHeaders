/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SCMSSHServerProtocol-Protocol.h"

@class NSConnection;

@interface SCMSSHServer : NSObject <SCMSSHServerProtocol>
{
    NSConnection *_vendedConnection;
}

+ (id)sharedSCMSSHServer;
- (BOOL)getPermissionToAddCertificate:(id)arg1;
- (BOOL)getPermissionToAddHostKey:(id)arg1;
- (BOOL)getPermissionToRetrievePasswordForHost:(id)arg1 user:(id)arg2 port:(long long *)arg3;
- (void)_connectionDidDie:(id)arg1;
- (void)tearDown;
- (id)init;

@end

