///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingFileErrorResult;

/// 
/// The `DbxSharingFileErrorResult` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingFileErrorResult : NSObject <DbxSerializable> 

/// The `SharingFileErrorResultTag` enum type represents the possible tag states
/// that the `DbxSharingFileErrorResult` union can exist in.
typedef NS_ENUM(NSInteger, SharingFileErrorResultTag) {
    /// File specified by id was not found.
    SharingFileErrorResultFileNotFoundError,

    /// User does not have permission to take the specified action on the file.
    SharingFileErrorResultInvalidFileActionError,

    /// User does not have permission to access file specified by file.Id.
    SharingFileErrorResultPermissionDeniedError,

    /// (no description).
    SharingFileErrorResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingFileErrorResultTag tag;

/// File specified by id was not found.
@property (nonatomic, copy) NSString * _Nonnull fileNotFoundError;

/// User does not have permission to take the specified action on the file.
@property (nonatomic, copy) NSString * _Nonnull invalidFileActionError;

/// User does not have permission to access file specified by file.Id.
@property (nonatomic, copy) NSString * _Nonnull permissionDeniedError;


/// Initializes union class with tag state of `FileNotFoundError`.
- (nonnull instancetype)initWithFileNotFoundError:(NSString * _Nonnull)fileNotFoundError;

/// Initializes union class with tag state of `InvalidFileActionError`.
- (nonnull instancetype)initWithInvalidFileActionError:(NSString * _Nonnull)invalidFileActionError;

/// Initializes union class with tag state of `PermissionDeniedError`.
- (nonnull instancetype)initWithPermissionDeniedError:(NSString * _Nonnull)permissionDeniedError;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `FileNotFoundError`.
- (BOOL)isFileNotFoundError;

/// Returns whether the union's current tag state has value
/// `InvalidFileActionError`.
- (BOOL)isInvalidFileActionError;

/// Returns whether the union's current tag state has value
/// `PermissionDeniedError`.
- (BOOL)isPermissionDeniedError;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxSharingFileErrorResult`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingFileErrorResult` union.
/// 
@interface DbxSharingFileErrorResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingFileErrorResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingFileErrorResult * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingFileErrorResult` object from a
/// json-compatible dictionary representation.
+ (DbxSharingFileErrorResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
