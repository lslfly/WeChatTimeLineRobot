/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IWebviewAskAuthorizationLogicExt.h"
#import "WebviewJSEventHandlerBase.h"
#import "LocationRetrieveDelegate.h"

@class JSEvent, LocationRetriever, NSString;

@interface WebviewJSEventHandler_geoLocation : WebviewJSEventHandlerBase <LocationRetrieveDelegate, IWebviewAskAuthorizationLogicExt> {
	int m_geoLocationType;
	LocationRetriever* _locationRetriever;
	JSEvent* _jsEvent;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onRetrieveLocationOK:(id)ok;
-(void)onRetrieveLocationTimeOut:(id)anOut;
-(void)onRetrieveLocationError:(int)error;
-(void)startRetrieverAddress;
-(void)OnAskAuthorizationFailure:(id)failure ForAuthInfo:(id)authInfo;
-(void)OnAskAuthorizationSuccessForAuthInfo:(id)authInfo;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
@end
