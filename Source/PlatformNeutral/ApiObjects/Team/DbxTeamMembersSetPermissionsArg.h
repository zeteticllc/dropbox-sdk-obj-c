///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamAdminTier;
@class DbxTeamMembersSetPermissionsArg;
@class DbxTeamUserSelectorArg;

/// 
/// The `DbxTeamMembersSetPermissionsArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Exactly one of team_member_id, email, or external_id must be provided to
/// identify the user account.
/// 
@interface DbxTeamMembersSetPermissionsArg : NSObject <DbxSerializable> 

/// Identity of user whose role will be set.
@property (nonatomic) DbxTeamUserSelectorArg * _Nonnull user;

/// The new role of the member.
@property (nonatomic) DbxTeamAdminTier * _Nonnull dNewRole;

/// Full constructor for the `MembersSetPermissionsArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithUser:(DbxTeamUserSelectorArg * _Nonnull)user dNewRole:(DbxTeamAdminTier * _Nonnull)dNewRole;

/// Returns a human-readable representation of the
/// `DbxTeamMembersSetPermissionsArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamMembersSetPermissionsArg` struct.
/// 
@interface DbxTeamMembersSetPermissionsArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamMembersSetPermissionsArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamMembersSetPermissionsArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamMembersSetPermissionsArg` object
/// from a json-compatible dictionary representation.
+ (DbxTeamMembersSetPermissionsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
