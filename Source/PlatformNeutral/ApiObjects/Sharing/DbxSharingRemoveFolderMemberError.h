///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingRemoveFolderMemberError;
@class DbxSharingSharedFolderAccessError;
@class DbxSharingSharedFolderMemberError;

/// 
/// The `DbxSharingRemoveFolderMemberError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingRemoveFolderMemberError : NSObject <DbxSerializable> 

/// The `SharingRemoveFolderMemberErrorTag` enum type represents the possible
/// tag states that the `DbxSharingRemoveFolderMemberError` union can exist in.
typedef NS_ENUM(NSInteger, SharingRemoveFolderMemberErrorTag) {
    /// (no description).
    SharingRemoveFolderMemberErrorAccessError,

    /// (no description).
    SharingRemoveFolderMemberErrorMemberError,

    /// The target user is the owner of the shared folder. You can't remove this
    /// user until ownership has been transferred to another member.
    SharingRemoveFolderMemberErrorFolderOwner,

    /// The target user has access to the shared folder via a group.
    SharingRemoveFolderMemberErrorGroupAccess,

    /// This action cannot be performed on a team shared folder.
    SharingRemoveFolderMemberErrorTeamFolder,

    /// The current user does not have permission to perform this action.
    SharingRemoveFolderMemberErrorNoPermission,

    /// (no description).
    SharingRemoveFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingRemoveFolderMemberErrorTag tag;

/// (no description).
@property (nonatomic) DbxSharingSharedFolderAccessError * _Nonnull accessError;

/// (no description).
@property (nonatomic) DbxSharingSharedFolderMemberError * _Nonnull memberError;


/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DbxSharingSharedFolderAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `MemberError`.
- (nonnull instancetype)initWithMemberError:(DbxSharingSharedFolderMemberError * _Nonnull)memberError;

/// Initializes union class with tag state of `FolderOwner`.
- (nonnull instancetype)initWithFolderOwner;

/// Initializes union class with tag state of `GroupAccess`.
- (nonnull instancetype)initWithGroupAccess;

/// Initializes union class with tag state of `TeamFolder`.
- (nonnull instancetype)initWithTeamFolder;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `MemberError`.
- (BOOL)isMemberError;

/// Returns whether the union's current tag state has value `FolderOwner`.
- (BOOL)isFolderOwner;

/// Returns whether the union's current tag state has value `GroupAccess`.
- (BOOL)isGroupAccess;

/// Returns whether the union's current tag state has value `TeamFolder`.
- (BOOL)isTeamFolder;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingRemoveFolderMemberError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingRemoveFolderMemberError` union.
/// 
@interface DbxSharingRemoveFolderMemberErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingRemoveFolderMemberError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingRemoveFolderMemberError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingRemoveFolderMemberError` object
/// from a json-compatible dictionary representation.
+ (DbxSharingRemoveFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
