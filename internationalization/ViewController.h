//
//  ViewController.h
//  internationalization
//
//  Created by wangzhichao on 2016/12/19.
//  Copyright © 2016年 wangzhichao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    __weak IBOutlet UILabel *label;
    __weak IBOutlet UITextField *textField;
    __weak IBOutlet UITextView *textView;
}

- (IBAction)updateLanguageToEnglish:(UIBarButtonItem *)sender;

- (IBAction)updateLanguageToChinese:(UIBarButtonItem *)sender;

@end

