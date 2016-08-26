///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamGroupMemberSetAccessTypeError;

/// 
/// The `DbxTeamGroupMemberSetAccessTypeError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamGroupMemberSetAccessTypeError : NSObject <DbxSerializable> 

/// The `TeamGroupMemberSetAccessTypeErrorTag` enum type represents the possible
/// tag states that the `DbxTeamGroupMemberSetAccessTypeError` union can exist
/// in.
typedef NS_ENUM(NSInteger, TeamGroupMemberSetAccessTypeErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    TeamGroupMemberSetAccessTypeErrorGroupNotFound,

    /// (no description).
    TeamGroupMemberSetAccessTypeErrorOther,

    /// The specified user is not a member of this group.
    TeamGroupMemberSetAccessTypeErrorMemberNotInGroup,

    /// A company managed group cannot be managed by a user.
    TeamGroupMemberSetAccessTypeErrorUserCannotBeManagerOfCompanyManagedGroup,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamGroupMemberSetAccessTypeErrorTag tag;


/// Initializes union class with tag state of `GroupNotFound`.
- (nonnull instancetype)initWithGroupNotFound;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `MemberNotInGroup`.
- (nonnull instancetype)initWithMemberNotInGroup;

/// Initializes union class with tag state of
/// `UserCannotBeManagerOfCompanyManagedGroup`.
- (nonnull instancetype)initWithUserCannotBeManagerOfCompanyManagedGroup;

/// Returns whether the union's current tag state has value `GroupNotFound`.
- (BOOL)isGroupNotFound;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `MemberNotInGroup`.
- (BOOL)isMemberNotInGroup;

/// Returns whether the union's current tag state has value
/// `UserCannotBeManagerOfCompanyManagedGroup`.
- (BOOL)isUserCannotBeManagerOfCompanyManagedGroup;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxTeamGroupMemberSetAccessTypeError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGroupMemberSetAccessTypeError`
/// union.
/// 
@interface DbxTeamGroupMemberSetAccessTypeErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGroupMemberSetAccessTypeError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupMemberSetAccessTypeError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGroupMemberSetAccessTypeError`
/// object from a json-compatible dictionary representation.
+ (DbxTeamGroupMemberSetAccessTypeError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
