//
//  AppDelegate.h
//  GitTestaaa
//
//  Created by 姜宁桃 on 2017/6/16.
//  Copyright © 2017年 李世航. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

