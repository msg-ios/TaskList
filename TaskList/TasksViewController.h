//
//  TasksViewController.h
//  TaskList
//
//  Created by Marco S. Graciano on 2/25/13.
//  Copyright (c) 2013 MSG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TasksViewController : UITableViewController <UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    BOOL newMedia;
}

@property NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) IBOutlet UITextField *taskTextField;
@property (strong, nonatomic) IBOutlet UIImageView *photoView;

- (IBAction)useCameraRoll:(id)sender;
- (IBAction)useCamera:(id)sender;
@end