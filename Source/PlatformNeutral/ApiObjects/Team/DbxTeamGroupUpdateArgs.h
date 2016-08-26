///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxTeamIncludeMembersArg.h"

@class DbxTeamCommonGroupManagementType;
@class DbxTeamGroupSelector;
@class DbxTeamGroupUpdateArgs;

/// 
/// The `DbxTeamGroupUpdateArgs` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamGroupUpdateArgs : DbxTeamIncludeMembersArg <DbxSerializable> 

/// Specify a group.
@property (nonatomic) DbxTeamGroupSelector * _Nonnull group;

/// Optional argument. Set group name to this if provided.
@property (nonatomic, copy) NSString * _Nullable dNewGroupName;

/// Optional argument. New group external ID. If the argument is None, the
/// group's external_id won't be updated. If the argument is empty string, the
/// group's external id will be cleared.
@property (nonatomic, copy) NSString * _Nullable dNewGroupExternalId;

/// Set new group management type, if provided.
@property (nonatomic) DbxTeamCommonGroupManagementType * _Nullable dNewGroupManagementType;

/// Full constructor for the `GroupUpdateArgs` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithGroup:(DbxTeamGroupSelector * _Nonnull)group returnMembers:(NSNumber * _Nullable)returnMembers dNewGroupName:(NSString * _Nullable)dNewGroupName dNewGroupExternalId:(NSString * _Nullable)dNewGroupExternalId dNewGroupManagementType:(DbxTeamCommonGroupManagementType * _Nullable)dNewGroupManagementType;

/// Convenience constructor for the `GroupUpdateArgs` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithGroup:(DbxTeamGroupSelector * _Nonnull)group;

/// Returns a human-readable representation of the `DbxTeamGroupUpdateArgs`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGroupUpdateArgs` struct.
/// 
@interface DbxTeamGroupUpdateArgsSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGroupUpdateArgs` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupUpdateArgs * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGroupUpdateArgs` object from a
/// json-compatible dictionary representation.
+ (DbxTeamGroupUpdateArgs * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
