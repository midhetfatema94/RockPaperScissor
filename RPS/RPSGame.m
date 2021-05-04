//
//  RPSGame.m
//  RPS
//
//  Created by Midhet Sulemani on 5/4/21.
//

#import "RPSGame.h"
#import "RPSTurn.m"

@implementation RPSGame

-(instancetype)initWithDetails: (Move*)first
                        second: (Move*)second {
    self = [super init];

    if(self) {
        _secondTurn = [[RPSTurn alloc] initWithMove:second];
        _firstTurn = [[RPSTurn alloc] initWithMove:first];
    }

    return self;
}

@end
