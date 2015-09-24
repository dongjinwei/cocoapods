//
//  FirstViewController.h
//  WifilessProjection
//
//  Created by dongjinwei on 15/8/26.
//  Copyright (c) 2015年 dongjinwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AsyncSocket.h"

#define SRV_CONNECTED 0
#define SRV_CONNECT_SUC 1
#define SRV_CONNECT_FAIL 2
#define HOST_IP @"10.71.48.229"
#define HOST_PORT 10002

@interface FirstViewController : UIViewController<UITextFieldDelegate>
{
    AsyncSocket *client;
    __weak IBOutlet UIButton *sureButton;
}

@property (nonatomic, retain) AsyncSocket *client;  

- (IBAction)clickSure:(id)sender;
@end
