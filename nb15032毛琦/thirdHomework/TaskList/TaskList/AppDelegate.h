//
//  AppDelegate.h
//  TaskList
//
//  Created by 毛毛 on 15/11/2.
//  Copyright © 2015年 毛毛. All rights reserved.
//

#import <UIKit/UIKit.h>


NSString *docPath(void);

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;
    NSMutableArray *tasks;
}

-(void)addTask:(id)sender;
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UIViewController *controller;

@end


