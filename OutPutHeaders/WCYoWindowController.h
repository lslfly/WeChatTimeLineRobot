/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMWindowController.h"
#import "WeChat-Structs.h"
#import "WCYoWindowDelegate.h"

@class MMUIWindow, NSDate, NSObject, NSString;
@protocol WCYoDelegate;

@interface WCYoWindowController : MMWindowController <WCYoWindowDelegate> {
	MMUIWindow* _window;
	NSDate* _showedDate;
	unsigned long _yoTime;
	unsigned long _yoTitle;
	NSObject<WCYoDelegate>* _yoDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak NSObject<WCYoDelegate>* yoDelegate;
@property(assign, nonatomic) unsigned long yoTitle;
@property(assign, nonatomic) unsigned long yoTime;
@property(retain, nonatomic) NSDate* showedDate;
-(void)setWindow:(id)window;
-(void).cxx_destruct;
-(id)window:(id)window hitTest:(CGPoint)test withEvent:(id)event;
-(void)showWindowAnimateType:(int)type withTransitionAnimation:(int)transitionAnimation;
-(void)addYoCount:(unsigned)count forUsername:(id)username type:(int)type;
-(void)setupYoWithCount:(unsigned)count username:(id)username type:(int)type delegate:(id)delegate nameLabelString:(id)string descriptionString:(id)string6 timeString:(id)string7 allowReply:(BOOL)reply;
-(void)setupYoWithCount:(unsigned)count username:(id)username type:(int)type delegate:(id)delegate nameLabelString:(id)string descriptionString:(id)string6 allowReply:(BOOL)reply;
-(void)setupYoWithCount:(unsigned)count username:(id)username type:(int)type delegate:(id)delegate;
-(void)restartAnimation;
-(void)dealloc;
-(id)window;
-(id)init;
@end

