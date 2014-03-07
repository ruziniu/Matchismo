//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by fuyong on 14-2-26.
//  Copyright (c) 2014年 Stanford University. All rights reserved.
//
//  ok byyonge second changes

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck;
- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic,readonly) NSInteger score;

@end
