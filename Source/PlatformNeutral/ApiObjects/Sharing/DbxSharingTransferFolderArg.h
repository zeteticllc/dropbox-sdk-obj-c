///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingTransferFolderArg;

/// 
/// The `DbxSharingTransferFolderArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingTransferFolderArg : NSObject <DbxSerializable> 

/// The ID for the shared folder.
@property (nonatomic, copy) NSString * _Nonnull sharedFolderId;

/// A account or team member ID to transfer ownership to.
@property (nonatomic, copy) NSString * _Nonnull toDropboxId;

/// Full constructor for the `TransferFolderArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId toDropboxId:(NSString * _Nonnull)toDropboxId;

/// Returns a human-readable representation of the `DbxSharingTransferFolderArg`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingTransferFolderArg` struct.
/// 
@interface DbxSharingTransferFolderArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingTransferFolderArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingTransferFolderArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingTransferFolderArg` object from a
/// json-compatible dictionary representation.
+ (DbxSharingTransferFolderArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
