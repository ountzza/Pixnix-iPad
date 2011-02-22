//
//  PixnixAppDelegate.h
//  Pixnix
//
//  Created by mondialmac0002 on 2/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PixnixViewController;

@interface PixnixAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    PixnixViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet PixnixViewController *viewController;

@end

