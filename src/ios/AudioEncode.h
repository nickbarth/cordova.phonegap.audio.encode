#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <Cordova/CDV.h>

@interface AudioEncode : CDVPlugin{
    NSString* callbackId;
}

@property (nonatomic, retain) NSString* callbackId;

- (void)encodeAudio:(CDVInvokedUrlCommand *)command;
@end
