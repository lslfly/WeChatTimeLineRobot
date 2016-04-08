/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "CLLocationManagerDelegate.h"
#import "WCBeaconGuideModeExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, MMTimer, NSString, CLLocationManager;

@interface WCBeaconGuideModeMgr : MMService <PBMessageObserverDelegate, CLLocationManagerDelegate, MMService, WCBeaconGuideModeExt> {
	MMTimer* m_timer;
	BOOL _m_isPreviousRequestRunning;
	NSMutableArray* _shakeRangeBeacons;
	CLLocationManager* _m_locationMgr;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_isPreviousRequestRunning;
@property(retain, nonatomic) CLLocationManager* m_locationMgr;
@property(retain, nonatomic) NSMutableArray* shakeRangeBeacons;
-(void).cxx_destruct;
-(void)onDidFetchedNoContentWithError:(unsigned)on;
-(void)onDidFetchedContent:(id)on;
-(void)onServiceEnterForeground;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handlePreGetGuideModeInfoResponse:(id)response;
-(void)preGetGuideInfoByBeacon:(id)beacon withOwner:(unsigned long long)owner inLocation:(id)location;
-(void)uploadBeaconsToSvr;
-(BOOL)isChannelOpen;
-(BOOL)shakeBeaconTabShouldStay;
-(void)openGuideChannelForShopId:(unsigned long long)shopId;
-(void)stopRangeBeacons;
-(void)startRangeBeacons;
-(void)dealloc;
-(id)init;
-(void)cleanGuideModeCache;
-(void)clearIsInShakeViewController;
-(void)markIsInShakeViewController;
-(BOOL)isInShakeViewController;
-(id)shakeVcFlagFilePath;
-(void)clearRedDot:(unsigned)dot;
-(void)markRedDot:(unsigned)dot;
-(BOOL)hasTabRedDot;
-(BOOL)hasShakeRedDot;
-(id)tabRedDotFlagFilePath;
-(id)shakeRedDotFlagFilePath;
-(bool)isDeviceHasBeenFirstReadWithUUID:(id)uuid major:(id)major minor:(id)minor;
-(bool)isDeviceHasBeenDiscoveredWithUUID:(id)uuid major:(id)major minor:(id)minor;
-(bool)isDeviceHasBeenReadWithUUID:(id)uuid major:(id)major minor:(id)minor;
-(BOOL)updateRangedDeviceFirstReadStateByUUID:(id)uuid major:(id)major minor:(id)minor;
-(BOOL)updateRangedDeviceDiscoverStateByUUID:(id)uuid major:(id)major minor:(id)minor;
-(BOOL)updateRangedDeviceReadStateByUUID:(id)uuid major:(id)major minor:(id)minor;
-(id)loadRangedDeviceByUUID:(id)uuid major:(id)major minor:(id)minor;
-(BOOL)addHadRangedDevice:(id)device;
-(id)rangedDevicesFilePath;
-(unsigned)getShakeTabDisplay;
-(unsigned)getChannelOpenTime;
-(unsigned)getChannelOpenMethod;
-(id)loadGuideSwitcgFromFile;
-(BOOL)saveGuideSwitch:(id)aSwitch;
-(id)guideSwitchFilePath;
-(void)clearLastFetchedContent;
-(id)loadLastFetchedContentFromFile;
-(BOOL)saveLastFetchedContent:(id)content;
-(id)lastFetchedContentFilePath;
-(unsigned long long)getShopId;
-(id)loadAuthorizationInfoFromFile;
-(BOOL)saveAuthorizationInfo:(id)info;
-(id)authorizedInfoFilePath;
@end
