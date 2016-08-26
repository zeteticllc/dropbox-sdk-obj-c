///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingListFilesContinueArg;

/// 
/// The `DbxSharingListFilesContinueArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Arguments for listReceivedFilesContinue.
/// 
@interface DbxSharingListFilesContinueArg : NSObject <DbxSerializable> 

/// Cursor in cursor in ListFilesResult
@property (nonatomic, copy) NSString * _Nonnull cursor;

/// Full constructor for the `ListFilesContinueArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithCursor:(NSString * _Nonnull)cursor;

/// Returns a human-readable representation of the
/// `DbxSharingListFilesContinueArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingListFilesContinueArg` struct.
/// 
@interface DbxSharingListFilesContinueArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingListFilesContinueArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingListFilesContinueArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingListFilesContinueArg` object from
/// a json-compatible dictionary representation.
+ (DbxSharingListFilesContinueArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
