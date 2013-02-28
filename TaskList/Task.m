//
//  Task.m
//  TaskList
//
//  Created by Marco S. Graciano on 2/25/13.
//  Copyright (c) 2013 MSG. All rights reserved.
//

#import "Task.h"

@implementation Task
@dynamic text;
@dynamic completedAt;
@dynamic image;

- (BOOL)isCompleted {
    return self.completedAt != nil;
}

- (void)setCompleted:(BOOL)completed {
    self.completedAt = completed ? [NSDate date] : nil;
}

@end