///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamUserSelectorError;

/// 
/// The `DbxTeamUserSelectorError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error that can be returned whenever a struct derived from UserSelectorArg is
/// used.
/// 
@interface DbxTeamUserSelectorError : NSObject <DbxSerializable> 

/// The `TeamUserSelectorErrorTag` enum type represents the possible tag states
/// that the `DbxTeamUserSelectorError` union can exist in.
typedef NS_ENUM(NSInteger, TeamUserSelectorErrorTag) {
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    TeamUserSelectorErrorUserNotFound,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamUserSelectorErrorTag tag;


/// Initializes union class with tag state of `UserNotFound`.
- (nonnull instancetype)initWithUserNotFound;

/// Returns whether the union's current tag state has value `UserNotFound`.
- (BOOL)isUserNotFound;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxTeamUserSelectorError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamUserSelectorError` union.
/// 
@interface DbxTeamUserSelectorErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamUserSelectorError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamUserSelectorError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamUserSelectorError` object from a
/// json-compatible dictionary representation.
+ (DbxTeamUserSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
