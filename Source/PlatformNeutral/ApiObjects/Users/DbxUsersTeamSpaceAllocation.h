///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxUsersTeamSpaceAllocation;

/// 
/// The `DbxUsersTeamSpaceAllocation` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxUsersTeamSpaceAllocation : NSObject <DbxSerializable> 

/// The total space currently used by the user's team (bytes).
@property (nonatomic, copy) NSNumber * _Nonnull used;

/// The total space allocated to the user's team (bytes).
@property (nonatomic, copy) NSNumber * _Nonnull allocated;

/// Full constructor for the `TeamSpaceAllocation` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithUsed:(NSNumber * _Nonnull)used allocated:(NSNumber * _Nonnull)allocated;

/// Returns a human-readable representation of the `DbxUsersTeamSpaceAllocation`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxUsersTeamSpaceAllocation` struct.
/// 
@interface DbxUsersTeamSpaceAllocationSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxUsersTeamSpaceAllocation` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxUsersTeamSpaceAllocation * _Nonnull)obj;

/// Returns an instantiation of the `DbxUsersTeamSpaceAllocation` object from a
/// json-compatible dictionary representation.
+ (DbxUsersTeamSpaceAllocation * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
