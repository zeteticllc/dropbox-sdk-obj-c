///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamMembersDeactivateError;

/// 
/// The `DbxTeamMembersDeactivateError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamMembersDeactivateError : NSObject <DbxSerializable> 

/// The `TeamMembersDeactivateErrorTag` enum type represents the possible tag
/// states that the `DbxTeamMembersDeactivateError` union can exist in.
typedef NS_ENUM(NSInteger, TeamMembersDeactivateErrorTag) {
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    TeamMembersDeactivateErrorUserNotFound,

    /// The user is not a member of the team.
    TeamMembersDeactivateErrorUserNotInTeam,

    /// (no description).
    TeamMembersDeactivateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamMembersDeactivateErrorTag tag;


/// Initializes union class with tag state of `UserNotFound`.
- (nonnull instancetype)initWithUserNotFound;

/// Initializes union class with tag state of `UserNotInTeam`.
- (nonnull instancetype)initWithUserNotInTeam;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `UserNotFound`.
- (BOOL)isUserNotFound;

/// Returns whether the union's current tag state has value `UserNotInTeam`.
- (BOOL)isUserNotInTeam;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxTeamMembersDeactivateError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamMembersDeactivateError` union.
/// 
@interface DbxTeamMembersDeactivateErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamMembersDeactivateError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamMembersDeactivateError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamMembersDeactivateError` object from
/// a json-compatible dictionary representation.
+ (DbxTeamMembersDeactivateError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
