///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamGroupMembersSelector;
@class DbxTeamGroupSelector;
@class DbxTeamUsersSelectorArg;

/// 
/// The `DbxTeamGroupMembersSelector` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Argument for selecting a group and a list of users.
/// 
@interface DbxTeamGroupMembersSelector : NSObject <DbxSerializable> 

/// Specify a group.
@property (nonatomic) DbxTeamGroupSelector * _Nonnull group;

/// A list of users that are members of group.
@property (nonatomic) DbxTeamUsersSelectorArg * _Nonnull users;

/// Full constructor for the `GroupMembersSelector` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithGroup:(DbxTeamGroupSelector * _Nonnull)group users:(DbxTeamUsersSelectorArg * _Nonnull)users;

/// Returns a human-readable representation of the `DbxTeamGroupMembersSelector`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGroupMembersSelector` struct.
/// 
@interface DbxTeamGroupMembersSelectorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGroupMembersSelector` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupMembersSelector * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGroupMembersSelector` object from a
/// json-compatible dictionary representation.
+ (DbxTeamGroupMembersSelector * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
