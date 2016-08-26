///
/// Auto-generated by Stone, do not modify.
///

#import "DbxAsyncPollResultBase.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"
#import "DbxTeamMemberAddResult.h"
#import "DbxTeamMembersAddJobStatus.h"

@implementation DbxTeamMembersAddJobStatus 

- (instancetype)initWithInProgress {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersAddJobStatusInProgress;
    }
    return self;
}

- (instancetype)initWithComplete:(NSArray<DbxTeamMemberAddResult *> *)complete {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersAddJobStatusComplete;
        _complete = complete;
    }
    return self;
}

- (instancetype)initWithFailed:(NSString *)failed {
    self = [super init];
    if (self != nil) {
        _tag = TeamMembersAddJobStatusFailed;
        _failed = failed;
    }
    return self;
}

- (BOOL)isInProgress {
    return _tag == TeamMembersAddJobStatusInProgress;
}

- (BOOL)isComplete {
    return _tag == TeamMembersAddJobStatusComplete;
}

- (BOOL)isFailed {
    return _tag == TeamMembersAddJobStatusFailed;
}

- (NSString *)getTagName {
    switch (_tag) {
        case TeamMembersAddJobStatusInProgress:
           return @"TeamMembersAddJobStatusInProgress";
        case TeamMembersAddJobStatusComplete:
           return @"TeamMembersAddJobStatusComplete";
        case TeamMembersAddJobStatusFailed:
           return @"TeamMembersAddJobStatusFailed";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

- (NSArray<DbxTeamMemberAddResult *> *)complete {
    if (_tag != TeamMembersAddJobStatusComplete) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamMembersAddJobStatusComplete, but was %@.", [self getTagName]];
    }
    return _complete;
}

- (NSString *)failed {
    if (_tag != TeamMembersAddJobStatusFailed) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required TeamMembersAddJobStatusFailed, but was %@.", [self getTagName]];
    }
    return _failed;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxTeamMembersAddJobStatusSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxTeamMembersAddJobStatusSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxTeamMembersAddJobStatusSerializer serialize:self] description];
}

@end


@implementation DbxTeamMembersAddJobStatusSerializer 

+ (NSDictionary *)serialize:(DbxTeamMembersAddJobStatus *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isInProgress]) {
        jsonDict[@".tag"] = @"in_progress";
    }
    else if ([valueObj isComplete]) {
        jsonDict[@"complete"] = [DbxArraySerializer serialize:valueObj.complete withBlock:^id(id elem) { return [DbxTeamMemberAddResultSerializer serialize:elem]; }];
        jsonDict[@".tag"] = @"complete";
    }
    else if ([valueObj isFailed]) {
        jsonDict[@"failed"] = valueObj.failed;
        jsonDict[@".tag"] = @"failed";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxTeamMembersAddJobStatus *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"in_progress"]) {
        return [[DbxTeamMembersAddJobStatus alloc] initWithInProgress];
    }
    if ([tag isEqualToString:@"complete"]) {
        NSArray<DbxTeamMemberAddResult *> *complete = [DbxArraySerializer deserialize:valueDict[@"complete"] withBlock:^id(id elem) { return [DbxTeamMemberAddResultSerializer deserialize:elem]; }];
        return [[DbxTeamMembersAddJobStatus alloc] initWithComplete:complete];
    }
    if ([tag isEqualToString:@"failed"]) {
        NSString *failed = valueDict[@"failed"];
        return [[DbxTeamMembersAddJobStatus alloc] initWithFailed:failed];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
