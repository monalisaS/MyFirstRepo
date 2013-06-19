//
//  FaceView.h
//  Happiness
//
//  Created by Monalisa Satpathy on 6/4/13.
//  Copyright (c) 2013 Monalisa Satpathy. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FaceView; // forward reference

@protocol FaceViewDataSource
-(float)smileForFaceView: (FaceView *)sender;
@end


@interface FaceView : UIView
@property (nonatomic) CGFloat scale;
-(void)pinch: (UIPinchGestureRecognizer *)gesture;
@property (nonatomic,weak) IBOutlet id <FaceViewDataSource> dataSource;
@end
