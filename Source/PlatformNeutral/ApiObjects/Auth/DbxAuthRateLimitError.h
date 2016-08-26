///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxAuthRateLimitError;
@class DbxAuthRateLimitReason;

/// 
/// The `DbxAuthRateLimitError` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error occurred because the app is being rate limited.
/// 
@interface DbxAuthRateLimitError : NSObject <DbxSerializable> 

/// The reason why the app is being rate limited.
@property (nonatomic) DbxAuthRateLimitReason * _Nonnull reason;

/// The number of seconds that the app should wait before making another
/// request.
@property (nonatomic, copy) NSNumber * _Nonnull retryAfter;

/// Full constructor for the `RateLimitError` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithReason:(DbxAuthRateLimitReason * _Nonnull)reason retryAfter:(NSNumber * _Nullable)retryAfter;

/// Convenience constructor for the `RateLimitError` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithReason:(DbxAuthRateLimitReason * _Nonnull)reason;

/// Returns a human-readable representation of the `DbxAuthRateLimitError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxAuthRateLimitError` struct.
/// 
@interface DbxAuthRateLimitErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxAuthRateLimitError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxAuthRateLimitError * _Nonnull)obj;

/// Returns an instantiation of the `DbxAuthRateLimitError` object from a
/// json-compatible dictionary representation.
+ (DbxAuthRateLimitError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
