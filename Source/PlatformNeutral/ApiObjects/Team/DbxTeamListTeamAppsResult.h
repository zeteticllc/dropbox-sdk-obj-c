///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamListTeamAppsResult;
@class DbxTeamMemberLinkedApps;

/// 
/// The `DbxTeamListTeamAppsResult` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Information returned by linkedAppsListTeamLinkedApps.
/// 
@interface DbxTeamListTeamAppsResult : NSObject <DbxSerializable> 

/// The linked applications of each member of the team
@property (nonatomic) NSArray<DbxTeamMemberLinkedApps *> * _Nonnull apps;

/// If true, then there are more apps available. Pass the cursor to
/// linkedAppsListTeamLinkedApps to retrieve the rest.
@property (nonatomic, copy) NSNumber * _Nonnull hasMore;

/// Pass the cursor into linkedAppsListTeamLinkedApps to receive the next sub
/// list of team's applications.
@property (nonatomic, copy) NSString * _Nullable cursor;

/// Full constructor for the `ListTeamAppsResult` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithApps:(NSArray<DbxTeamMemberLinkedApps *> * _Nonnull)apps hasMore:(NSNumber * _Nonnull)hasMore cursor:(NSString * _Nullable)cursor;

/// Convenience constructor for the `ListTeamAppsResult` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithApps:(NSArray<DbxTeamMemberLinkedApps *> * _Nonnull)apps hasMore:(NSNumber * _Nonnull)hasMore;

/// Returns a human-readable representation of the `DbxTeamListTeamAppsResult`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamListTeamAppsResult` struct.
/// 
@interface DbxTeamListTeamAppsResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamListTeamAppsResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamListTeamAppsResult * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamListTeamAppsResult` object from a
/// json-compatible dictionary representation.
+ (DbxTeamListTeamAppsResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
