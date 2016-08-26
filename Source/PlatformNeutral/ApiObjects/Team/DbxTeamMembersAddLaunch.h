///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxTeamMemberAddResult;
@class DbxTeamMembersAddLaunch;

/// 
/// The `DbxTeamMembersAddLaunch` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxTeamMembersAddLaunch : NSObject <DbxSerializable> 

/// The `TeamMembersAddLaunchTag` enum type represents the possible tag states
/// that the `DbxTeamMembersAddLaunch` union can exist in.
typedef NS_ENUM(NSInteger, TeamMembersAddLaunchTag) {
    /// This response indicates that the processing is asynchronous. The string
    /// is an id that can be used to obtain the status of the asynchronous job.
    TeamMembersAddLaunchAsyncJobId,

    /// (no description).
    TeamMembersAddLaunchComplete,

};

/// Represents the union's current tag state.
@property (nonatomic) TeamMembersAddLaunchTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job.
@property (nonatomic, copy) NSString * _Nonnull asyncJobId;

/// (no description).
@property (nonatomic) NSArray<DbxTeamMemberAddResult *> * _Nonnull complete;


/// Initializes union class with tag state of `AsyncJobId`.
- (nonnull instancetype)initWithAsyncJobId:(NSString * _Nonnull)asyncJobId;

/// Initializes union class with tag state of `Complete`.
- (nonnull instancetype)initWithComplete:(NSArray<DbxTeamMemberAddResult *> * _Nonnull)complete;

/// Returns whether the union's current tag state has value `AsyncJobId`.
- (BOOL)isAsyncJobId;

/// Returns whether the union's current tag state has value `Complete`.
- (BOOL)isComplete;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DbxTeamMembersAddLaunch`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamMembersAddLaunch` union.
/// 
@interface DbxTeamMembersAddLaunchSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamMembersAddLaunch` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamMembersAddLaunch * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamMembersAddLaunch` object from a
/// json-compatible dictionary representation.
+ (DbxTeamMembersAddLaunch * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
