/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "StoreEmotionDownloadLogicObjectDelegate.h"
#import "MMObject.h"
#import "StoreEmotionDownloadCgiDelegate.h"

@class NSMutableArray, NSString, NSArray, NSMutableDictionary, StoreEmotionDownloadCgi;

@interface StoreEmotionDownloadLogicObject : MMObject <StoreEmotionDownloadCgiDelegate, StoreEmotionDownloadLogicObjectDelegate> {
	BOOL _m_isActive;
	StoreEmotionDownloadCgi* _downloadCgi;
	NSArray* _serverPids;
	NSMutableArray* _needDownloadPids;
	NSMutableDictionary* _emotionsProgress;
	NSMutableDictionary* _emotionsState;
	id<StoreEmotionDownloadLogicObjectDelegate> _delegate;
	NSMutableArray* _failedArray;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* failedArray;
@property(assign, nonatomic) BOOL m_isActive;
@property(assign, nonatomic) __weak id<StoreEmotionDownloadLogicObjectDelegate> delegate;
@property(retain, nonatomic) NSMutableDictionary* emotionsState;
@property(retain, nonatomic) NSMutableDictionary* emotionsProgress;
@property(retain, nonatomic) NSMutableArray* needDownloadPids;
@property(retain, nonatomic) NSArray* serverPids;
@property(retain, nonatomic) StoreEmotionDownloadCgi* downloadCgi;
-(void).cxx_destruct;
-(void)onAllEmotionDownloadFinish;
-(void)configEmotionProgressWithProductID:(id)productID;
-(id)getStoreEmotionList;
-(void)getNeededDownloadStoreEmotionFromServerPids:(id)serverPids;
-(void)startInternalLogic;
-(void)onUpdateEmotion:(id)emotion withDownloadProgress:(id)downloadProgress;
-(void)onStoreEmotionDownloadCgiFailed;
-(void)onStoreEmotionDownloadCgiOK;
-(void)downloadServerXMLEmotionWithPid:(id)pid;
-(BOOL)isActive;
-(void)onStoreEmotionDownloadLogicObjectFailedWithItem:(id)item;
-(void)onStoreEmotionDownloadLogicObjectFailed;
-(void)onStoreEmotionDownloadLogicObjectOK;
-(int)getStateWithItem:(id)item;
-(float)getDownloadingProgressFromItem:(id)item;
-(id)returnDownloadingInfoToMgr;
-(void)startLogicWithPids:(id)pids;
-(void)startLogic;
-(void)updateServerPids;
-(void)dealloc;
-(id)initWithServerPids:(id)serverPids andDelegate:(id)delegate;
@end
