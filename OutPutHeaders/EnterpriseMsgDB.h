/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCDataBase, NSMutableSet;

@interface EnterpriseMsgDB : MMObject {
	WCDataBase* _db;
	NSMutableSet* _setCreatedTable;
}
-(void).cxx_destruct;
-(void)clearFileOfMsg:(id)msg;
-(id)internalGetMsgDBItem:(id)item uiLocalID:(unsigned long)anId;
-(unsigned long)GetImgOrVideoMsgCount:(id)count;
-(unsigned long)GetImgOrVideoMsgCount:(id)count FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(id)GetImgOrVideoNextMsg:(id)msg FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(id)GetImgOrVideoLastMsg:(id)msg;
-(id)GetImgOrVideoLastMsg:(id)msg FromID:(unsigned long)anId CreateTime:(unsigned long)time;
-(id)GetImgAndVideoMsgList:(id)list;
-(void)DelMsg:(id)msg MsgList:(id)list DelAll:(BOOL)all;
-(BOOL)ModMsgByBitSet:(id)set MsgWrap:(id)wrap BitSet:(unsigned long)set3;
-(BOOL)ModMsgSvrId:(id)anId LocalID:(unsigned long)anId2 SvrId:(unsigned long long)anId3;
-(BOOL)ModMsgStatus:(id)status LocalID:(unsigned long)anId MsgStatus:(unsigned long)status3;
-(BOOL)MergeImgStatus:(id)status LocalID:(unsigned long)anId ImgStatus:(unsigned long)status3;
-(unsigned long)ClearUnReadForSync:(id)sync CreateTime:(unsigned long)time;
-(BOOL)ClearUnRead:(id)read FromID:(unsigned long)anId ToID:(unsigned long)anId3;
-(unsigned long)GetUnReadCountInChat:(id)chat Since:(unsigned long)since;
-(unsigned long)GetUnReadCountInChat:(id)chat;
-(id)GetFirstUnreadMsg:(id)msg;
-(id)GetLastMsg:(id)msg;
-(id)GetDownMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit;
-(id)GetMsgByCreateTime:(id)time FromID:(unsigned long)anId FromCreateTime:(unsigned long)createTime Limit:(unsigned long)limit LeftCount:(unsigned*)count;
-(id)GetMsg:(id)msg FromID:(unsigned long)anId Limit:(unsigned long)limit;
-(id)GetMsg:(id)msg uiLocalID:(unsigned long)anId;
-(BOOL)addMsg:(id)msg MsgWrap:(id)wrap;
-(void)removeCreatedTableCache:(id)cache;
-(void)addCreatedTableCache:(id)cache;
-(BOOL)isTableCreated:(id)created;
-(void)setupCreatedTableCache;
-(void)dropTable:(id)table;
-(BOOL)createTable:(id)table;
-(id)getChatTable:(id)table;
-(id)getChatTableName:(id)name;
-(id)DBContext;
-(id)initWithPath:(id)path;
@end

