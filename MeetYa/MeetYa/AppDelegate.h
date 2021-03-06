//
//  AppDelegate.h
//  MeetYa
//
//  Created by Flow Weinhart on 30/05/14.
//  Copyright (c) 2014 LMU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MCManager.h"
//#import "NSMutableArray.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator ;

@property (nonatomic, strong) MCManager *mcManager;

@property (nonatomic, strong) NSMutableArray *requests;

@end
