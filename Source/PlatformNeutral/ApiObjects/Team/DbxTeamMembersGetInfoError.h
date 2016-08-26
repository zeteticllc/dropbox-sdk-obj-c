///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamMembersGetInfoError;

/// 
/// The `DbxTeamMembersGetInfoError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamMembersGetInfoError : NSObject <DbxSerializable> 

/// The `TeamMembersGetInfoErrorTag` enum type represents the possible tag
/// states that the `DbxTeamMembersGetInfoError` union can exist in.
typedef NS_ENUM(NSInteger, TeamMembersGetInfoErrorTag) {
    /// (no description).
    TeamMembersGetInfoErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamMembersGetInfoErrorTag tag;


/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxTeamMembersGetInfoError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamMembersGetInfoError` union.
/// 
@interface DbxTeamMembersGetInfoErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamMembersGetInfoError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamMembersGetInfoError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamMembersGetInfoError` object from a
/// json-compatible dictionary representation.
+ (DbxTeamMembersGetInfoError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
