//
//  MCSResourceReader.h
//  SJMediaCacheServer_Example
//
//  Created by BlueDancer on 2020/6/3.
//  Copyright © 2020 changsanjiang@gmail.com. All rights reserved.
//

#import "MCSDefines.h"
#import "MCSResourceDefines.h"
#import "MCSDataRequest.h"
#import "MCSResourceResponse.h"
@class MCSResource;

NS_ASSUME_NONNULL_BEGIN

@interface MCSResourceReader : NSObject<MCSResourceReader>
- (instancetype)initWithResource:(__weak MCSResource *)resource request:(MCSDataRequest *)request;

@property (nonatomic, weak, nullable) id<MCSResourceReaderDelegate> delegate;

- (void)prepare;
@property (nonatomic, strong, readonly, nullable) id<MCSResourceResponse> response;
@property (nonatomic, readonly) NSUInteger offset;
- (nullable NSData *)readDataOfLength:(NSUInteger)length;
@property (nonatomic, readonly) BOOL isPrepared;
@property (nonatomic, readonly) BOOL isReadingEndOfData;
@property (nonatomic, readonly) BOOL isClosed;
- (void)close;
@end

NS_ASSUME_NONNULL_END