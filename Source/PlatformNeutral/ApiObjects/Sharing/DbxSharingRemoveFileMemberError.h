///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingMemberAccessLevelResult;
@class DbxSharingRemoveFileMemberError;
@class DbxSharingSharingFileAccessError;
@class DbxSharingSharingUserError;

/// 
/// The `DbxSharingRemoveFileMemberError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Errors for removeFileMember2.
/// 
@interface DbxSharingRemoveFileMemberError : NSObject <DbxSerializable> 

/// The `SharingRemoveFileMemberErrorTag` enum type represents the possible tag
/// states that the `DbxSharingRemoveFileMemberError` union can exist in.
typedef NS_ENUM(NSInteger, SharingRemoveFileMemberErrorTag) {
    /// (no description).
    SharingRemoveFileMemberErrorUserError,

    /// (no description).
    SharingRemoveFileMemberErrorAccessError,

    /// This member does not have explicit access to the file and therefore
    /// cannot be removed. The return value is the access that a user might have
    /// to the file from a parent folder.
    SharingRemoveFileMemberErrorNoExplicitAccess,

    /// (no description).
    SharingRemoveFileMemberErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingRemoveFileMemberErrorTag tag;

/// (no description).
@property (nonatomic) DbxSharingSharingUserError * _Nonnull userError;

/// (no description).
@property (nonatomic) DbxSharingSharingFileAccessError * _Nonnull accessError;

/// This member does not have explicit access to the file and therefore cannot
/// be removed. The return value is the access that a user might have to the
/// file from a parent folder.
@property (nonatomic) DbxSharingMemberAccessLevelResult * _Nonnull noExplicitAccess;


/// Initializes union class with tag state of `UserError`.
- (nonnull instancetype)initWithUserError:(DbxSharingSharingUserError * _Nonnull)userError;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DbxSharingSharingFileAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `NoExplicitAccess`.
- (nonnull instancetype)initWithNoExplicitAccess:(DbxSharingMemberAccessLevelResult * _Nonnull)noExplicitAccess;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `UserError`.
- (BOOL)isUserError;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `NoExplicitAccess`.
- (BOOL)isNoExplicitAccess;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingRemoveFileMemberError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingRemoveFileMemberError` union.
/// 
@interface DbxSharingRemoveFileMemberErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingRemoveFileMemberError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingRemoveFileMemberError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingRemoveFileMemberError` object
/// from a json-compatible dictionary representation.
+ (DbxSharingRemoveFileMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
