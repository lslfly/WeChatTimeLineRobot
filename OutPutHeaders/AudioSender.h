/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SPXAudioRecorderDelegate.h"
#import "AMRAudioRecorderDelegate.h"
#import "SilkAudioRecorderDelegate.h"
#import "MMService.h"
#import "UploadVoiceDelegate.h"
#import "MMService.h"

@class CMainControll, NSString, AMRAudioRecorder, SPXAudioRecorder, SilkAudioRecorder, MMNewUploadVoiceMgr;

@interface AudioSender : MMService <AMRAudioRecorderDelegate, SPXAudioRecorderDelegate, SilkAudioRecorderDelegate, UploadVoiceDelegate, MMService> {
	SPXAudioRecorder* m_spxrecorder;
	SilkAudioRecorder* m_silkRecorder;
	CMainControll* m_mainController;
	MMNewUploadVoiceMgr* m_upload;
	AMRAudioRecorder* m_amrrecorder;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)ForwardVoiceMsg:(id)msg ToUsr:(id)usr;
-(void)ResendVoiceMsg:(id)msg MsgWrap:(id)wrap;
-(BOOL)IsNeedRecordPrepareStatus;
-(BOOL)isRecording;
-(BOOL)StopRecord;
-(void)stop;
-(BOOL)CancelRecord;
-(BOOL)RemoveTmpAudio:(unsigned long)audio;
-(id)GetTmpAudio:(unsigned long)audio;
-(unsigned long)StartRecord;
-(BOOL)CanStartRecord;
-(unsigned long)startRecordForFormat:(unsigned long)format;
-(BOOL)canStartRecordForFormat:(unsigned long)format;
-(BOOL)StartRecordFrom:(id)from ToUser:(id)user UserInfo:(id)info;
-(BOOL)CanStartRecordFrom:(id)from ToUser:(id)user;
-(BOOL)isNeedRecordBySilkForQQOfflineMsg;
-(BOOL)isNeedRecordBySilkForDyncfg;
-(BOOL)isNeedRecordBySilkByUsername:(id)username;
-(BOOL)isNeedSpeexAudioByUsrName:(id)name;
-(void)dealloc;
-(void)onServiceInit;
-(BOOL)initFacade:(id)facade;
-(id)init;
-(BOOL)prepareSend:(id)send;
-(void)MainThreadAddMsg:(id)msg;
-(BOOL)deleteMessageFromDB:(id)db;
-(BOOL)updateMessageStatus:(id)status;
-(BOOL)updateMessageToDB:(id)db;
-(BOOL)addMessageToDB:(id)db;
-(id)getTmpAudioFileName:(unsigned long)name;
-(id)getAudioFileName:(id)name LocalID:(unsigned long)anId;
-(id)getChatName:(id)name;
-(void)OnAMRPart:(id)part Offset:(unsigned long)offset Len:(unsigned long)len EndFlag:(unsigned long)flag ForceDelete:(BOOL)aDelete;
-(void)OnAMREndRecording:(id)recording;
-(void)OnAMRBeginRecording:(id)recording ErrNo:(int)no;
-(void)OnAMRLevelMeter:(id)meter Peak:(float)peak;
-(BOOL)OnPrepareSendAMR:(id)amr;
-(BOOL)CheckIfButtonPressing:(id)pressing;
-(void)OnSPXPart:(id)part Offset:(unsigned long)offset Len:(unsigned long)len EndFlag:(unsigned long)flag ForceDelete:(BOOL)aDelete;
-(void)OnSPXEndRecording:(id)recording;
-(void)OnSPXBeginRecording:(id)recording ErrNo:(int)no;
-(void)OnSPXLevelMeter:(id)meter Peak:(float)peak;
-(BOOL)OnPrepareSendSPX:(id)spx;
-(void)onSilkPart:(id)part Offset:(unsigned long)offset Len:(unsigned long)len EndFlag:(unsigned long)flag ForceDelete:(BOOL)aDelete Duration:(unsigned long)duration;
-(void)onSilkEndRecording:(id)recording;
-(void)onSilkBeginRecording:(id)recording ErrNo:(int)no;
-(void)onSilkLevelMeter:(id)meter Peak:(float)peak;
-(BOOL)onPrepareSendSilk:(id)silk;
-(BOOL)silkCheckIfButtonPressing:(id)pressing;
-(void)OnPartSent:(id)sent ErrNo:(unsigned long)no;
@end

