//
//  DetailViewController.h
//  ControllingSource
//
//  Created by MoYangjie on 17/1/13.
//  Copyright © 2017年 MoYangjie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

