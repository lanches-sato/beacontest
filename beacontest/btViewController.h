//
//  btViewController.h
//  beacontest
//
//  Created by 株式会社ランチェスター on 2014/07/08.
//  Copyright (c) 2014年 株式会社ランチェスター. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


@interface btViewController : UIViewController <CLLocationManagerDelegate> {
    CLLocationManager *locationManager;
    CLBeaconRegion *beaconRegion;
}


@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) CLBeaconRegion *beaconRegion;

@end
