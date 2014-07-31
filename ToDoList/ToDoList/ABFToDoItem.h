//
//  ABFToDoItem.h
//  ToDoList
//
//  Created by Andrew Fannin on 7/31/14.
//  Copyright (c) 2014 afannin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABFToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
