///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGroupMembershipInfo;
@class DBSHARINGInviteeMembershipInfo;
@class DBSHARINGSharedFileMembers;
@class DBSHARINGUserMembershipInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFileMembers` struct.
///
/// Shared file user, group, and invitee membership. Used for the results of
/// `listFileMembers` and `listFileMembersContinue`, and used as part of the
/// results for `listFileMembersBatch`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedFileMembers : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The list of user members of the shared file.
@property (nonatomic, readonly) NSArray<DBSHARINGUserMembershipInfo *> *users;

/// The list of group members of the shared file.
@property (nonatomic, readonly) NSArray<DBSHARINGGroupMembershipInfo *> *groups;

/// The list of invited members of a file, but have not logged in and claimed
/// this.
@property (nonatomic, readonly) NSArray<DBSHARINGInviteeMembershipInfo *> *invitees;

/// Present if there are additional shared file members that have not been
/// returned yet. Pass the cursor into `listFileMembersContinue` to list
/// additional members.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param users The list of user members of the shared file.
/// @param groups The list of group members of the shared file.
/// @param invitees The list of invited members of a file, but have not logged
/// in and claimed this.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> *)users
                       groups:(NSArray<DBSHARINGGroupMembershipInfo *> *)groups
                     invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> *)invitees;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param users The list of user members of the shared file.
/// @param groups The list of group members of the shared file.
/// @param invitees The list of invited members of a file, but have not logged
/// in and claimed this.
/// @param cursor Present if there are additional shared file members that have
/// not been returned yet. Pass the cursor into `listFileMembersContinue` to
/// list additional members.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> *)users
                       groups:(NSArray<DBSHARINGGroupMembershipInfo *> *)groups
                     invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> *)invitees
                       cursor:(nullable NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFileMembers` struct.
///
@interface DBSHARINGSharedFileMembersSerializer : NSObject

///
/// Serializes `DBSHARINGSharedFileMembers` instances.
///
/// @param instance An instance of the `DBSHARINGSharedFileMembers` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedFileMembers` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGSharedFileMembers *)instance;

///
/// Deserializes `DBSHARINGSharedFileMembers` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedFileMembers` API object.
///
/// @return An instantiation of the `DBSHARINGSharedFileMembers` object.
///
+ (DBSHARINGSharedFileMembers *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
