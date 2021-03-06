//
//  SAUserInfoViewController.h
//  fansky
//
//  Created by Zzy on 10/23/15.
//  Copyright © 2015 Zzy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SAUserInfoViewController : UIViewController

@property (copy, nonatomic) NSString *userID;
@property (weak, nonatomic) IBOutlet UIVisualEffectView *blurView;
@property (weak, nonatomic) IBOutlet UILabel *infoLabel;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;

@end
