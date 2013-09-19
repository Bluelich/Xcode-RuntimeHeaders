/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSCoding>
{
    BOOL _dynamic;
    BOOL _usesPreciseCollisionDetection;
    BOOL _allowsRotation;
    BOOL _resting;
    BOOL _affectedByGravity;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    double _friction;
    double _restitution;
    double _linearDamping;
    double _angularDamping;
    double _density;
    double _mass;
    double _area;
    NSArray *_joints;
    SKNode *_node;
    double _angularVelocity;
    struct CGVector _velocity;
}

+ (id)bodyWithEdgeLoopFromRect:(struct CGRect)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property double angularVelocity; // @synthesize angularVelocity=_angularVelocity;
@property struct CGVector velocity; // @synthesize velocity=_velocity;
@property(readonly) SKNode *node; // @synthesize node=_node;
@property(readonly) NSArray *joints; // @synthesize joints=_joints;
@property unsigned int contactTestBitMask; // @synthesize contactTestBitMask=_contactTestBitMask;
@property unsigned int collisionBitMask; // @synthesize collisionBitMask=_collisionBitMask;
@property unsigned int categoryBitMask; // @synthesize categoryBitMask=_categoryBitMask;
@property BOOL affectedByGravity; // @synthesize affectedByGravity=_affectedByGravity;
@property(readonly) double area; // @synthesize area=_area;
@property double mass; // @synthesize mass=_mass;
@property double density; // @synthesize density=_density;
@property double angularDamping; // @synthesize angularDamping=_angularDamping;
@property double linearDamping; // @synthesize linearDamping=_linearDamping;
@property double restitution; // @synthesize restitution=_restitution;
@property double friction; // @synthesize friction=_friction;
@property(getter=isResting) BOOL resting; // @synthesize resting=_resting;
@property BOOL allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property BOOL usesPreciseCollisionDetection; // @synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection;
@property(getter=isDynamic) BOOL dynamic; // @synthesize dynamic=_dynamic;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allContactedBodies;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyImpulse:(struct CGVector)arg1;
- (void)applyTorque:(double)arg1;
- (void)applyForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyForce:(struct CGVector)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
