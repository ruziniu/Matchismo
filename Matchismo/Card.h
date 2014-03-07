//
//  Card.h
//  Matchismo
//
//  Created by fuyong on 14-2-21.
//  Copyright (c) 2014年 Stanford University. All rights reserved.
//
// by yonge

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong) NSString *contents;
@property (nonatomic,getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
