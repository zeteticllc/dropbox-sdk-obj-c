///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingListFileMembersError;
@class DbxSharingSharingFileAccessError;
@class DbxSharingSharingUserError;

/// 
/// The `DbxSharingListFileMembersError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error for listFileMembers.
/// 
@interface DbxSharingListFileMembersError : NSObject <DbxSerializable> 

/// The `SharingListFileMembersErrorTag` enum type represents the possible tag
/// states that the `DbxSharingListFileMembersError` union can exist in.
typedef NS_ENUM(NSInteger, SharingListFileMembersErrorTag) {
    /// (no description).
    SharingListFileMembersErrorUserError,

    /// (no description).
    SharingListFileMembersErrorAccessError,

    /// (no description).
    SharingListFileMembersErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingListFileMembersErrorTag tag;

/// (no description).
@property (nonatomic) DbxSharingSharingUserError * _Nonnull userError;

/// (no description).
@property (nonatomic) DbxSharingSharingFileAccessError * _Nonnull accessError;


/// Initializes union class with tag state of `UserError`.
- (nonnull instancetype)initWithUserError:(DbxSharingSharingUserError * _Nonnull)userError;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DbxSharingSharingFileAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `UserError`.
- (BOOL)isUserError;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingListFileMembersError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingListFileMembersError` union.
/// 
@interface DbxSharingListFileMembersErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingListFileMembersError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingListFileMembersError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingListFileMembersError` object from
/// a json-compatible dictionary representation.
+ (DbxSharingListFileMembersError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
