///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxSharingLinkMetadata.h"

@class DbxSharingPathLinkMetadata;
@class DbxSharingVisibility;

/// 
/// The `DbxSharingPathLinkMetadata` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Metadata for a path-based shared link.
/// 
@interface DbxSharingPathLinkMetadata : DbxSharingLinkMetadata <DbxSerializable> 

/// Path in user's Dropbox.
@property (nonatomic, copy) NSString * _Nonnull path;

/// Full constructor for the `PathLinkMetadata` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DbxSharingVisibility * _Nonnull)visibility path:(NSString * _Nonnull)path expires:(NSDate * _Nullable)expires;

/// Convenience constructor for the `PathLinkMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DbxSharingVisibility * _Nonnull)visibility path:(NSString * _Nonnull)path;

/// Returns a human-readable representation of the `DbxSharingPathLinkMetadata`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingPathLinkMetadata` struct.
/// 
@interface DbxSharingPathLinkMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingPathLinkMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingPathLinkMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingPathLinkMetadata` object from a
/// json-compatible dictionary representation.
+ (DbxSharingPathLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
