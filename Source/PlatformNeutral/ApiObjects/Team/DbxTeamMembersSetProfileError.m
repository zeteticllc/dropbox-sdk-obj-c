///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamMemberSelectorError.h"
#import "DbxTeamMembersSetProfileError.h"

@implementation DbxTeamMembersSetProfileError 

- (instancetype)initWithUserNotFound {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorUserNotFound;
    }
    return self;
}

- (instancetype)initWithUserNotInTeam {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorUserNotInTeam;
    }
    return self;
}

- (instancetype)initWithExternalIdAndNewExternalIdUnsafe {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe;
    }
    return self;
}

- (instancetype)initWithNoNewDataSpecified {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorNoNewDataSpecified;
    }
    return self;
}

- (instancetype)initWithEmailReservedForOtherUser {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorEmailReservedForOtherUser;
    }
    return self;
}

- (instancetype)initWithExternalIdUsedByOtherUser {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorExternalIdUsedByOtherUser;
    }
    return self;
}

- (instancetype)initWithSetProfileDisallowed {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorSetProfileDisallowed;
    }
    return self;
}

- (instancetype)initWithParamCannotBeEmpty {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorParamCannotBeEmpty;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersSetProfileErrorOther;
    }
    return self;
}

- (BOOL)isUserNotFound {
    return _tag == TeamMembersSetProfileErrorUserNotFound;
}

- (BOOL)isUserNotInTeam {
    return _tag == TeamMembersSetProfileErrorUserNotInTeam;
}

- (BOOL)isExternalIdAndNewExternalIdUnsafe {
    return _tag == TeamMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe;
}

- (BOOL)isNoNewDataSpecified {
    return _tag == TeamMembersSetProfileErrorNoNewDataSpecified;
}

- (BOOL)isEmailReservedForOtherUser {
    return _tag == TeamMembersSetProfileErrorEmailReservedForOtherUser;
}

- (BOOL)isExternalIdUsedByOtherUser {
    return _tag == TeamMembersSetProfileErrorExternalIdUsedByOtherUser;
}

- (BOOL)isSetProfileDisallowed {
    return _tag == TeamMembersSetProfileErrorSetProfileDisallowed;
}

- (BOOL)isParamCannotBeEmpty {
    return _tag == TeamMembersSetProfileErrorParamCannotBeEmpty;
}

- (BOOL)isOther {
    return _tag == TeamMembersSetProfileErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case TeamMembersSetProfileErrorUserNotFound:
           return @"TeamMembersSetProfileErrorUserNotFound";
        case TeamMembersSetProfileErrorUserNotInTeam:
           return @"TeamMembersSetProfileErrorUserNotInTeam";
        case TeamMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe:
           return @"TeamMembersSetProfileErrorExternalIdAndNewExternalIdUnsafe";
        case TeamMembersSetProfileErrorNoNewDataSpecified:
           return @"TeamMembersSetProfileErrorNoNewDataSpecified";
        case TeamMembersSetProfileErrorEmailReservedForOtherUser:
           return @"TeamMembersSetProfileErrorEmailReservedForOtherUser";
        case TeamMembersSetProfileErrorExternalIdUsedByOtherUser:
           return @"TeamMembersSetProfileErrorExternalIdUsedByOtherUser";
        case TeamMembersSetProfileErrorSetProfileDisallowed:
           return @"TeamMembersSetProfileErrorSetProfileDisallowed";
        case TeamMembersSetProfileErrorParamCannotBeEmpty:
           return @"TeamMembersSetProfileErrorParamCannotBeEmpty";
        case TeamMembersSetProfileErrorOther:
           return @"TeamMembersSetProfileErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamMembersSetProfileErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamMembersSetProfileErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamMembersSetProfileErrorSerializer serialize:self] description];
}

@end


@implementation DbxTeamMembersSetProfileErrorSerializer 

+ (NSDictionary *)serialize:(DbxTeamMembersSetProfileError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isUserNotFound]) {
        jsonDict[@".tag"] = @"user_not_found";
    }
    else if ([valueObj isUserNotInTeam]) {
        jsonDict[@".tag"] = @"user_not_in_team";
    }
    else if ([valueObj isExternalIdAndNewExternalIdUnsafe]) {
        jsonDict[@".tag"] = @"external_id_and_new_external_id_unsafe";
    }
    else if ([valueObj isNoNewDataSpecified]) {
        jsonDict[@".tag"] = @"no_new_data_specified";
    }
    else if ([valueObj isEmailReservedForOtherUser]) {
        jsonDict[@".tag"] = @"email_reserved_for_other_user";
    }
    else if ([valueObj isExternalIdUsedByOtherUser]) {
        jsonDict[@".tag"] = @"external_id_used_by_other_user";
    }
    else if ([valueObj isSetProfileDisallowed]) {
        jsonDict[@".tag"] = @"set_profile_disallowed";
    }
    else if ([valueObj isParamCannotBeEmpty]) {
        jsonDict[@".tag"] = @"param_cannot_be_empty";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamMembersSetProfileError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"user_not_found"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithUserNotFound];
    }
    if ([tag isEqualToString:@"user_not_in_team"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithUserNotInTeam];
    }
    if ([tag isEqualToString:@"external_id_and_new_external_id_unsafe"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithExternalIdAndNewExternalIdUnsafe];
    }
    if ([tag isEqualToString:@"no_new_data_specified"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithNoNewDataSpecified];
    }
    if ([tag isEqualToString:@"email_reserved_for_other_user"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithEmailReservedForOtherUser];
    }
    if ([tag isEqualToString:@"external_id_used_by_other_user"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithExternalIdUsedByOtherUser];
    }
    if ([tag isEqualToString:@"set_profile_disallowed"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithSetProfileDisallowed];
    }
    if ([tag isEqualToString:@"param_cannot_be_empty"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithParamCannotBeEmpty];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxTeamMembersSetProfileError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
