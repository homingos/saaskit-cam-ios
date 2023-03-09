//
//  FlamScanCodeSDK.h
//  FlamCodeScanObj
//
//  Created by Hardik Kardani on 23/12/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FlamScanCodeSDK : NSObject

@property (nonatomic) UIImage *imgStatic;

+(FlamScanCodeSDK*)getInstance:(UIImage *)image;

+(NSString *)getCode:(UIImage *)imgMain staticImage:(UIImage *)imgStatic;

-(NSDictionary *)getCodeFromImage:(UIImage *)image;
@end

NS_ASSUME_NONNULL_END
