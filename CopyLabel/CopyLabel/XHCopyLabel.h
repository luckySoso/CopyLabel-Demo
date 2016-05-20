//
//  XHCopyLabel.h
//  CopyLabel
//
//  Created by Soso on 16/5/20.
//  Copyright © 2016年 Soso. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  在iOS中下面三个控件，自身就有复制-粘贴的功能：
 
 1、UITextView
 
 2、UITextField
 
 3、UIWebView
 
 UIKit framework提供了几个类和协议方便我们在自己的应用程序中实现剪贴板的功能。
 
 1、UIPasteboard：我们可以向其中写入数据，也可以读取数据
 2、UIMenuController：显示一个快捷菜单，用来展示复制、剪贴、粘贴等选择的项。
 3、UIResponder中的 canPerformAction:withSender:用于控制哪些命令显示在快捷菜单中。
 4、当快捷菜单上的命令点击的时候，UIResponderStandardEditActions将会被调用。
 
 
 下面这些项能被放置到剪贴板中
 1、UIPasteboardTypeListString —   字符串数组, 包含kUTTypeUTF8PlainText
 2、UIPasteboardTypeListURL —   URL数组，包含kUTTypeURL
 3、UIPasteboardTypeListImage —   图形数组, 包含kUTTypePNG 和kUTTypeJPEG
 4、UIPasteboardTypeListColor —   颜色数组
 
 剪贴板的类型分为两种：
 系统级：使用UIPasteboardNameGeneral和UIPasteboardNameFind，系统级应用程序关闭，或者卸载的数据不会丢失。
 
 应用程序级：通过设置，可以让数据在应用程序关闭之后仍然保存在剪贴板中，但是应用程序卸载之后数据就会失去。我们可用通过pasteboardWithName:create：来创建。
 */
@interface XHCopyLabel : UILabel

@end
