//
//  HelloWorldWrapper.h
//  Demo
//
//  Created by Hardik Kardani on 09/12/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifdef __cplusplus
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

#import <opencv2/core/core.hpp>

#pragma clang pop
#endif
@interface FaceResult : NSObject

@property (nonatomic) int left;
@property (nonatomic) int top;
@property (nonatomic) int right;
@property (nonatomic) int bottom;
@property (nonatomic) int liveness;
@property (nonatomic) float livenessScore;
@property (nonatomic) int mask;
@property (atomic) NSData* feature;
@property (atomic) NSData* landmark;
@end

@interface HelloWorldWrapper : NSObject
- (NSString *) sayHello;
-(void)getImage:(UIImage *)image;
#ifdef __cplusplus
- (cv::Mat)toCvMatFormate:(UIImage *)image;
#endif
@end
