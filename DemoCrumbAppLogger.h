//
//  DemoCrumbAppLogger.h
//  DemoIOSAppUsingCrumb
//
//  Created by Arpan Ghosh on 1/23/14.
//  Copyright (c) 2014 Tracktor Beam. All rights reserved.
//

@interface DemoCrumbAppLogger : NSObject

+(void)logWithClass:(Class)class Message:(NSString *)message andError:(NSError *)error;

@end
