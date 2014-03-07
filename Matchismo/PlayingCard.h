//
//  PlayingCard.h
//  Matchismo
//
//  Created by fuyong on 14-2-21.
//  Copyright (c) 2014年 Stanford University. All rights reserved.
//

#import "Card.h"

@interface PlayingCard :Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
