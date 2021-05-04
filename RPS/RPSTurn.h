//
//  RPSTurn.h
//  RPS
//
//  Created by Midhet Sulemani on 5/4/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RPSTurn : NSObject

typedef NS_ENUM(NSInteger, Move) {
  Rock,
  Paper,
  Scissors
};

@property (nonatomic) Move *move;

@end

NS_ASSUME_NONNULL_END
