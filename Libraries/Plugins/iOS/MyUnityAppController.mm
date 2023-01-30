#import "UnityAppController.h"
#import "AVFoundation/AVFoundation.h"
 
@interface MyUnityAppController: UnityAppController {}
 
-(void)setAudioSession;
 
@end
 
@implementation MyUnityAppController
 
-(void) startUnity: (UIApplication*) application
{
    NSLog(@"MyUnityAppController startUnity");
    [super startUnity: application];  //call the super.
    [self setAudioSession];
}
 
- (void)setAudioSession
{
    NSLog(@"MyUnityAppController Set audiosession");
//    AVAudioSession *audioSession = [AVAudioSession sharedInstance];
//    [audioSession setCategory:AVAudioSessionCategoryAmbient error:nil];
//    [audioSession setActive:YES error:nil];
    [[AVAudioSession sharedInstance]
                setCategory: AVAudioSessionCategoryPlayback
                      error: nil];
}
 
@end
 
IMPL_APP_CONTROLLER_SUBCLASS(MyUnityAppController)
