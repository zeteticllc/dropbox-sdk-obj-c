///
/// Auto-generated by Stone, do not modify.
///

#import "DbxSharingSharedLinkError.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxSharingSharedLinkError 

- (instancetype)initWithSharedLinkNotFound {
    self = [super init];
    if (self != nil) {
        _tag = SharingSharedLinkErrorSharedLinkNotFound;
    }
    return self;
}

- (instancetype)initWithSharedLinkAccessDenied {
    self = [super init];
    if (self != nil) {
        _tag = SharingSharedLinkErrorSharedLinkAccessDenied;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = SharingSharedLinkErrorOther;
    }
    return self;
}

- (BOOL)isSharedLinkNotFound {
    return _tag == SharingSharedLinkErrorSharedLinkNotFound;
}

- (BOOL)isSharedLinkAccessDenied {
    return _tag == SharingSharedLinkErrorSharedLinkAccessDenied;
}

- (BOOL)isOther {
    return _tag == SharingSharedLinkErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case SharingSharedLinkErrorSharedLinkNotFound:
           return @"SharingSharedLinkErrorSharedLinkNotFound";
        case SharingSharedLinkErrorSharedLinkAccessDenied:
           return @"SharingSharedLinkErrorSharedLinkAccessDenied";
        case SharingSharedLinkErrorOther:
           return @"SharingSharedLinkErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxSharingSharedLinkErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxSharingSharedLinkErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxSharingSharedLinkErrorSerializer serialize:self] description];
}

@end


@implementation DbxSharingSharedLinkErrorSerializer 

+ (NSDictionary *)serialize:(DbxSharingSharedLinkError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isSharedLinkNotFound]) {
        jsonDict[@".tag"] = @"shared_link_not_found";
    }
    else if ([valueObj isSharedLinkAccessDenied]) {
        jsonDict[@".tag"] = @"shared_link_access_denied";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxSharingSharedLinkError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"shared_link_not_found"]) {
        return [[DbxSharingSharedLinkError alloc] initWithSharedLinkNotFound];
    }
    if ([tag isEqualToString:@"shared_link_access_denied"]) {
        return [[DbxSharingSharedLinkError alloc] initWithSharedLinkAccessDenied];
    }
    if ([tag isEqualToString:@"other"]) {
        return [[DbxSharingSharedLinkError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
