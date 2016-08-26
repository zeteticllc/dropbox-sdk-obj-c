///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamAdminTier;
@class DbxTeamTeamMemberInfo;
@class DbxTeamTeamMemberProfile;

/// 
/// The `DbxTeamTeamMemberInfo` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Information about a team member.
/// 
@interface DbxTeamTeamMemberInfo : NSObject <DbxSerializable> 

/// Profile of a user as a member of a team.
@property (nonatomic) DbxTeamTeamMemberProfile * _Nonnull profile;

/// The user's role in the team.
@property (nonatomic) DbxTeamAdminTier * _Nonnull role;

/// Full constructor for the `TeamMemberInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithProfile:(DbxTeamTeamMemberProfile * _Nonnull)profile role:(DbxTeamAdminTier * _Nonnull)role;

/// Returns a human-readable representation of the `DbxTeamTeamMemberInfo`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamTeamMemberInfo` struct.
/// 
@interface DbxTeamTeamMemberInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamTeamMemberInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamTeamMemberInfo * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamTeamMemberInfo` object from a
/// json-compatible dictionary representation.
+ (DbxTeamTeamMemberInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
