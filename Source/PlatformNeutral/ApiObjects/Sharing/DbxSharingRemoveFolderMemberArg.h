///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingMemberSelector;
@class DbxSharingRemoveFolderMemberArg;

/// 
/// The `DbxSharingRemoveFolderMemberArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingRemoveFolderMemberArg : NSObject <DbxSerializable> 

/// The ID for the shared folder.
@property (nonatomic, copy) NSString * _Nonnull sharedFolderId;

/// The member to remove from the folder.
@property (nonatomic) DbxSharingMemberSelector * _Nonnull member;

/// If true, the removed user will keep their copy of the folder after it's
/// unshared, assuming it was mounted. Otherwise, it will be removed from their
/// Dropbox. Also, this must be set to false when kicking a group.
@property (nonatomic, copy) NSNumber * _Nonnull leaveACopy;

/// Full constructor for the `RemoveFolderMemberArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId member:(DbxSharingMemberSelector * _Nonnull)member leaveACopy:(NSNumber * _Nonnull)leaveACopy;

/// Returns a human-readable representation of the
/// `DbxSharingRemoveFolderMemberArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingRemoveFolderMemberArg` struct.
/// 
@interface DbxSharingRemoveFolderMemberArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingRemoveFolderMemberArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingRemoveFolderMemberArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingRemoveFolderMemberArg` object
/// from a json-compatible dictionary representation.
+ (DbxSharingRemoveFolderMemberArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
