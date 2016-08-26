///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxTeamCommonGroupSummary.h"

@class DbxSharingGroupInfo;
@class DbxTeamCommonGroupManagementType;
@class DbxTeamCommonGroupType;

/// 
/// The `DbxSharingGroupInfo` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// The information about a group. Groups is a way to manage a list of users
/// who need same access permission to the shared folder.
/// 
@interface DbxSharingGroupInfo : DbxTeamCommonGroupSummary <DbxSerializable> 

/// The type of group.
@property (nonatomic) DbxTeamCommonGroupType * _Nonnull groupType;

/// If the current user is an owner of the group.
@property (nonatomic, copy) NSNumber * _Nonnull isOwner;

/// If the group is owned by the current user's team.
@property (nonatomic, copy) NSNumber * _Nonnull sameTeam;

/// Full constructor for the `GroupInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DbxTeamCommonGroupManagementType * _Nonnull)groupManagementType groupType:(DbxTeamCommonGroupType * _Nonnull)groupType isOwner:(NSNumber * _Nonnull)isOwner sameTeam:(NSNumber * _Nonnull)sameTeam groupExternalId:(NSString * _Nullable)groupExternalId memberCount:(NSNumber * _Nullable)memberCount;

/// Convenience constructor for the `GroupInfo` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DbxTeamCommonGroupManagementType * _Nonnull)groupManagementType groupType:(DbxTeamCommonGroupType * _Nonnull)groupType isOwner:(NSNumber * _Nonnull)isOwner sameTeam:(NSNumber * _Nonnull)sameTeam;

/// Returns a human-readable representation of the `DbxSharingGroupInfo` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingGroupInfo` struct.
/// 
@interface DbxSharingGroupInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingGroupInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingGroupInfo * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingGroupInfo` object from a
/// json-compatible dictionary representation.
+ (DbxSharingGroupInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
