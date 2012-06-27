//
//  AppDelegate.h
//  bDrunk
//
//  Created by Andi on 25.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *infobtn;
@property (strong, nonatomic) IBOutlet UISwitch *onOffSwitch;

-(IBAction) showInfo:(id) sender;

@end
