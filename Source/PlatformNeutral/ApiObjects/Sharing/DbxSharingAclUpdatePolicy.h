///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingAclUpdatePolicy;

/// 
/// The `DbxSharingAclUpdatePolicy` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Policy governing who can change a shared folder's access control list (ACL).
/// In other words, who can add, remove, or change the privileges of members.
/// 
@interface DbxSharingAclUpdatePolicy : NSObject <DbxSerializable> 

/// The `SharingAclUpdatePolicyTag` enum type represents the possible tag states
/// that the `DbxSharingAclUpdatePolicy` union can exist in.
typedef NS_ENUM(NSInteger, SharingAclUpdatePolicyTag) {
    /// Only the owner can update the ACL.
    SharingAclUpdatePolicyOwner,

    /// Any editor can update the ACL. This may be further restricted to editors
    /// on the same team.
    SharingAclUpdatePolicyEditors,

    /// (no description).
    SharingAclUpdatePolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingAclUpdatePolicyTag tag;


/// Initializes union class with tag state of `Owner`.
- (nonnull instancetype)initWithOwner;

/// Initializes union class with tag state of `Editors`.
- (nonnull instancetype)initWithEditors;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Owner`.
- (BOOL)isOwner;

/// Returns whether the union's current tag state has value `Editors`.
- (BOOL)isEditors;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxSharingAclUpdatePolicy`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingAclUpdatePolicy` union.
/// 
@interface DbxSharingAclUpdatePolicySerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingAclUpdatePolicy` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingAclUpdatePolicy * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingAclUpdatePolicy` object from a
/// json-compatible dictionary representation.
+ (DbxSharingAclUpdatePolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
