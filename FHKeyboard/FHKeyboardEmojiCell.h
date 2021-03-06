//
//  FHKeyboardEmojiCell.h
//  FHKeyBoardDemo
//
//  Created by Moxtra on 2017/8/14.
//  Copyright © 2017年 MADAO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FHKeyboardEmojiCell : UICollectionViewCell

@property (nonatomic, assign) NSUInteger numOfCols;

@property (nonatomic, assign) NSUInteger numOfLines;

@property (nonatomic, strong) NSArray<NSString *> *emojiArray;

@property (nonatomic, strong) UIImage *deleteButtonImage;

@property (nonatomic, copy) void(^handleEmojiClicked)(NSString *emoji);

@property (nonatomic, copy) void(^handleDeleteClicked)();

@end

@interface FHKeyboardCategoryCell : UICollectionViewCell

@property (nonatomic, strong) UIImage *categoryIcon;

@end
