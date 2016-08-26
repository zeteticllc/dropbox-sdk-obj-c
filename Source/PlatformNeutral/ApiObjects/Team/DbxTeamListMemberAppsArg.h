///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamListMemberAppsArg;

/// 
/// The `DbxTeamListMemberAppsArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamListMemberAppsArg : NSObject <DbxSerializable> 

/// The team member id
@property (nonatomic, copy) NSString * _Nonnull teamMemberId;

/// Full constructor for the `ListMemberAppsArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId;

/// Returns a human-readable representation of the `DbxTeamListMemberAppsArg`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamListMemberAppsArg` struct.
/// 
@interface DbxTeamListMemberAppsArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamListMemberAppsArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamListMemberAppsArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamListMemberAppsArg` object from a
/// json-compatible dictionary representation.
+ (DbxTeamListMemberAppsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
