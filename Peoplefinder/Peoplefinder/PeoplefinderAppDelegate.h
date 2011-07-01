//
//  PeoplefinderAppDelegate.h
//  Peoplefinder
//
//  Created by Jerrad Thramer on 7/1/11.
//  Copyright 2011 UNL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PeoplefinderAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
