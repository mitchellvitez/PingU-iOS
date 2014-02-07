//
//  DetailViewController.h
//  PingU
//
//  Created by Guest User on 2/7/14.
//  Copyright (c) 2014 PingU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
