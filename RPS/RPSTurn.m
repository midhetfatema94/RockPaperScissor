//
//  RPSTurn.m
//  RPS
//
//  Created by Midhet Sulemani on 5/4/21.
//

#import "RPSTurn.h"

@implementation RPSTurn

-(instancetype)initWithMove: (Move*)move {
    self = [super init];

    if(self) {
        _move = move;
    }

    return self;
}

@end
