//
//  States.h
//  sc02-US-States
//
//  Created by Asdruval De Leon on 11/1/17.
//  Copyright © 2017 Asdruval De Leon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h> // need for UIImage
@interface States : NSObject
@property (strong, nonatomic) NSString* name;
@property (strong, nonatomic) NSString* capital;
@property (strong, nonatomic) NSString* motto;
@property (strong, nonatomic) UIImage* flag;

@end
