//
//  AppDelegate.h
//  GMapTest
//
//  Created by Fr@nk on 06/09/12.
//  Copyright (c) 2012 Fr@nk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapViewController.h"

@class MapViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MapViewController *mapViewController;

@end
