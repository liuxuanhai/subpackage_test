//
//  RNViewController.m
//  subpackage_project_test
//
//  Created by yunshan on 2019/3/15.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import "RNViewController.h"
#import "HHZRNRouteManager.h"

@interface RNViewController ()

@end

@implementation RNViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
  [self loadRCTView];
}

-(void)loadRCTView
{
  RCTRootView * view = [[HHZRNRouteManager shareManager] generateRCTViewWithModuleName:@"subpackage_project_test" key:self.key];
  if (view) {
    self.view = view;
  }
}

@end
