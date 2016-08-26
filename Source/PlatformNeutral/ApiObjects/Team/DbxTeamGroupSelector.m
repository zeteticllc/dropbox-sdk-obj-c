///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamGroupSelector.h"

@implementation DbxTeamGroupSelector 

- (instancetype)initWithGroupId:(NSString *)groupId {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupSelectorGroupId;
        _groupId = groupId;
    }
    return self;
}

- (instancetype)initWithGroupExternalId:(NSString *)groupExternalId {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupSelectorGroupExternalId;
        _groupExternalId = groupExternalId;
    }
    return self;
}

- (BOOL)isGroupId {
    return _tag == TeamGroupSelectorGroupId;
}

- (BOOL)isGroupExternalId {
    return _tag == TeamGroupSelectorGroupExternalId;
}

- (NSString *)getTagName {
    switch (_tag) {
        case TeamGroupSelectorGroupId:
           return @"TeamGroupSelectorGroupId";
        case TeamGroupSelectorGroupExternalId:
           return @"TeamGroupSelectorGroupExternalId";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

- (NSString *)groupId {
    if (_tag != TeamGroupSelectorGroupId) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamGroupSelectorGroupId, but was %@.", [self getTagName]];
    }
    return _groupId;
}

- (NSString *)groupExternalId {
    if (_tag != TeamGroupSelectorGroupExternalId) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamGroupSelectorGroupExternalId, but was %@.", [self getTagName]];
    }
    return _groupExternalId;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamGroupSelectorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamGroupSelectorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamGroupSelectorSerializer serialize:self] description];
}

@end


@implementation DbxTeamGroupSelectorSerializer 

+ (NSDictionary *)serialize:(DbxTeamGroupSelector *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isGroupId]) {
        jsonDict[@"group_id"] = valueObj.groupId;
        jsonDict[@".tag"] = @"group_id";
    }
    else if ([valueObj isGroupExternalId]) {
        jsonDict[@"group_external_id"] = valueObj.groupExternalId;
        jsonDict[@".tag"] = @"group_external_id";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamGroupSelector *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"group_id"]) {
        NSString *groupId = valueDict[@"group_id"];
        return [[DbxTeamGroupSelector alloc] initWithGroupId:groupId];
    }
    if ([tag isEqualToString:@"group_external_id"]) {
        NSString *groupExternalId = valueDict[@"group_external_id"];
        return [[DbxTeamGroupSelector alloc] initWithGroupExternalId:groupExternalId];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
