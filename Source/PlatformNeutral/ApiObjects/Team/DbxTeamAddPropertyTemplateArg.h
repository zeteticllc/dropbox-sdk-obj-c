///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"
#import "DbxPropertiesPropertyGroupTemplate.h"

@class DbxPropertiesPropertyFieldTemplate;
@class DbxTeamAddPropertyTemplateArg;

/// 
/// The `DbxTeamAddPropertyTemplateArg` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Arguments for adding property templates.
/// 
@interface DbxTeamAddPropertyTemplateArg : DbxPropertiesPropertyGroupTemplate <DbxSerializable> 

/// Full constructor for the `AddPropertyTemplateArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name description_:(NSString * _Nonnull)description_ fields:(NSArray<DbxPropertiesPropertyFieldTemplate *> * _Nonnull)fields;

/// Returns a human-readable representation of the
/// `DbxTeamAddPropertyTemplateArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxTeamAddPropertyTemplateArg` struct.
/// 
@interface DbxTeamAddPropertyTemplateArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxTeamAddPropertyTemplateArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxTeamAddPropertyTemplateArg * _Nonnull)obj;

/// Returns an instantiation of the `DbxTeamAddPropertyTemplateArg` object from
/// a json-compatible dictionary representation.
+ (DbxTeamAddPropertyTemplateArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
