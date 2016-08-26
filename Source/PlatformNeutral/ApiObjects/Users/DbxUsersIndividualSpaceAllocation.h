///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxSerializable.h"

@class DbxUsersIndividualSpaceAllocation;

/// 
/// The `DbxUsersIndividualSpaceAllocation` struct.
/// 
/// This class implements the `DbxSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DbxUsersIndividualSpaceAllocation : NSObject <DbxSerializable> 

/// The total space allocated to the user's account (bytes).
@property (nonatomic, copy) NSNumber * _Nonnull allocated;

/// Full constructor for the `IndividualSpaceAllocation` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithAllocated:(NSNumber * _Nonnull)allocated;

/// Returns a human-readable representation of the
/// `DbxUsersIndividualSpaceAllocation` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DbxUsersIndividualSpaceAllocation` struct.
/// 
@interface DbxUsersIndividualSpaceAllocationSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DbxUsersIndividualSpaceAllocation` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DbxUsersIndividualSpaceAllocation * _Nonnull)obj;

/// Returns an instantiation of the `DbxUsersIndividualSpaceAllocation` object
/// from a json-compatible dictionary representation.
+ (DbxUsersIndividualSpaceAllocation * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
