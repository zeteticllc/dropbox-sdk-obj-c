///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxUsersAccountType.h"

@implementation DbxUsersAccountType 

- (instancetype)initWithBasic {
    self = [super init];
    if (self != nil) {
        _tag = UsersAccountTypeBasic;
    }
    return self;
}

- (instancetype)initWithPro {
    self = [super init];
    if (self != nil) {
        _tag = UsersAccountTypePro;
    }
    return self;
}

- (instancetype)initWithBusiness {
    self = [super init];
    if (self != nil) {
        _tag = UsersAccountTypeBusiness;
    }
    return self;
}

- (BOOL)isBasic {
    return _tag == UsersAccountTypeBasic;
}

- (BOOL)isPro {
    return _tag == UsersAccountTypePro;
}

- (BOOL)isBusiness {
    return _tag == UsersAccountTypeBusiness;
}

- (NSString *)getTagName {
    switch (_tag) {
        case UsersAccountTypeBasic:
           return @"UsersAccountTypeBasic";
        case UsersAccountTypePro:
           return @"UsersAccountTypePro";
        case UsersAccountTypeBusiness:
           return @"UsersAccountTypeBusiness";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxUsersAccountTypeSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxUsersAccountTypeSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxUsersAccountTypeSerializer serialize:self] description];
}

@end


@implementation DbxUsersAccountTypeSerializer 

+ (NSDictionary *)serialize:(DbxUsersAccountType *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isBasic]) {
        jsonDict[@".tag"] = @"basic";
    }
    else if ([valueObj isPro]) {
        jsonDict[@".tag"] = @"pro";
    }
    else if ([valueObj isBusiness]) {
        jsonDict[@".tag"] = @"business";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxUsersAccountType *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"basic"]) {
        return [[DbxUsersAccountType alloc] initWithBasic];
    }
    if ([tag isEqualToString:@"pro"]) {
        return [[DbxUsersAccountType alloc] initWithPro];
    }
    if ([tag isEqualToString:@"business"]) {
        return [[DbxUsersAccountType alloc] initWithBusiness];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
