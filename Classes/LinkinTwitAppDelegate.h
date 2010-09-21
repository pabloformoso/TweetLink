//
//  LinkinTwitAppDelegate.h
//  LinkinTwit
//
//  Created by fernando martinez-gil gutierrez de la Cámara on 21/09/10.
//  Copyright 2010 None. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LinkinTwitAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

