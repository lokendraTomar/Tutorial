//
//  AppDelegate.h
//  TextFieldLeftIconTut
//
//  Created by Lokendra Tomar on 16/07/17.
//  Copyright © 2017 Lokendra Tomar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

