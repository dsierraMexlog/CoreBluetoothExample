//
//  OWUViewController.h
//  Beaconing
//
//  Created by David Ohayon on 10/11/13.
//  Copyright (c) 2013 ohwutup software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWUProximityManager.h"

@interface OWUViewController : UIViewController <OWUProximityServerDelegate, OWUProximityClientDelegate>

@end
