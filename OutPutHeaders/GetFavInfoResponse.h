/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse;

@interface GetFavInfoResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned mxAutoDownloadSize;
@property(assign, nonatomic) unsigned mxAutoUploadSize;
@property(assign, nonatomic) unsigned mxFavFileSize;
@property(assign, nonatomic) unsigned long long totalSize;
@property(assign, nonatomic) unsigned long long usedSize;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

