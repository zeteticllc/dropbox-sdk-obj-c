///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingLinkPermissions;
@class DbxSharingRequestedVisibility;
@class DbxSharingResolvedVisibility;
@class DbxSharingSharedLinkAccessFailureReason;

/// 
/// The `DbxSharingLinkPermissions` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingLinkPermissions : NSObject <DbxSerializable> 

/// The current visibility of the link after considering the shared links
/// policies of the the team (in case the link's owner is part of a team) and
/// the shared folder (in case the linked file is part of a shared folder). This
/// field is shown only if the caller has access to this info (the link's owner
/// always has access to this data).
@property (nonatomic) DbxSharingResolvedVisibility * _Nullable resolvedVisibility;

/// The shared link's requested visibility. This can be overridden by the team
/// and shared folder policies. The final visibility, after considering these
/// policies, can be found in resolvedVisibility. This is shown only if the
/// caller is the link's owner.
@property (nonatomic) DbxSharingRequestedVisibility * _Nullable requestedVisibility;

/// Whether the caller can revoke the shared link
@property (nonatomic, copy) NSNumber * _Nonnull canRevoke;

/// The failure reason for revoking the link. This field will only be present if
/// the canRevoke is false.
@property (nonatomic) DbxSharingSharedLinkAccessFailureReason * _Nullable revokeFailureReason;

/// Full constructor for the `LinkPermissions` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithCanRevoke:(NSNumber * _Nonnull)canRevoke resolvedVisibility:(DbxSharingResolvedVisibility * _Nullable)resolvedVisibility requestedVisibility:(DbxSharingRequestedVisibility * _Nullable)requestedVisibility revokeFailureReason:(DbxSharingSharedLinkAccessFailureReason * _Nullable)revokeFailureReason;

/// Convenience constructor for the `LinkPermissions` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithCanRevoke:(NSNumber * _Nonnull)canRevoke;

/// Returns a human-readable representation of the `DbxSharingLinkPermissions`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingLinkPermissions` struct.
/// 
@interface DbxSharingLinkPermissionsSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingLinkPermissions` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingLinkPermissions * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingLinkPermissions` object from a
/// json-compatible dictionary representation.
+ (DbxSharingLinkPermissions * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
