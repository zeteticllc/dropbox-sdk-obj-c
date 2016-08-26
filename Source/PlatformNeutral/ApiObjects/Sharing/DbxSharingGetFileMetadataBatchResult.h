///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingGetFileMetadataBatchResult;
@class DbxSharingGetFileMetadataIndividualResult;

/// 
/// The `DbxSharingGetFileMetadataBatchResult` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Per file results of getFileMetadataBatch
/// 
@interface DbxSharingGetFileMetadataBatchResult : NSObject <DbxSerializable> 

/// This is the input file identifier corresponding to one of files in
/// GetFileMetadataBatchArg.
@property (nonatomic, copy) NSString * _Nonnull file;

/// The result for this particular file
@property (nonatomic) DbxSharingGetFileMetadataIndividualResult * _Nonnull result;

/// Full constructor for the `GetFileMetadataBatchResult` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file result:(DbxSharingGetFileMetadataIndividualResult * _Nonnull)result;

/// Returns a human-readable representation of the
/// `DbxSharingGetFileMetadataBatchResult` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingGetFileMetadataBatchResult`
/// struct.
/// 
@interface DbxSharingGetFileMetadataBatchResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingGetFileMetadataBatchResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingGetFileMetadataBatchResult * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingGetFileMetadataBatchResult`
/// object from a json-compatible dictionary representation.
+ (DbxSharingGetFileMetadataBatchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
