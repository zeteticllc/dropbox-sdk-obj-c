///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxFilesMetadata;
@class DbxFilesSearchMatch;
@class DbxFilesSearchMatchType;

/// 
/// The `DbxFilesSearchMatch` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesSearchMatch : NSObject <DbxSerializable> 

/// The type of the match.
@property (nonatomic) DbxFilesSearchMatchType * _Nonnull matchType;

/// The metadata for the matched file or folder.
@property (nonatomic) DbxFilesMetadata * _Nonnull metadata;

/// Full constructor for the `SearchMatch` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithMatchType:(DbxFilesSearchMatchType * _Nonnull)matchType metadata:(DbxFilesMetadata * _Nonnull)metadata;

/// Returns a human-readable representation of the `DbxFilesSearchMatch` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesSearchMatch` struct.
/// 
@interface DbxFilesSearchMatchSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesSearchMatch` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesSearchMatch * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesSearchMatch` object from a
/// json-compatible dictionary representation.
+ (DbxFilesSearchMatch * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
