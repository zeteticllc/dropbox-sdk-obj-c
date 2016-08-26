///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingShareFolderError;
@class DbxSharingSharePathError;

/// 
/// The `DbxSharingShareFolderError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingShareFolderError : NSObject <DbxSerializable> 

/// The `SharingShareFolderErrorTag` enum type represents the possible tag
/// states that the `DbxSharingShareFolderError` union can exist in.
typedef NS_ENUM(NSInteger, SharingShareFolderErrorTag) {
    /// The current user's e-mail address is unverified.
    SharingShareFolderErrorEmailUnverified,

    /// path in ShareFolderArg is invalid.
    SharingShareFolderErrorBadPath,

    /// Team policy is more restrictive than memberPolicy in ShareFolderArg.
    SharingShareFolderErrorTeamPolicyDisallowsMemberPolicy,

    /// The current user's account is not allowed to select the specified
    /// sharedLinkPolicy in ShareFolderArg.
    SharingShareFolderErrorDisallowedSharedLinkPolicy,

    /// (no description).
    SharingShareFolderErrorOther,

    /// The current user does not have permission to perform this action.
    SharingShareFolderErrorNoPermission,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingShareFolderErrorTag tag;

/// path in ShareFolderArg is invalid.
@property (nonatomic) DbxSharingSharePathError * _Nonnull badPath;


/// Initializes union class with tag state of `EmailUnverified`.
- (nonnull instancetype)initWithEmailUnverified;

/// Initializes union class with tag state of `BadPath`.
- (nonnull instancetype)initWithBadPath:(DbxSharingSharePathError * _Nonnull)badPath;

/// Initializes union class with tag state of `TeamPolicyDisallowsMemberPolicy`.
- (nonnull instancetype)initWithTeamPolicyDisallowsMemberPolicy;

/// Initializes union class with tag state of `DisallowedSharedLinkPolicy`.
- (nonnull instancetype)initWithDisallowedSharedLinkPolicy;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Returns whether the union's current tag state has value `EmailUnverified`.
- (BOOL)isEmailUnverified;

/// Returns whether the union's current tag state has value `BadPath`.
- (BOOL)isBadPath;

/// Returns whether the union's current tag state has value
/// `TeamPolicyDisallowsMemberPolicy`.
- (BOOL)isTeamPolicyDisallowsMemberPolicy;

/// Returns whether the union's current tag state has value
/// `DisallowedSharedLinkPolicy`.
- (BOOL)isDisallowedSharedLinkPolicy;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxSharingShareFolderError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingShareFolderError` union.
/// 
@interface DbxSharingShareFolderErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingShareFolderError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingShareFolderError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingShareFolderError` object from a
/// json-compatible dictionary representation.
+ (DbxSharingShareFolderError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
