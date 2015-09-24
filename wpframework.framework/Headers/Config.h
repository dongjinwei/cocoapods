//
//  CmdType.h
//  WifilessProjection
//
//  Created by dongjinwei on 15/9/7.
//  Copyright © 2015年 dongjinwei. All rights reserved.
//

#ifndef CmdType_h
#define CmdType_h

#import <Foundation/Foundation.h>

#define PORT_IMG 10001
#define PORT_CMD 10002
#define CMD_TYPE_ASSERTIP @"assertIp"
#define CMD_TYPE_STOP @"stopPhoneProjection"
#define CMD_TYPE_HEARTBEAT @"phoneHeartBeat"

@interface Config : NSObject
{
}


+(void) setMoheIp:(NSString *)type;
+(NSString *) getMoheIp;
+(void) setFileUrl:(NSURL *)url;
+(NSURL *)getFileUrl;

@end


#endif /* CmdType_h */
