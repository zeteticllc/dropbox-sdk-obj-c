///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingInsufficientQuotaAmounts;

/// 
/// The `DbxSharingInsufficientQuotaAmounts` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingInsufficientQuotaAmounts : NSObject <DbxSerializable> 

/// The amount of space needed to add the item (the size of the item).
@property (nonatomic, copy) NSNumber * _Nonnull spaceNeeded;

/// The amount of extra space needed to add the item.
@property (nonatomic, copy) NSNumber * _Nonnull spaceShortage;

/// The amount of space left in the user's Dropbox, less than space_needed.
@property (nonatomic, copy) NSNumber * _Nonnull spaceLeft;

/// Full constructor for the `InsufficientQuotaAmounts` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSpaceNeeded:(NSNumber * _Nonnull)spaceNeeded spaceShortage:(NSNumber * _Nonnull)spaceShortage spaceLeft:(NSNumber * _Nonnull)spaceLeft;

/// Returns a human-readable representation of the
/// `DbxSharingInsufficientQuotaAmounts` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingInsufficientQuotaAmounts` struct.
/// 
@interface DbxSharingInsufficientQuotaAmountsSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingInsufficientQuotaAmounts` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingInsufficientQuotaAmounts * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingInsufficientQuotaAmounts` object
/// from a json-compatible dictionary representation.
+ (DbxSharingInsufficientQuotaAmounts * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
