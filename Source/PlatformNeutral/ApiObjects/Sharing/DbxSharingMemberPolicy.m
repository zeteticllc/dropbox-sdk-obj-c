///
/// Auto-generated by Stone, do not modify.
///

#import "DbxSharingMemberPolicy.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxSharingMemberPolicy 

- (instancetype)initWithTeam {
    self = [super init];
    if (self != nil) {
        _tag = SharingMemberPolicyTeam;
    }
    return self;
}

- (instancetype)initWithAnyone {
    self = [super init];
    if (self != nil) {
        _tag = SharingMemberPolicyAnyone;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = SharingMemberPolicyOther;
    }
    return self;
}

- (BOOL)isTeam {
    return _tag == SharingMemberPolicyTeam;
}

- (BOOL)isAnyone {
    return _tag == SharingMemberPolicyAnyone;
}

- (BOOL)isOther {
    return _tag == SharingMemberPolicyOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case SharingMemberPolicyTeam:
           return @"SharingMemberPolicyTeam";
        case SharingMemberPolicyAnyone:
           return @"SharingMemberPolicyAnyone";
        case SharingMemberPolicyOther:
           return @"SharingMemberPolicyOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxSharingMemberPolicySerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxSharingMemberPolicySerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxSharingMemberPolicySerializer serialize:self] description];
}

@end


@implementation DbxSharingMemberPolicySerializer 

+ (NSDictionary *)serialize:(DbxSharingMemberPolicy *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isTeam]) {
        jsonDict[@".tag"] = @"team";
    }
    else if ([valueObj isAnyone]) {
        jsonDict[@".tag"] = @"anyone";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxSharingMemberPolicy *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"team"]) {
        return [[DbxSharingMemberPolicy alloc] initWithTeam];
    }
    if ([tag isEqualToString:@"anyone"]) {
        return [[DbxSharingMemberPolicy alloc] initWithAnyone];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxSharingMemberPolicy alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
