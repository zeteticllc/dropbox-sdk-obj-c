///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxTeamBaseDfbReport.h"

@class DbxTeamGetActivityReport;

/// 
/// The `DbxTeamGetActivityReport` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Activity Report Result. Each of the items in the storage report is an array
/// of values, one value per day. If there is no data for a day, then the value
/// will be None.
/// 
@interface DbxTeamGetActivityReport : DbxTeamBaseDfbReport <DbxSerializable> 

/// Array of total number of adds by team members.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull adds;

/// Array of number of edits by team members. If the same user edits the same
/// file multiple times this is counted as a single edit.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull edits;

/// Array of total number of deletes by team members.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull deletes;

/// Array of the number of users who have been active in the last 28 days.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull activeUsers28Day;

/// Array of the number of users who have been active in the last week.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull activeUsers7Day;

/// Array of the number of users who have been active in the last day.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull activeUsers1Day;

/// Array of the number of shared folders with some activity in the last 28
/// days.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull activeSharedFolders28Day;

/// Array of the number of shared folders with some activity in the last week.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull activeSharedFolders7Day;

/// Array of the number of shared folders with some activity in the last day.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull activeSharedFolders1Day;

/// Array of the number of shared links created.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedLinksCreated;

/// Array of the number of views by team users to shared links created by the
/// team.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedLinksViewedByTeam;

/// Array of the number of views by users outside of the team to shared links
/// created by the team.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedLinksViewedByOutsideUser;

/// Array of the number of views by non-logged-in users to shared links created
/// by the team.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedLinksViewedByNotLoggedIn;

/// Array of the total number of views to shared links created by the team.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedLinksViewedTotal;

/// Full constructor for the `GetActivityReport` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate adds:(NSArray<NSNumber *> * _Nonnull)adds edits:(NSArray<NSNumber *> * _Nonnull)edits deletes:(NSArray<NSNumber *> * _Nonnull)deletes activeUsers28Day:(NSArray<NSNumber *> * _Nonnull)activeUsers28Day activeUsers7Day:(NSArray<NSNumber *> * _Nonnull)activeUsers7Day activeUsers1Day:(NSArray<NSNumber *> * _Nonnull)activeUsers1Day activeSharedFolders28Day:(NSArray<NSNumber *> * _Nonnull)activeSharedFolders28Day activeSharedFolders7Day:(NSArray<NSNumber *> * _Nonnull)activeSharedFolders7Day activeSharedFolders1Day:(NSArray<NSNumber *> * _Nonnull)activeSharedFolders1Day sharedLinksCreated:(NSArray<NSNumber *> * _Nonnull)sharedLinksCreated sharedLinksViewedByTeam:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedByTeam sharedLinksViewedByOutsideUser:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedByOutsideUser sharedLinksViewedByNotLoggedIn:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedByNotLoggedIn sharedLinksViewedTotal:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedTotal;

/// Returns a human-readable representation of the `DbxTeamGetActivityReport`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamGetActivityReport` struct.
/// 
@interface DbxTeamGetActivityReportSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamGetActivityReport` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamGetActivityReport * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamGetActivityReport` object from a
/// json-compatible dictionary representation.
+ (DbxTeamGetActivityReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
