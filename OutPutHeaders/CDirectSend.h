/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface CDirectSend : XXUnknownSuperclass {
	unsigned char m_ucCmdID;
	unsigned char m_ucFlag;
	unsigned long m_uiSeq;
	unsigned short m_usUsrNameLen;
	NSString* m_nsUsrNameList;
	unsigned short m_usDataLen;
	NSData* m_dtData;
}
@property(retain, nonatomic) NSData* m_dtData;
@property(assign, nonatomic) unsigned short m_usDataLen;
@property(retain, nonatomic) NSString* m_nsUsrNameList;
@property(assign, nonatomic) unsigned short m_usUsrNameLen;
@property(assign, nonatomic) unsigned long m_uiSeq;
@property(assign, nonatomic) unsigned char m_ucFlag;
@property(assign, nonatomic) unsigned char m_ucCmdID;
-(void).cxx_destruct;
-(BOOL)Decode:(id)decode;
-(id)Encode;
-(id)init;
@end

