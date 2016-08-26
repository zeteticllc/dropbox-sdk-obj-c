///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingRevokeSharedLinkError;

/// 
/// The `DbxSharingRevokeSharedLinkError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingRevokeSharedLinkError : NSObject <DbxSerializable> 

/// The `SharingRevokeSharedLinkErrorTag` enum type represents the possible tag
/// states that the `DbxSharingRevokeSharedLinkError` union can exist in.
typedef NS_ENUM(NSInteger, SharingRevokeSharedLinkErrorTag) {
    /// The shared link wasn't found
    SharingRevokeSharedLinkErrorSharedLinkNotFound,

    /// The caller is not allowed to access this shared link
    SharingRevokeSharedLinkErrorSharedLinkAccessDenied,

    /// (no description).
    SharingRevokeSharedLinkErrorOther,

    /// Shared link is malformed.
    SharingRevokeSharedLinkErrorSharedLinkMalformed,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingRevokeSharedLinkErrorTag tag;


/// Initializes union class with tag state of `SharedLinkNotFound`.
- (nonnull instancetype)initWithSharedLinkNotFound;

/// Initializes union class with tag state of `SharedLinkAccessDenied`.
- (nonnull instancetype)initWithSharedLinkAccessDenied;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `SharedLinkMalformed`.
- (nonnull instancetype)initWithSharedLinkMalformed;

/// Returns whether the union's current tag state has value
/// `SharedLinkNotFound`.
- (BOOL)isSharedLinkNotFound;

/// Returns whether the union's current tag state has value
/// `SharedLinkAccessDenied`.
- (BOOL)isSharedLinkAccessDenied;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value
/// `SharedLinkMalformed`.
- (BOOL)isSharedLinkMalformed;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingRevokeSharedLinkError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingRevokeSharedLinkError` union.
/// 
@interface DbxSharingRevokeSharedLinkErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingRevokeSharedLinkError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingRevokeSharedLinkError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingRevokeSharedLinkError` object
/// from a json-compatible dictionary representation.
+ (DbxSharingRevokeSharedLinkError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
