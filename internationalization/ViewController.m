//
//  ViewController.m
//  internationalization
//
//  Created by wangzhichao on 2016/12/19.
//  Copyright © 2016年 wangzhichao. All rights reserved.
//

#import "ViewController.h"
#import "ZCUpdateLanguages.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title  = @"myTitle";
    
    label.text = @"myLabel";
    textField.text = @"myTextField";
    textView.text = @"myTextView";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#warning AppDelegate设置了activeLocalizedStringHead
- (IBAction)updateLanguageToEnglish:(UIBarButtonItem *)sender {
    [[ZCUpdateLanguages sharedLanguages] updateText:@"Base"];
}

- (IBAction)updateLanguageToChinese:(UIBarButtonItem *)sender {
    [[ZCUpdateLanguages sharedLanguages] updateText:@"zh-Hans"];
}

@end
