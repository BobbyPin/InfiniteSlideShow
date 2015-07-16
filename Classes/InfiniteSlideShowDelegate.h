//
//  InfiniteSlideShowDelegate.h
//  Converse
//
//  Created by Varun Jain on 15/07/14.
//  Copyright (c) 2014 Varun Jain. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol InfiniteSlideShowDelegate <NSObject>
- (void)slideWillChange:(NSInteger)newSlideIndex;
- (void)slideDidChange:(NSInteger)newSlideIndex;
- (void)didClickSlideShowItem:(id)sender;
@end
