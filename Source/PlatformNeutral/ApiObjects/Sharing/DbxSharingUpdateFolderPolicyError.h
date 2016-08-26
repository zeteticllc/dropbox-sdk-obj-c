///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingSharedFolderAccessError;
@class DbxSharingUpdateFolderPolicyError;

/// 
/// The `DbxSharingUpdateFolderPolicyError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingUpdateFolderPolicyError : NSObject <DbxSerializable> 

/// The `SharingUpdateFolderPolicyErrorTag` enum type represents the possible
/// tag states that the `DbxSharingUpdateFolderPolicyError` union can exist in.
typedef NS_ENUM(NSInteger, SharingUpdateFolderPolicyErrorTag) {
    /// (no description).
    SharingUpdateFolderPolicyErrorAccessError,

    /// memberPolicy in UpdateFolderPolicyArg was set even though user is not on
    /// a team.
    SharingUpdateFolderPolicyErrorNotOnTeam,

    /// Team policy is more restrictive than memberPolicy in ShareFolderArg.
    SharingUpdateFolderPolicyErrorTeamPolicyDisallowsMemberPolicy,

    /// The current account is not allowed to select the specified
    /// sharedLinkPolicy in ShareFolderArg.
    SharingUpdateFolderPolicyErrorDisallowedSharedLinkPolicy,

    /// The current user does not have permission to perform this action.
    SharingUpdateFolderPolicyErrorNoPermission,

    /// (no description).
    SharingUpdateFolderPolicyErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingUpdateFolderPolicyErrorTag tag;

/// (no description).
@property (nonatomic) DbxSharingSharedFolderAccessError * _Nonnull accessError;


/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DbxSharingSharedFolderAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `NotOnTeam`.
- (nonnull instancetype)initWithNotOnTeam;

/// Initializes union class with tag state of `TeamPolicyDisallowsMemberPolicy`.
- (nonnull instancetype)initWithTeamPolicyDisallowsMemberPolicy;

/// Initializes union class with tag state of `DisallowedSharedLinkPolicy`.
- (nonnull instancetype)initWithDisallowedSharedLinkPolicy;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `NotOnTeam`.
- (BOOL)isNotOnTeam;

/// Returns whether the union's current tag state has value
/// `TeamPolicyDisallowsMemberPolicy`.
- (BOOL)isTeamPolicyDisallowsMemberPolicy;

/// Returns whether the union's current tag state has value
/// `DisallowedSharedLinkPolicy`.
- (BOOL)isDisallowedSharedLinkPolicy;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingUpdateFolderPolicyError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingUpdateFolderPolicyError` union.
/// 
@interface DbxSharingUpdateFolderPolicyErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingUpdateFolderPolicyError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingUpdateFolderPolicyError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingUpdateFolderPolicyError` object
/// from a json-compatible dictionary representation.
+ (DbxSharingUpdateFolderPolicyError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
