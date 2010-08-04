//
//  CrashLogger.h
//  CrashKit
//
//  Created by Parveen Kaler on 10-08-03.
//  Copyright 2010 Smartful Studios Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface CrashLogger : NSObject 
{
}

- (void)sendCrash:(NSDictionary*)crash;

@end

@interface CrashEmailLogger : CrashLogger <MFMailComposeViewControllerDelegate>
{
  NSString *email;
  UIViewController *rootViewController;
}

- (id)initWithEmail:(NSString *)toEmail viewController:(UIViewController*)rootViewController;
- (void)sendCrash:(NSDictionary*)crash;

@property (nonatomic, copy) NSString *email;
@property (nonatomic, retain) UIViewController *rootViewController;

@end
