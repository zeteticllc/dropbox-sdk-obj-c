///
/// Auto-generated by Stone, do not modify.
///

#import "DbxSharingListFileMembersCountResult.h"
#import "DbxSharingListFileMembersIndividualResult.h"
#import "DbxSharingSharingFileAccessError.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxSharingListFileMembersIndividualResult 

- (instancetype)initWithResult:(DbxSharingListFileMembersCountResult *)result {
    self = [super init];
    if (self != nil) {
        _tag = SharingListFileMembersIndividualResultResult;
        _result = result;
    }
    return self;
}

- (instancetype)initWithAccessError:(DbxSharingSharingFileAccessError *)accessError {
    self = [super init];
    if (self != nil) {
        _tag = SharingListFileMembersIndividualResultAccessError;
        _accessError = accessError;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = SharingListFileMembersIndividualResultOther;
    }
    return self;
}

- (BOOL)isResult {
    return _tag == SharingListFileMembersIndividualResultResult;
}

- (BOOL)isAccessError {
    return _tag == SharingListFileMembersIndividualResultAccessError;
}

- (BOOL)isOther {
    return _tag == SharingListFileMembersIndividualResultOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case SharingListFileMembersIndividualResultResult:
           return @"SharingListFileMembersIndividualResultResult";
        case SharingListFileMembersIndividualResultAccessError:
           return @"SharingListFileMembersIndividualResultAccessError";
        case SharingListFileMembersIndividualResultOther:
           return @"SharingListFileMembersIndividualResultOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

- (DbxSharingListFileMembersCountResult *)result {
    if (_tag != SharingListFileMembersIndividualResultResult) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required SharingListFileMembersIndividualResultResult, but was %@.", [self getTagName]];
    }
    return _result;
}

- (DbxSharingSharingFileAccessError *)accessError {
    if (_tag != SharingListFileMembersIndividualResultAccessError) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required SharingListFileMembersIndividualResultAccessError, but was %@.", [self getTagName]];
    }
    return _accessError;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxSharingListFileMembersIndividualResultSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxSharingListFileMembersIndividualResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxSharingListFileMembersIndividualResultSerializer serialize:self] description];
}

@end


@implementation DbxSharingListFileMembersIndividualResultSerializer 

+ (NSDictionary *)serialize:(DbxSharingListFileMembersIndividualResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isResult]) {
        jsonDict = [[DbxSharingListFileMembersCountResultSerializer serialize:valueObj.result] mutableCopy];
        jsonDict[@".tag"] = @"result";
    }
    else if ([valueObj isAccessError]) {
        jsonDict = [[DbxSharingSharingFileAccessErrorSerializer serialize:valueObj.accessError] mutableCopy];
        jsonDict[@".tag"] = @"access_error";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxSharingListFileMembersIndividualResult *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"result"]) {
        DbxSharingListFileMembersCountResult *result = [DbxSharingListFileMembersCountResultSerializer deserialize:valueDict];
        return [[DbxSharingListFileMembersIndividualResult alloc] initWithResult:result];
    }
    if ([tag isEqualToString:@"access_error"]) {
        DbxSharingSharingFileAccessError *accessError = [DbxSharingSharingFileAccessErrorSerializer deserialize:valueDict[@"access_error"]];
        return [[DbxSharingListFileMembersIndividualResult alloc] initWithAccessError:accessError];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxSharingListFileMembersIndividualResult alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
