///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingAclUpdatePolicy;
@class DbxSharingMemberPolicy;
@class DbxSharingSharedLinkPolicy;
@class DbxSharingUpdateFolderPolicyArg;

/// 
/// The `DbxSharingUpdateFolderPolicyArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// If any of the policy's are unset, then they retain their current setting.
/// 
@interface DbxSharingUpdateFolderPolicyArg : NSObject <DbxSerializable> 

/// The ID for the shared folder.
@property (nonatomic, copy) NSString * _Nonnull sharedFolderId;

/// Who can be a member of this shared folder. Only applicable if the current
/// user is on a team.
@property (nonatomic) DbxSharingMemberPolicy * _Nullable memberPolicy;

/// Who can add and remove members of this shared folder.
@property (nonatomic) DbxSharingAclUpdatePolicy * _Nullable aclUpdatePolicy;

/// The policy to apply to shared links created for content inside this shared
/// folder. The current user must be on a team to set this policy to members in
/// SharedLinkPolicy.
@property (nonatomic) DbxSharingSharedLinkPolicy * _Nullable sharedLinkPolicy;

/// Full constructor for the `UpdateFolderPolicyArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId memberPolicy:(DbxSharingMemberPolicy * _Nullable)memberPolicy aclUpdatePolicy:(DbxSharingAclUpdatePolicy * _Nullable)aclUpdatePolicy sharedLinkPolicy:(DbxSharingSharedLinkPolicy * _Nullable)sharedLinkPolicy;

/// Convenience constructor for the `UpdateFolderPolicyArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

/// Returns a human-readable representation of the
/// `DbxSharingUpdateFolderPolicyArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingUpdateFolderPolicyArg` struct.
/// 
@interface DbxSharingUpdateFolderPolicyArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingUpdateFolderPolicyArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingUpdateFolderPolicyArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingUpdateFolderPolicyArg` object
/// from a json-compatible dictionary representation.
+ (DbxSharingUpdateFolderPolicyArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
