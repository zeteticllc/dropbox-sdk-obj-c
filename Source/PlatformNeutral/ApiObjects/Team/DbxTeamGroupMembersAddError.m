///
/// Auto-generated by Stone, do not modify.
///

#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamGroupMembersAddError.h"
#import "DbxTeamGroupSelectorError.h"

@implementation DbxTeamGroupMembersAddError 

- (instancetype)initWithGroupNotFound {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorGroupNotFound;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorOther;
    }
    return self;
}

- (instancetype)initWithDuplicateUser {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorDuplicateUser;
    }
    return self;
}

- (instancetype)initWithGroupNotInTeam {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorGroupNotInTeam;
    }
    return self;
}

- (instancetype)initWithMembersNotInTeam:(NSArray<NSString *> *)membersNotInTeam {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorMembersNotInTeam;
        _membersNotInTeam = membersNotInTeam;
    }
    return self;
}

- (instancetype)initWithUsersNotFound:(NSArray<NSString *> *)usersNotFound {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorUsersNotFound;
        _usersNotFound = usersNotFound;
    }
    return self;
}

- (instancetype)initWithUserMustBeActiveToBeOwner {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorUserMustBeActiveToBeOwner;
    }
    return self;
}

- (instancetype)initWithUserCannotBeManagerOfCompanyManagedGroup:(NSArray<NSString *> *)userCannotBeManagerOfCompanyManagedGroup {
    self = [super init];
    if (self != nil) {
        _tag = TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup;
        _userCannotBeManagerOfCompanyManagedGroup = userCannotBeManagerOfCompanyManagedGroup;
    }
    return self;
}

- (BOOL)isGroupNotFound {
    return _tag == TeamGroupMembersAddErrorGroupNotFound;
}

- (BOOL)isOther {
    return _tag == TeamGroupMembersAddErrorOther;
}

- (BOOL)isDuplicateUser {
    return _tag == TeamGroupMembersAddErrorDuplicateUser;
}

- (BOOL)isGroupNotInTeam {
    return _tag == TeamGroupMembersAddErrorGroupNotInTeam;
}

- (BOOL)isMembersNotInTeam {
    return _tag == TeamGroupMembersAddErrorMembersNotInTeam;
}

- (BOOL)isUsersNotFound {
    return _tag == TeamGroupMembersAddErrorUsersNotFound;
}

- (BOOL)isUserMustBeActiveToBeOwner {
    return _tag == TeamGroupMembersAddErrorUserMustBeActiveToBeOwner;
}

- (BOOL)isUserCannotBeManagerOfCompanyManagedGroup {
    return _tag == TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup;
}

- (NSString *)getTagName {
    switch (_tag) {
        case TeamGroupMembersAddErrorGroupNotFound:
           return @"TeamGroupMembersAddErrorGroupNotFound";
        case TeamGroupMembersAddErrorOther:
           return @"TeamGroupMembersAddErrorOther";
        case TeamGroupMembersAddErrorDuplicateUser:
           return @"TeamGroupMembersAddErrorDuplicateUser";
        case TeamGroupMembersAddErrorGroupNotInTeam:
           return @"TeamGroupMembersAddErrorGroupNotInTeam";
        case TeamGroupMembersAddErrorMembersNotInTeam:
           return @"TeamGroupMembersAddErrorMembersNotInTeam";
        case TeamGroupMembersAddErrorUsersNotFound:
           return @"TeamGroupMembersAddErrorUsersNotFound";
        case TeamGroupMembersAddErrorUserMustBeActiveToBeOwner:
           return @"TeamGroupMembersAddErrorUserMustBeActiveToBeOwner";
        case TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup:
           return @"TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

- (NSArray<NSString *> *)membersNotInTeam {
    if (_tag != TeamGroupMembersAddErrorMembersNotInTeam) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamGroupMembersAddErrorMembersNotInTeam, but was %@.", [self getTagName]];
    }
    return _membersNotInTeam;
}

- (NSArray<NSString *> *)usersNotFound {
    if (_tag != TeamGroupMembersAddErrorUsersNotFound) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamGroupMembersAddErrorUsersNotFound, but was %@.", [self getTagName]];
    }
    return _usersNotFound;
}

