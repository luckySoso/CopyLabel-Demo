//
//  ViewController.m
//  CopyLabel
//
//  Created by Soso on 16/5/20.
//  Copyright © 2016年 Soso. All rights reserved.
//

#import "ViewController.h"
#import "XHCopyLabel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    XHCopyLabel *label = [[XHCopyLabel alloc] initWithFrame:CGRectMake(30, 120, 120, 80)];
    
    label.text = @"sfdhjsakdhfjdkas";
    [label sizeToFit];
    [self.view addSubview:label];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
