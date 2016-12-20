# internationalization
工程国际化，无需修改工程代码，就可以切换app语言

要切换到中文，只需执行：
[[ZCUpdateLanguages sharedLanguages] updateText:@"zh-Hans"];

设置label文字时：label.text = @"mytest";
mytest在国际化文件Localizable.strings中有配置各自语言对应的内容：mytest = "测试";
