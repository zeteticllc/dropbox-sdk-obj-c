///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamDeviceSessionArg;
@class DbxTeamRevokeDesktopClientArg;
@class DbxTeamRevokeDeviceSessionArg;

/// 
/// The `DbxTeamRevokeDeviceSessionArg` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamRevokeDeviceSessionArg : NSObject <DbxSerializable> 

/// The `TeamRevokeDeviceSessionArgTag` enum type represents the possible tag
/// states that the `DbxTeamRevokeDeviceSessionArg` union can exist in.
typedef NS_ENUM(NSInteger, TeamRevokeDeviceSessionArgTag) {
    /// End an active session
    TeamRevokeDeviceSessionArgWebSession,

    /// Unlink a linked desktop device
    TeamRevokeDeviceSessionArgDesktopClient,

    /// Unlink a linked mobile device
    TeamRevokeDeviceSessionArgMobileClient,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamRevokeDeviceSessionArgTag tag;

/// End an active session
@property (nonatomic) DbxTeamDeviceSessionArg * _Nonnull webSession;

/// Unlink a linked desktop device
@property (nonatomic) DbxTeamRevokeDesktopClientArg * _Nonnull desktopClient;

/// Unlink a linked mobile device
@property (nonatomic) DbxTeamDeviceSessionArg * _Nonnull mobileClient;


/// Initializes union class with tag state of `WebSession`.
- (nonnull instancetype)initWithWebSession:(DbxTeamDeviceSessionArg * _Nonnull)webSession;

/// Initializes union class with tag state of `DesktopClient`.
- (nonnull instancetype)initWithDesktopClient:(DbxTeamRevokeDesktopClientArg * _Nonnull)desktopClient;

/// Initializes union class with tag state of `MobileClient`.
- (nonnull instancetype)initWithMobileClient:(DbxTeamDeviceSessionArg * _Nonnull)mobileClient;

/// Returns whether the union's current tag state has value `WebSession`.
- (BOOL)isWebSession;

/// Returns whether the union's current tag state has value `DesktopClient`.
- (BOOL)isDesktopClient;

/// Returns whether the union's current tag state has value `MobileClient`.
- (BOOL)isMobileClient;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxTeamRevokeDeviceSessionArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamRevokeDeviceSessionArg` union.
/// 
@interface DbxTeamRevokeDeviceSessionArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamRevokeDeviceSessionArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamRevokeDeviceSessionArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamRevokeDeviceSessionArg` object from
/// a json-compatible dictionary representation.
+ (DbxTeamRevokeDeviceSessionArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