- (NSArray<NSString *> *)userCannotBeManagerOfCompanyManagedGroup {
    if (_tag != TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup, but was %@.", [self getTagName]];
    }
    return _userCannotBeManagerOfCompanyManagedGroup;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamGroupMembersAddErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamGroupMembersAddErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamGroupMembersAddErrorSerializer serialize:self] description];
}

@end


@implementation DbxTeamGroupMembersAddErrorSerializer 

+ (NSDictionary *)serialize:(DbxTeamGroupMembersAddError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isGroupNotFound]) {
        jsonDict[@".tag"] = @"group_not_found";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else if ([valueObj isDuplicateUser]) {
        jsonDict[@".tag"] = @"duplicate_user";
    }
    else if ([valueObj isGroupNotInTeam]) {
        jsonDict[@".tag"] = @"group_not_in_team";
    }
    else if ([valueObj isMembersNotInTeam]) {
        jsonDict[@"members_not_in_team"] = [DbxArraySerializer serialize:valueObj.membersNotInTeam withBlock:^id(id elem) { return elem; }];
        jsonDict[@".tag"] = @"members_not_in_team";
    }
    else if ([valueObj isUsersNotFound]) {
        jsonDict[@"users_not_found"] = [DbxArraySerializer serialize:valueObj.usersNotFound withBlock:^id(id elem) { return elem; }];
        jsonDict[@".tag"] = @"users_not_found";
    }
    else if ([valueObj isUserMustBeActiveToBeOwner]) {
        jsonDict[@".tag"] = @"user_must_be_active_to_be_owner";
    }
    else if ([valueObj isUserCannotBeManagerOfCompanyManagedGroup]) {
        jsonDict[@"user_cannot_be_manager_of_company_managed_group"] = [DbxArraySerializer serialize:valueObj.userCannotBeManagerOfCompanyManagedGroup withBlock:^id(id elem) { return elem; }];
        jsonDict[@".tag"] = @"user_cannot_be_manager_of_company_managed_group";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamGroupMembersAddError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"group_not_found"]) {
        return [[DbxTeamGroupMembersAddError alloc] initWithGroupNotFound];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxTeamGroupMembersAddError alloc] initWithOther];
    }
    if ([tag isEqualToString:@"duplicate_user"]) {
        return [[DbxTeamGroupMembersAddError alloc] initWithDuplicateUser];
    }
    if ([tag isEqualToString:@"group_not_in_team"]) {
        return [[DbxTeamGroupMembersAddError alloc] initWithGroupNotInTeam];
    }
    if ([tag isEqualToString:@"members_not_in_team"]) {
        NSArray<NSString *> *membersNotInTeam = [DbxArraySerializer deserialize:valueDict[@"members_not_in_team"] withBlock:^id(id elem) { return elem; }];
        return [[DbxTeamGroupMembersAddError alloc] initWithMembersNotInTeam:membersNotInTeam];
    }
    if ([tag isEqualToString:@"users_not_found"]) {
        NSArray<NSString *> *usersNotFound = [DbxArraySerializer deserialize:valueDict[@"users_not_found"] withBlock:^id(id elem) { return elem; }];
        return [[DbxTeamGroupMembersAddError alloc] initWithUsersNotFound:usersNotFound];
    }
    if ([tag isEqualToString:@"user_must_be_active_to_be_owner"]) {
        return [[DbxTeamGroupMembersAddError alloc] initWithUserMustBeActiveToBeOwner];
    }
    if ([tag isEqualToString:@"user_cannot_be_manager_of_company_managed_group"]) {
        NSArray<NSString *> *userCannotBeManagerOfCompanyManagedGroup = [DbxArraySerializer deserialize:valueDict[@"user_cannot_be_manager_of_company_managed_group"] withBlock:^id(id elem) { return elem; }];
        return [[DbxTeamGroupMembersAddError alloc] initWithUserCannotBeManagerOfCompanyManagedGroup:userCannotBeManagerOfCompanyManagedGroup];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
