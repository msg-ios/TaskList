//
//  Task.h
//  TaskList
//
//  Created by Marco S. Graciano on 2/25/13.
//  Copyright (c) 2013 MSG. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface Task : NSManagedObject

@property NSString *text;
@property NSDate *completedAt;
@property NSData *image;

@property (nonatomic, getter = isCompleted) BOOL completed;

@end