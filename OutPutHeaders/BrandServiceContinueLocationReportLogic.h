/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "LocationRetrieveDelegate.h"
#import "MMObject.h"

@class NSDate, LocationRetriever, CContact, NSString;

@interface BrandServiceContinueLocationReportLogic : MMObject <PBMessageObserverDelegate, LocationRetrieveDelegate> {
	unsigned long m_eventID;
	LocationRetriever* m_locationRetriever;
	CContact* m_contact;
	NSDate* m_lastReportTime;
	BOOL m_hadReported;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDate* m_lastReportTime;
@property(retain, nonatomic) CContact* m_contact;
@property(retain, nonatomic) LocationRetriever* m_locationRetriever;
-(void).cxx_destruct;
-(void)cancelRetrieveLocationIfOnlyReportOnce;
-(void)onRetrieveLocationTimeOut:(id)anOut;
-(void)onRetrieveLocationOK:(id)ok;
-(void)onRetrieveLocationError:(int)error;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)reportLocationWithLocation:(id)location ErrorCode:(int)code;
-(void)stopReportLocation;
-(void)allowReportLocation;
-(void)startReportLocationForContact:(id)contact HasSetLocation:(BOOL)location;
-(id)init;
-(void)dealloc;
@end

