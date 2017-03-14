# iOS项目国际化插件

工程国际化，无需修改工程源码，就可以切换app语言

##使用方法：

#### 1.准备
mytest在国际化文件Localizable.strings中有配置各自语言对应的内容：
```
mytest = "测试";
```

#### 2.使用
setText: 设置为国际化key值，示例：
```
label：label.text = @"mytest"; 
textView：textView.text = @"mytest"; 
textField：textField.text = @"mytest"; 
设置label文字时：label.text = @"mytest"; 
```
#### 3.刷新整个app语言
整个app要切换到中文，只需执行：
```
[[ZCUpdateLanguages sharedLanguages] updateText:@"zh-Hans"];
```
