//
//  RPSGame.h
//  RPS
//
//  Created by Midhet Sulemani on 5/4/21.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"

NS_ASSUME_NONNULL_BEGIN

@interface RPSGame : NSObject

@property (nonatomic) RPSTurn *firstTurn;
@property (nonatomic) RPSTurn *secondTurn;

@end

NS_ASSUME_NONNULL_END
