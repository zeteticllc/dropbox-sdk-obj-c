///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMCOMMONGroupSummary.h"
#import "DBTEAMGroupsListResult.h"

#pragma mark - API Object

@implementation DBTEAMGroupsListResult

#pragma mark - Constructors

- (instancetype)initWithGroups:(NSArray<DBTEAMCOMMONGroupSummary *> *)groups
                        cursor:(NSString *)cursor
                       hasMore:(NSNumber *)hasMore {
  [DBStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](groups);

  self = [super init];
  if (self) {
    _groups = groups;
    _cursor = cursor;
    _hasMore = hasMore;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMGroupsListResultSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMGroupsListResultSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMGroupsListResultSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMGroupsListResultSerializer

+ (NSDictionary *)serialize:(DBTEAMGroupsListResult *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"groups"] = [DBArraySerializer serialize:valueObj.groups
                                           withBlock:^id(id elem) {
                                             return [DBTEAMCOMMONGroupSummarySerializer serialize:elem];
                                           }];
  jsonDict[@"cursor"] = valueObj.cursor;
  jsonDict[@"has_more"] = valueObj.hasMore;

  return jsonDict;
}

+ (DBTEAMGroupsListResult *)deserialize:(NSDictionary *)valueDict {
  NSArray<DBTEAMCOMMONGroupSummary *> *groups =
      [DBArraySerializer deserialize:valueDict[@"groups"]
                           withBlock:^id(id elem) {
                             return [DBTEAMCOMMONGroupSummarySerializer deserialize:elem];
                           }];
  NSString *cursor = valueDict[@"cursor"];
  NSNumber *hasMore = valueDict[@"has_more"];

  return [[DBTEAMGroupsListResult alloc] initWithGroups:groups cursor:cursor hasMore:hasMore];
}

@end