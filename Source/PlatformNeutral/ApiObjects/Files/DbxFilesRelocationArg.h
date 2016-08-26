///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxFilesRelocationArg;

/// 
/// The `DbxFilesRelocationArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxFilesRelocationArg : NSObject <DbxSerializable> 

/// Path in the user's Dropbox to be copied or moved.
@property (nonatomic, copy) NSString * _Nonnull fromPath;

/// Path in the user's Dropbox that is the destination.
@property (nonatomic, copy) NSString * _Nonnull toPath;

/// Full constructor for the `RelocationArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithFromPath:(NSString * _Nonnull)fromPath toPath:(NSString * _Nonnull)toPath;

/// Returns a human-readable representation of the `DbxFilesRelocationArg`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxFilesRelocationArg` struct.
/// 
@interface DbxFilesRelocationArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxFilesRelocationArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxFilesRelocationArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxFilesRelocationArg` object from a
/// json-compatible dictionary representation.
+ (DbxFilesRelocationArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
