//
//  DemoCrumbAppMainViewControllerMainView.h
//  DemoIOSAppUsingCrumb
//
//  Created by Arpan Ghosh on 12/22/13.
//  Copyright (c) 2014 Tracktor Beam. All rights reserved.
//


@protocol ShakeDetectionDelegate

-(void)shakeDetected;

@end


@interface DemoCrumbAppMainViewControllerMainView : UIView

@property (nonatomic, weak) id <ShakeDetectionDelegate> delegate;

@end
