///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxFilesInvalidPropertyGroupError;
@class DbxFilesUploadErrorWithProperties;
@class DbxFilesUploadWriteFailed;

/// 
/// The `DbxFilesUploadErrorWithProperties` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesUploadErrorWithProperties : NSObject <DbxSerializable> 

/// The `FilesUploadErrorWithPropertiesTag` enum type represents the possible
/// tag states that the `DbxFilesUploadErrorWithProperties` union can exist in.
typedef NS_ENUM(NSInteger, FilesUploadErrorWithPropertiesTag) {
    /// Unable to save the uploaded contents to a file.
    FilesUploadErrorWithPropertiesPath,

    /// (no description).
    FilesUploadErrorWithPropertiesOther,

    /// (no description).
    FilesUploadErrorWithPropertiesPropertiesError,

};

/// Represents the union's current tag state.
@property (nonatomic) FilesUploadErrorWithPropertiesTag tag;

/// Unable to save the uploaded contents to a file.
@property (nonatomic) DbxFilesUploadWriteFailed * _Nonnull path;

/// (no description).
@property (nonatomic) DbxFilesInvalidPropertyGroupError * _Nonnull propertiesError;


/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DbxFilesUploadWriteFailed * _Nonnull)path;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `PropertiesError`.
- (nonnull instancetype)initWithPropertiesError:(DbxFilesInvalidPropertyGroupError * _Nonnull)propertiesError;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `PropertiesError`.
- (BOOL)isPropertiesError;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxFilesUploadErrorWithProperties` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesUploadErrorWithProperties` union.
/// 
@interface DbxFilesUploadErrorWithPropertiesSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesUploadErrorWithProperties` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesUploadErrorWithProperties * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesUploadErrorWithProperties` object
/// from a json-compatible dictionary representation.
+ (DbxFilesUploadErrorWithProperties * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
