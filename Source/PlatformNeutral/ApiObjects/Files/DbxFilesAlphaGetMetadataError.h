///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxFilesAlphaGetMetadataError;
@class DbxFilesLookUpPropertiesError;
@class DbxFilesLookupError;

/// 
/// The `DbxFilesAlphaGetMetadataError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesAlphaGetMetadataError : NSObject <DbxSerializable> 

/// The `FilesAlphaGetMetadataErrorTag` enum type represents the possible tag
/// states that the `DbxFilesAlphaGetMetadataError` union can exist in.
typedef NS_ENUM(NSInteger, FilesAlphaGetMetadataErrorTag) {
    /// (no description).
    FilesAlphaGetMetadataErrorPath,

    /// (no description).
    FilesAlphaGetMetadataErrorPropertiesError,

};

/// Represents the union's current tag state.
@property (nonatomic) FilesAlphaGetMetadataErrorTag tag;

/// (no description).
@property (nonatomic) DbxFilesLookupError * _Nonnull path;

/// (no description).
@property (nonatomic) DbxFilesLookUpPropertiesError * _Nonnull propertiesError;


/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DbxFilesLookupError * _Nonnull)path;

/// Initializes union class with tag state of `PropertiesError`.
- (nonnull instancetype)initWithPropertiesError:(DbxFilesLookUpPropertiesError * _Nonnull)propertiesError;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value `PropertiesError`.
- (BOOL)isPropertiesError;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxFilesAlphaGetMetadataError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesAlphaGetMetadataError` union.
/// 
@interface DbxFilesAlphaGetMetadataErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesAlphaGetMetadataError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesAlphaGetMetadataError * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesAlphaGetMetadataError` object from
/// a json-compatible dictionary representation.
+ (DbxFilesAlphaGetMetadataError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
