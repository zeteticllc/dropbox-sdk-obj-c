///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamListMembersAppsError.h"

@implementation DbxTeamListMembersAppsError 

- (instancetype)initWithReset {
    self = [super init];
    if (self != nil) {
        _tag = TeamListMembersAppsErrorReset;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = TeamListMembersAppsErrorOther;
    }
    return self;
}

- (BOOL)isReset {
    return _tag == TeamListMembersAppsErrorReset;
}

- (BOOL)isOther {
    return _tag == TeamListMembersAppsErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case TeamListMembersAppsErrorReset:
           return @"TeamListMembersAppsErrorReset";
        case TeamListMembersAppsErrorOther:
           return @"TeamListMembersAppsErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamListMembersAppsErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamListMembersAppsErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamListMembersAppsErrorSerializer serialize:self] description];
}

@end


@implementation DbxTeamListMembersAppsErrorSerializer 

+ (NSDictionary *)serialize:(DbxTeamListMembersAppsError *)valueObj {
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

+ (DbxTeamListMembersAppsError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"reset"]) {
        return [[DbxTeamListMembersAppsError alloc] initWithReset];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxTeamListMembersAppsError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
