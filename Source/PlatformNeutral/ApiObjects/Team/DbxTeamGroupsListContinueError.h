///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamGroupsListContinueError;

/// 
/// The `DbxTeamGroupsListContinueError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamGroupsListContinueError : NSObject <DbxSerializable> 

/// The `TeamGroupsListContinueErrorTag` enum type represents the possible tag
/// states that the `DbxTeamGroupsListContinueError` union can exist in.
typedef NS_ENUM(NSInteger, TeamGroupsListContinueErrorTag) {
    /// The cursor is invalid.
    TeamGroupsListContinueErrorInvalidCursor,

    /// (no description).
    TeamGroupsListContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamGroupsListContinueErrorTag tag;


/// Initializes union class with tag state of `InvalidCursor`.
- (nonnull instancetype)initWithInvalidCursor;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `InvalidCursor`.
- (BOOL)isInvalidCursor;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxTeamGroupsListContinueError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGroupsListContinueError` union.
/// 
@interface DbxTeamGroupsListContinueErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGroupsListContinueError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupsListContinueError * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGroupsListContinueError` object from
/// a json-compatible dictionary representation.
+ (DbxTeamGroupsListContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
