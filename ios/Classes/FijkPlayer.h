//
//  FijkPlayer.h
//  fijkplayer
//
//  Created by Bai Shuai on 2019/6/21.
//

#import <Foundation/Foundation.h>
#import <FIJKPlayer/IJKFFMediaPlayer.h>
#import <Flutter/FlutterPlugin.h>

NS_ASSUME_NONNULL_BEGIN

@interface FijkPlayer :  NSObject<FlutterStreamHandler, IJKMPEventHandler>

@property (atomic, readonly) NSNumber *playerId;

- (instancetype)initWithRegistrar:(id <FlutterPluginRegistrar>)registrar;



@end

NS_ASSUME_NONNULL_END