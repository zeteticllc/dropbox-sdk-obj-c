///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxSharingSharedLinkSettingsError;

/// 
/// The `DbxSharingSharedLinkSettingsError` union.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxSharingSharedLinkSettingsError : NSObject <DbxSerializable> 

/// The `SharingSharedLinkSettingsErrorTag` enum type represents the possible
/// tag states that the `DbxSharingSharedLinkSettingsError` union can exist in.
typedef NS_ENUM(NSInteger, SharingSharedLinkSettingsErrorTag) {
    /// The given settings are invalid (for example, all attributes of the
    /// SharedLinkSettings are empty, the requested visibility is password in
    /// RequestedVisibility but the linkPassword in SharedLinkSettings is
    /// missing, expires in SharedLinkSettings is set to the past, etc.)
    SharingSharedLinkSettingsErrorInvalidSettings,

    /// User is not allowed to modify the settings of this link. Note that basic
    /// users can only set public in RequestedVisibility as the
    /// requestedVisibility in SharedLinkSettings and cannot set expires in
    /// SharedLinkSettings
    SharingSharedLinkSettingsErrorNotAuthorized,

};

/// Represents the union's current tag state.
@property (nonatomic) SharingSharedLinkSettingsErrorTag tag;


/// Initializes union class with tag state of `InvalidSettings`.
- (nonnull instancetype)initWithInvalidSettings;

/// Initializes union class with tag state of `NotAuthorized`.
- (nonnull instancetype)initWithNotAuthorized;

/// Returns whether the union's current tag state has value `InvalidSettings`.
- (BOOL)isInvalidSettings;

/// Returns whether the union's current tag state has value `NotAuthorized`.
- (BOOL)isNotAuthorized;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DbxSharingSharedLinkSettingsError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxSharingSharedLinkSettingsError` union.
/// 
@interface DbxSharingSharedLinkSettingsErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxSharingSharedLinkSettingsError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxSharingSharedLinkSettingsError * _Nonnull)obj;

/// Returns an instantiation of the `DbxSharingSharedLinkSettingsError` object
/// from a json-compatible dictionary representation.
+ (DbxSharingSharedLinkSettingsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
