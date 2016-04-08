/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface NewUserGuideConfig : XXUnknownSuperclass <PBCoding> {
	BOOL bShowMainFrameTip;
	BOOL bShowContactsAddTip;
	BOOL bShowVoiceTip;
	BOOL bShowVoipAndPhoneTip;
	BOOL bShowNearByRedDot;
	BOOL bShowShakeRedDot;
	BOOL bShowSightTip;
	unsigned long uiRegTime;
	unsigned long uiStartCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL bShowSightTip;
@property(assign, nonatomic) BOOL bShowShakeRedDot;
@property(assign, nonatomic) BOOL bShowNearByRedDot;
@property(assign, nonatomic) BOOL bShowVoipAndPhoneTip;
@property(assign, nonatomic) BOOL bShowVoiceTip;
@property(assign, nonatomic) BOOL bShowContactsAddTip;
@property(assign, nonatomic) BOOL bShowMainFrameTip;
@property(assign, nonatomic) unsigned long uiStartCount;
@property(assign, nonatomic) unsigned long uiRegTime;
+(void)initialize;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
