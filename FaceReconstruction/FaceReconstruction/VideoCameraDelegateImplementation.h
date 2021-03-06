//
//  VideoCameraDelegateImplementation.h
//  FaceReconstruction
//
//  Created by Olee on 14.05.15.
//  Copyright (c) 2015 you & the gang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <opencv2/highgui/cap_ios.h>
#import <opencv2/imgproc/types_c.h>

extern NSString *BasicFeatureVisualizerIdentifier;
extern NSString *FeatureGrouperIdentifier;
extern NSString *HaarCascadeFaceDetectorIdentifier;

@interface VideoCameraDelegateImplementation : NSObject<CvVideoCameraDelegate>
    
- (void)switchToProcessorWithIdentifier:(NSString*)identifier;

@end
