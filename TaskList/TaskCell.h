//
//  TaskCell.h
//  TaskList
//
//  Created by Marco S. Graciano on 2/25/13.
//  Copyright (c) 2013 MSG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaskCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *taskNameLabel;
@property (strong, nonatomic) IBOutlet UIImageView *taskPhoto;

@end
