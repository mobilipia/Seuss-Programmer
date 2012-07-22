//
//  SSPopOverViewController.h
//  Suess for iPad
//
//  Created by Renu Punjabi on 7/21/12.
//  Copyright (c) 2012 Cory Kilger. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FilePickerDelegate
- (void)fileSelected:(NSString *)fileName;
@end

@interface SSPopOverViewController : UITableViewController {
    NSMutableArray *_documentFiles;
    id<FilePickerDelegate> _delegate;
}

@property (nonatomic, retain) NSMutableArray *documentFiles;
@property (nonatomic) id<FilePickerDelegate> delegate;



@end