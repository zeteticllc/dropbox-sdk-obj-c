///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERFolder;
@class DBPAPERFolderSharingPolicyType;
@class DBPAPERFoldersContainingPaperDoc;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FoldersContainingPaperDoc` struct.
///
/// Metadata about Paper folders containing the specififed Paper doc.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERFoldersContainingPaperDoc : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The sharing policy of the folder containing the Paper doc.
@property (nonatomic, readonly, nullable) DBPAPERFolderSharingPolicyType *folderSharingPolicyType;

/// The folder path. If present the first folder is the root folder.
@property (nonatomic, readonly, nullable) NSArray<DBPAPERFolder *> *folders;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

///
/// Convenience constructor.
///
/// @param folderSharingPolicyType The sharing policy of the folder containing
/// the Paper doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderSharingPolicyType:(nullable DBPAPERFolderSharingPolicyType *)folderSharingPolicyType;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param folderSharingPolicyType The sharing policy of the folder containing
/// the Paper doc.
/// @param folders The folder path. If present the first folder is the root
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderSharingPolicyType:(nullable DBPAPERFolderSharingPolicyType *)folderSharingPolicyType
                                        folders:(nullable NSArray<DBPAPERFolder *> *)folders;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FoldersContainingPaperDoc` struct.
///
@interface DBPAPERFoldersContainingPaperDocSerializer : NSObject

///
/// Serializes `DBPAPERFoldersContainingPaperDoc` instances.
///
/// @param instance An instance of the `DBPAPERFoldersContainingPaperDoc` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERFoldersContainingPaperDoc` API object.
///
+ (NSDictionary *)serialize:(DBPAPERFoldersContainingPaperDoc *)instance;

///
/// Deserializes `DBPAPERFoldersContainingPaperDoc` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERFoldersContainingPaperDoc` API object.
///
/// @return An instantiation of the `DBPAPERFoldersContainingPaperDoc` object.
///
+ (DBPAPERFoldersContainingPaperDoc *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
