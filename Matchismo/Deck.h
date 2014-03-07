//
//  Deck.h
//  Matchismo
//
//  Created by fuyong on 14-2-21.
//  Copyright (c) 2014年 Stanford University. All rights reserved.
//

#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
