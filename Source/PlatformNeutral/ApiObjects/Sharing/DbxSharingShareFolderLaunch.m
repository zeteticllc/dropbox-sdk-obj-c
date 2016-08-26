///
/// Auto-generated by Stone, do not modify.
///

#import "DbxAsyncLaunchResultBase.h"
#import "DbxSharingShareFolderLaunch.h"
#import "DbxSharingSharedFolderMetadata.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxSharingShareFolderLaunch 

- (instancetype)initWithAsyncJobId:(NSString *)asyncJobId {
    self = [super init];
    if (self != nil) {
        _tag = SharingShareFolderLaunchAsyncJobId;
        _asyncJobId = asyncJobId;
    }
    return self;
}

- (instancetype)initWithComplete:(DbxSharingSharedFolderMetadata *)complete {
    self = [super init];
    if (self != nil) {
        _tag = SharingShareFolderLaunchComplete;
        _complete = complete;
    }
    return self;
}

- (BOOL)isAsyncJobId {
    return _tag == SharingShareFolderLaunchAsyncJobId;
}

- (BOOL)isComplete {
    return _tag == SharingShareFolderLaunchComplete;
}

- (NSString *)getTagName {
    switch (_tag) {
        case SharingShareFolderLaunchAsyncJobId:
           return @"SharingShareFolderLaunchAsyncJobId";
        case SharingShareFolderLaunchComplete:
           return @"SharingShareFolderLaunchComplete";
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

- (NSString *)asyncJobId {
    if (_tag != SharingShareFolderLaunchAsyncJobId) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required SharingShareFolderLaunchAsyncJobId, but was %@.", [self getTagName]];
    }
    return _asyncJobId;
}

- (DbxSharingSharedFolderMetadata *)complete {
    if (_tag != SharingShareFolderLaunchComplete) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required SharingShareFolderLaunchComplete, but was %@.", [self getTagName]];
    }
    return _complete;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxSharingShareFolderLaunchSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxSharingShareFolderLaunchSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxSharingShareFolderLaunchSerializer serialize:self] description];
}

@end


@implementation DbxSharingShareFolderLaunchSerializer 

+ (NSDictionary *)serialize:(DbxSharingShareFolderLaunch *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isAsyncJobId]) {
        jsonDict[@"async_job_id"] = valueObj.asyncJobId;
        jsonDict[@".tag"] = @"async_job_id";
    }
    else if ([valueObj isComplete]) {
        jsonDict = [[DbxSharingSharedFolderMetadataSerializer serialize:valueObj.complete] mutableCopy];
        jsonDict[@".tag"] = @"complete";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DbxSharingShareFolderLaunch *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"async_job_id"]) {
        NSString *asyncJobId = valueDict[@"async_job_id"];
        return [[DbxSharingShareFolderLaunch alloc] initWithAsyncJobId:asyncJobId];
    }
    if ([tag isEqualToString:@"complete"]) {
        DbxSharingSharedFolderMetadata *complete = [DbxSharingSharedFolderMetadataSerializer deserialize:valueDict];
        return [[DbxSharingShareFolderLaunch alloc] initWithComplete:complete];
    }

    @throw([NSException exceptionWithName:@"InvalidTagEnum" reason:@"Supplied tag enum has an invalid value." userInfo:nil]);
}

@end
