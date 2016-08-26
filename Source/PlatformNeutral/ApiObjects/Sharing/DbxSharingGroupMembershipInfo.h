///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxSharingMembershipInfo.h"

@class DbxSharingAccessLevel;
@class DbxSharingGroupInfo;
@class DbxSharingGroupMembershipInfo;
@class DbxSharingMemberPermission;

/// 
/// The `DbxSharingGroupMembershipInfo` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// The information about a group member of the shared content.
/// 
@interface DbxSharingGroupMembershipInfo : DbxSharingMembershipInfo <DbxSerializable> 

/// The information about the membership group.
@property (nonatomic) DbxSharingGroupInfo * _Nonnull group;

/// Full constructor for the `GroupMembershipInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithAccessType:(DbxSharingAccessLevel * _Nonnull)accessType group:(DbxSharingGroupInfo * _Nonnull)group permissions:(NSArray<DbxSharingMemberPermission *> * _Nullable)permissions initials:(NSString * _Nullable)initials isInherited:(NSNumber * _Nullable)isInherited;

/// Convenience constructor for the `GroupMembershipInfo` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithAccessType:(DbxSharingAccessLevel * _Nonnull)accessType group:(DbxSharingGroupInfo * _Nonnull)group;

/// Returns a human-readable representation of the
/// `DbxSharingGroupMembershipInfo` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingGroupMembershipInfo` struct.
/// 
@interface DbxSharingGroupMembershipInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingGroupMembershipInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingGroupMembershipInfo * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingGroupMembershipInfo` object from
/// a json-compatible dictionary representation.
+ (DbxSharingGroupMembershipInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
