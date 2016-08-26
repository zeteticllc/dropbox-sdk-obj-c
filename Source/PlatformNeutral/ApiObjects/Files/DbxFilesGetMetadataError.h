///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxFilesGetMetadataError;
@class DbxFilesLookupError;

/// 
/// The `DbxFilesGetMetadataError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesGetMetadataError : NSObject <DbxSerializable> 

/// The `FilesGetMetadataErrorTag` enum type represents the possible tag states
/// that the `DbxFilesGetMetadataError` union can exist in.
typedef NS_ENUM(NSInteger, FilesGetMetadataErrorTag) {
    /// (no description).
    FilesGetMetadataErrorPath,

};

/// Represents the union's current tag state.
@property (nonatomic) FilesGetMetadataErrorTag tag;

/// (no description).
@property (nonatomic) DbxFilesLookupError * _Nonnull path;


/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DbxFilesLookupError * _Nonnull)path;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxFilesGetMetadataError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesGetMetadataError` union.
/// 
@interface DbxFilesGetMetadataErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesGetMetadataError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesGetMetadataError * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesGetMetadataError` object from a
/// json-compatible dictionary representation.
+ (DbxFilesGetMetadataError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
