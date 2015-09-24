//
//  wpframework.h
//  wpframework
//
//  Created by dongjinwei on 15/9/17.
//  Copyright © 2015年 dongjinwei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SecondViewController.h"
#import "FirstViewController.h"
#import "Config.h"

@interface wpframework : UIViewController
{
    
}
-(void) start:(UIViewController *)ui fileUrl:(NSURL *)url;
-(void) start;
@end
