///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamGroupAccessType;
@class DbxTeamGroupMemberInfo;
@class DbxTeamMemberProfile;

/// 
/// The `DbxTeamGroupMemberInfo` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Profile of group member, and role in group.
/// 
@interface DbxTeamGroupMemberInfo : NSObject <DbxSerializable> 

/// Profile of group member.
@property (nonatomic) DbxTeamMemberProfile * _Nonnull profile;

/// The role that the user has in the group.
@property (nonatomic) DbxTeamGroupAccessType * _Nonnull accessType;

/// Full constructor for the `GroupMemberInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithProfile:(DbxTeamMemberProfile * _Nonnull)profile accessType:(DbxTeamGroupAccessType * _Nonnull)accessType;

/// Returns a human-readable representation of the `DbxTeamGroupMemberInfo`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGroupMemberInfo` struct.
/// 
@interface DbxTeamGroupMemberInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGroupMemberInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupMemberInfo * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGroupMemberInfo` object from a
/// json-compatible dictionary representation.
+ (DbxTeamGroupMemberInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
