///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxSharingLinkMetadata.h"

@class DbxSharingCollectionLinkMetadata;
@class DbxSharingVisibility;

/// 
/// The `DbxSharingCollectionLinkMetadata` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Metadata for a collection-based shared link.
/// 
@interface DbxSharingCollectionLinkMetadata : DbxSharingLinkMetadata <DbxSerializable> 

/// Full constructor for the `CollectionLinkMetadata` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DbxSharingVisibility * _Nonnull)visibility expires:(NSDate * _Nullable)expires;

/// Convenience constructor for the `CollectionLinkMetadata` struct (exposes
/// only non-nullable instance variables with no default value).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DbxSharingVisibility * _Nonnull)visibility;

/// Returns a human-readable representation of the
/// `DbxSharingCollectionLinkMetadata` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingCollectionLinkMetadata` struct.
/// 
@interface DbxSharingCollectionLinkMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingCollectionLinkMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingCollectionLinkMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingCollectionLinkMetadata` object
/// from a json-compatible dictionary representation.
+ (DbxSharingCollectionLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
