///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxFilesUploadSessionLookupError;
@class DbxFilesUploadSessionOffsetError;

/// 
/// The `DbxFilesUploadSessionLookupError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesUploadSessionLookupError : NSObject <DbxSerializable> 

/// The `FilesUploadSessionLookupErrorTag` enum type represents the possible tag
/// states that the `DbxFilesUploadSessionLookupError` union can exist in.
typedef NS_ENUM(NSInteger, FilesUploadSessionLookupErrorTag) {
    /// The upload session id was not found.
    FilesUploadSessionLookupErrorNotFound,

    /// The specified offset was incorrect. See the value for the correct
    /// offset. (This error may occur when a previous request was received and
    /// processed successfully but the client did not receive the response, e.g.
    /// due to a network error.)
    FilesUploadSessionLookupErrorIncorrectOffset,

    /// You are attempting to append data to an upload session that has alread
    /// been closed (i.e. committed).
    FilesUploadSessionLookupErrorClosed,

    /// The session must be closed before calling upload_session/finish_batch.
    FilesUploadSessionLookupErrorNotClosed,

    /// (no description).
    FilesUploadSessionLookupErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) FilesUploadSessionLookupErrorTag tag;

/// The specified offset was incorrect. See the value for the correct offset.
/// (This error may occur when a previous request was received and processed
/// successfully but the client did not receive the response, e.g. due to a
/// network error.)
@property (nonatomic) DbxFilesUploadSessionOffsetError * _Nonnull incorrectOffset;


/// Initializes union class with tag state of `NotFound`.
- (nonnull instancetype)initWithNotFound;

/// Initializes union class with tag state of `IncorrectOffset`.
- (nonnull instancetype)initWithIncorrectOffset:(DbxFilesUploadSessionOffsetError * _Nonnull)incorrectOffset;

/// Initializes union class with tag state of `Closed`.
- (nonnull instancetype)initWithClosed;

/// Initializes union class with tag state of `NotClosed`.
- (nonnull instancetype)initWithNotClosed;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `NotFound`.
- (BOOL)isNotFound;

/// Returns whether the union's current tag state has value `IncorrectOffset`.
- (BOOL)isIncorrectOffset;

/// Returns whether the union's current tag state has value `Closed`.
- (BOOL)isClosed;

/// Returns whether the union's current tag state has value `NotClosed`.
- (BOOL)isNotClosed;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxFilesUploadSessionLookupError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesUploadSessionLookupError` union.
/// 
@interface DbxFilesUploadSessionLookupErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesUploadSessionLookupError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesUploadSessionLookupError * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesUploadSessionLookupError` object
/// from a json-compatible dictionary representation.
+ (DbxFilesUploadSessionLookupError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
