///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingCreateSharedLinkArg;
@class DbxSharingPendingUploadMode;

/// 
/// The `DbxSharingCreateSharedLinkArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingCreateSharedLinkArg : NSObject <DbxSerializable> 

/// The path to share.
@property (nonatomic, copy) NSString * _Nonnull path;

/// Whether to return a shortened URL.
@property (nonatomic, copy) NSNumber * _Nonnull shortUrl;

/// If it's okay to share a path that does not yet exist, set this to either
/// file in PendingUploadMode or folder in PendingUploadMode to indicate whether
/// to assume it's a file or folder.
@property (nonatomic) DbxSharingPendingUploadMode * _Nullable pendingUpload;

/// Full constructor for the `CreateSharedLinkArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path shortUrl:(NSNumber * _Nullable)shortUrl pendingUpload:(DbxSharingPendingUploadMode * _Nullable)pendingUpload;

/// Convenience constructor for the `CreateSharedLinkArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

/// Returns a human-readable representation of the
/// `DbxSharingCreateSharedLinkArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingCreateSharedLinkArg` struct.
/// 
@interface DbxSharingCreateSharedLinkArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingCreateSharedLinkArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingCreateSharedLinkArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingCreateSharedLinkArg` object from
/// a json-compatible dictionary representation.
+ (DbxSharingCreateSharedLinkArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
