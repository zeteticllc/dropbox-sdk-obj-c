///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamRevokeLinkedAppError;
@class DbxTeamRevokeLinkedAppStatus;

/// 
/// The `DbxTeamRevokeLinkedAppStatus` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamRevokeLinkedAppStatus : NSObject <DbxSerializable> 

/// Result of the revoking request
@property (nonatomic, copy) NSNumber * _Nonnull success;

/// The error cause in case of a failure
@property (nonatomic) DbxTeamRevokeLinkedAppError * _Nullable errorType;

/// Full constructor for the `RevokeLinkedAppStatus` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSuccess:(NSNumber * _Nonnull)success errorType:(DbxTeamRevokeLinkedAppError * _Nullable)errorType;

/// Convenience constructor for the `RevokeLinkedAppStatus` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithSuccess:(NSNumber * _Nonnull)success;

/// Returns a human-readable representation of the
/// `DbxTeamRevokeLinkedAppStatus` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamRevokeLinkedAppStatus` struct.
/// 
@interface DbxTeamRevokeLinkedAppStatusSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamRevokeLinkedAppStatus` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamRevokeLinkedAppStatus * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamRevokeLinkedAppStatus` object from a
/// json-compatible dictionary representation.
+ (DbxTeamRevokeLinkedAppStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
