//
//  SecondViewController.h
//  WifilessProjection
//
//  Created by dongjinwei on 15/8/26.
//  Copyright (c) 2015年 dongjinwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AsyncSocket.h"

@interface SecondViewController : UIViewController<UIScrollViewDelegate, UIWebViewDelegate>
{
    AsyncSocket *client;
    AsyncSocket *cmdSocket;
    UIActivityIndicatorView *loadingIndicator;
    NSString *cmdType;
    NSTimer *timer;
//    NSData *imgData;
}
@property (nonatomic, retain) AsyncSocket *client;
@property (nonatomic, retain) AsyncSocket *cmdSocket;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;

@property (nonatomic, retain) NSString *cmdType;
@property (nonatomic, retain) NSTimer *timer;

//@property (nonatomic, retain) NSData *imgData;

@end
