///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESUploadSessionAppendArg;
@class DBFILESUploadSessionCursor;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UploadSessionAppendArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUploadSessionAppendArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Contains the upload session ID and the offset.
@property (nonatomic, readonly) DBFILESUploadSessionCursor *cursor;

/// If true, the current session will be closed, at which point you won't be
/// able to call `uploadSessionAppendV2` anymore with the current session.
@property (nonatomic, readonly) NSNumber *close;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param cursor Contains the upload session ID and the offset.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(DBFILESUploadSessionCursor *)cursor;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Contains the upload session ID and the offset.
/// @param close If true, the current session will be closed, at which point you
/// won't be able to call `uploadSessionAppendV2` anymore with the current
/// session.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(DBFILESUploadSessionCursor *)cursor close:(nullable NSNumber *)close;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UploadSessionAppendArg` struct.
///
@interface DBFILESUploadSessionAppendArgSerializer : NSObject

///
/// Serializes `DBFILESUploadSessionAppendArg` instances.
///
/// @param instance An instance of the `DBFILESUploadSessionAppendArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUploadSessionAppendArg` API object.
///
+ (NSDictionary *)serialize:(DBFILESUploadSessionAppendArg *)instance;

///
/// Deserializes `DBFILESUploadSessionAppendArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUploadSessionAppendArg` API object.
///
/// @return An instantiation of the `DBFILESUploadSessionAppendArg` object.
///
+ (DBFILESUploadSessionAppendArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
