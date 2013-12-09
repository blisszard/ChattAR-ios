//
//  ProfileViewController.h
//  ChattAR
//
//  Created by Igor Alefirenko on 06/11/2013.
//  Copyright (c) 2013 QuickBlox. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM (NSUInteger, ProfileCellStyle) {
    ProfileCellStyleImaged,
    ProfileCellStyleWithoutImage
};

@interface ProfileViewController : UIViewController

@property (nonatomic, strong) NSMutableDictionary *currentUser;

@end