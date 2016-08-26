///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxPropertiesPropertyGroupTemplate.h"

@class DbxPropertiesGetPropertyTemplateResult;
@class DbxPropertiesPropertyFieldTemplate;

/// 
/// The `DbxPropertiesGetPropertyTemplateResult` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// The Property template for the specified template.
/// 
@interface DbxPropertiesGetPropertyTemplateResult : DbxPropertiesPropertyGroupTemplate <DbxSerializable> 

/// Full constructor for the `GetPropertyTemplateResult` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name description_:(NSString * _Nonnull)description_ fields:(NSArray<DbxPropertiesPropertyFieldTemplate *> * _Nonnull)fields;

/// Returns a human-readable representation of the
/// `DbxPropertiesGetPropertyTemplateResult` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxPropertiesGetPropertyTemplateResult`
/// struct.
/// 
@interface DbxPropertiesGetPropertyTemplateResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxPropertiesGetPropertyTemplateResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxPropertiesGetPropertyTemplateResult * _Nonnull)obj;

/// Returns an instantiation of the `DbxPropertiesGetPropertyTemplateResult`
/// object from a json-compatible dictionary representation.
+ (DbxPropertiesGetPropertyTemplateResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
