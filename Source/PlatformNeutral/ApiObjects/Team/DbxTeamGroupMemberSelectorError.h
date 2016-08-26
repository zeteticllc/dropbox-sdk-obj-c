///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamGroupMemberSelectorError;

/// 
/// The `DbxTeamGroupMemberSelectorError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error that can be raised when GroupMemberSelector is used, and the user is
/// required to be a member of the specified group.
/// 
@interface DbxTeamGroupMemberSelectorError : NSObject <DbxSerializable> 

/// The `TeamGroupMemberSelectorErrorTag` enum type represents the possible tag
/// states that the `DbxTeamGroupMemberSelectorError` union can exist in.
typedef NS_ENUM(NSInteger, TeamGroupMemberSelectorErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    TeamGroupMemberSelectorErrorGroupNotFound,

    /// (no description).
    TeamGroupMemberSelectorErrorOther,

    /// The specified user is not a member of this group.
    TeamGroupMemberSelectorErrorMemberNotInGroup,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamGroupMemberSelectorErrorTag tag;


/// Initializes union class with tag state of `GroupNotFound`.
- (nonnull instancetype)initWithGroupNotFound;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `MemberNotInGroup`.
- (nonnull instancetype)initWithMemberNotInGroup;

/// Returns whether the union's current tag state has value `GroupNotFound`.
- (BOOL)isGroupNotFound;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `MemberNotInGroup`.
- (BOOL)isMemberNotInGroup;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxTeamGroupMemberSelectorError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGroupMemberSelectorError` union.
/// 
@interface DbxTeamGroupMemberSelectorErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGroupMemberSelectorError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupMemberSelectorError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGroupMemberSelectorError` object
/// from a json-compatible dictionary representation.
+ (DbxTeamGroupMemberSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
