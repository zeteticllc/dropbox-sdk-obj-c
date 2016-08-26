///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingListFoldersContinueError;

/// 
/// The `DbxSharingListFoldersContinueError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingListFoldersContinueError : NSObject <DbxSerializable> 

/// The `SharingListFoldersContinueErrorTag` enum type represents the possible
/// tag states that the `DbxSharingListFoldersContinueError` union can exist in.
typedef NS_ENUM(NSInteger, SharingListFoldersContinueErrorTag) {
    /// cursor in ListFoldersContinueArg is invalid.
    SharingListFoldersContinueErrorInvalidCursor,

    /// (no description).
    SharingListFoldersContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingListFoldersContinueErrorTag tag;


/// Initializes union class with tag state of `InvalidCursor`.
- (nonnull instancetype)initWithInvalidCursor;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `InvalidCursor`.
- (BOOL)isInvalidCursor;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingListFoldersContinueError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingListFoldersContinueError` union.
/// 
@interface DbxSharingListFoldersContinueErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingListFoldersContinueError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingListFoldersContinueError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingListFoldersContinueError` object
/// from a json-compatible dictionary representation.
+ (DbxSharingListFoldersContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
