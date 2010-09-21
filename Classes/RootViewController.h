//
//  RootViewController.h
//  LinkinTwit
//
//  Created by fernando martinez-gil gutierrez de la Cámara on 21/09/10.
//  Copyright 2010 None. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SA_OAuthTwitterController.h"

@class SA_OAuthTwitterEngine;
@interface RootViewController : UITableViewController<SA_OAuthTwitterControllerDelegate> {
	
	SA_OAuthTwitterEngine *_engine;
	NSArray *myStatuses;
}
@property(nonatomic, retain) NSArray *myStatuses; 
@end
