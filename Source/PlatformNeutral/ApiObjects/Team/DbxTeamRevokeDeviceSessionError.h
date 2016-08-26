///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamRevokeDeviceSessionError;

/// 
/// The `DbxTeamRevokeDeviceSessionError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamRevokeDeviceSessionError : NSObject <DbxSerializable> 

/// The `TeamRevokeDeviceSessionErrorTag` enum type represents the possible tag
/// states that the `DbxTeamRevokeDeviceSessionError` union can exist in.
typedef NS_ENUM(NSInteger, TeamRevokeDeviceSessionErrorTag) {
    /// Device session not found.
    TeamRevokeDeviceSessionErrorDeviceSessionNotFound,

    /// Member not found.
    TeamRevokeDeviceSessionErrorMemberNotFound,

    /// (no description).
    TeamRevokeDeviceSessionErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamRevokeDeviceSessionErrorTag tag;


/// Initializes union class with tag state of `DeviceSessionNotFound`.
- (nonnull instancetype)initWithDeviceSessionNotFound;

/// Initializes union class with tag state of `MemberNotFound`.
- (nonnull instancetype)initWithMemberNotFound;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value
/// `DeviceSessionNotFound`.
- (BOOL)isDeviceSessionNotFound;

/// Returns whether the union's current tag state has value `MemberNotFound`.
- (BOOL)isMemberNotFound;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxTeamRevokeDeviceSessionError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamRevokeDeviceSessionError` union.
/// 
@interface DbxTeamRevokeDeviceSessionErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamRevokeDeviceSessionError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamRevokeDeviceSessionError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamRevokeDeviceSessionError` object
/// from a json-compatible dictionary representation.
+ (DbxTeamRevokeDeviceSessionError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
