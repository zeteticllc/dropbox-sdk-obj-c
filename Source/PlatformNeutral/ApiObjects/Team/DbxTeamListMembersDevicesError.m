///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamListMembersDevicesError.h"

@implementation DbxTeamListMembersDevicesError 

- (instancetype)initWithReset {
    self = [super init];
    if (self != nil) {
        _tag = TeamListMembersDevicesErrorReset;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = TeamListMembersDevicesErrorOther;
    }
    return self;
}

- (BOOL)isReset {
    return _tag == TeamListMembersDevicesErrorReset;
}

- (BOOL)isOther {
    return _tag == TeamListMembersDevicesErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case TeamListMembersDevicesErrorReset:
           return @"TeamListMembersDevicesErrorReset";
        case TeamListMembersDevicesErrorOther:
           return @"TeamListMembersDevicesErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamListMembersDevicesErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamListMembersDevicesErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamListMembersDevicesErrorSerializer serialize:self] description];
}

@end


@implementation DbxTeamListMembersDevicesErrorSerializer 

+ (NSDictionary *)serialize:(DbxTeamListMembersDevicesError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isReset]) {
        jsonDict[@".tag"] = @"reset";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamListMembersDevicesError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"reset"]) {
        return [[DbxTeamListMembersDevicesError alloc] initWithReset];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxTeamListMembersDevicesError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
