//
//  Card.m
//  Matchismo
//
//  Created by fuyong on 14-2-21.
//  Copyright (c) 2014年 Stanford University. All rights reserved.
//

#import "Card.h"

@interface Card()
@end

@implementation Card
@synthesize contents = _contents;

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}

@end
