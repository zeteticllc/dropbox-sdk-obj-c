///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxFilesMetadata.h"

@class DbxFilesFileMetadata;
@class DbxFilesFileSharingInfo;
@class DbxFilesMediaInfo;
@class DbxPropertiesPropertyGroup;

/// 
/// The `DbxFilesFileMetadata` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesFileMetadata : DbxFilesMetadata <DbxSerializable> 

/// A unique identifier for the file.
@property (nonatomic, copy) NSString * _Nonnull id_;

/// For files, this is the modification time set by the desktop client when the
/// file was added to Dropbox. Since this time is not verified (the Dropbox
/// server stores whatever the desktop client sends up), this should only be
/// used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
@property (nonatomic) NSDate * _Nonnull clientModified;

/// The last time the file was modified on Dropbox.
@property (nonatomic) NSDate * _Nonnull serverModified;

/// A unique identifier for the current revision of a file. This field is the
/// same rev as elsewhere in the API and can be used to detect changes and avoid
/// conflicts.
@property (nonatomic, copy) NSString * _Nonnull rev;

/// The file size in bytes.
@property (nonatomic, copy) NSNumber * _Nonnull size;

/// Additional information if the file is a photo or video.
@property (nonatomic) DbxFilesMediaInfo * _Nullable mediaInfo;

/// Set if this file is contained in a shared folder.
@property (nonatomic) DbxFilesFileSharingInfo * _Nullable sharingInfo;

/// Additional information if the file has custom properties with the property
/// template specified.
@property (nonatomic) NSArray<DbxPropertiesPropertyGroup *> * _Nullable propertyGroups;

/// This flag will only be present if include_has_explicit_shared_members  is
/// true in listFolder or getMetadata. If this  flag is present, it will be true
/// if this file has any explicit shared  members. This is different from
/// sharing_info in that this could be true  in the case where a file has
/// explicit members but is not contained within  a shared folder.
@property (nonatomic, copy) NSNumber * _Nullable hasExplicitSharedMembers;

/// Full constructor for the `FileMetadata` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_ clientModified:(NSDate * _Nonnull)clientModified serverModified:(NSDate * _Nonnull)serverModified rev:(NSString * _Nonnull)rev size:(NSNumber * _Nonnull)size pathLower:(NSString * _Nullable)pathLower pathDisplay:(NSString * _Nullable)pathDisplay parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId mediaInfo:(DbxFilesMediaInfo * _Nullable)mediaInfo sharingInfo:(DbxFilesFileSharingInfo * _Nullable)sharingInfo propertyGroups:(NSArray<DbxPropertiesPropertyGroup *> * _Nullable)propertyGroups hasExplicitSharedMembers:(NSNumber * _Nullable)hasExplicitSharedMembers;

/// Convenience constructor for the `FileMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name id_:(NSString * _Nonnull)id_ clientModified:(NSDate * _Nonnull)clientModified serverModified:(NSDate * _Nonnull)serverModified rev:(NSString * _Nonnull)rev size:(NSNumber * _Nonnull)size;

/// Returns a human-readable representation of the `DbxFilesFileMetadata`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesFileMetadata` struct.
/// 
@interface DbxFilesFileMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesFileMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesFileMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesFileMetadata` object from a
/// json-compatible dictionary representation.
+ (DbxFilesFileMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
