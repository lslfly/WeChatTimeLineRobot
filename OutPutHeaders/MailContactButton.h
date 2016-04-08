/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, CMailContact;
@protocol MailContactButtonDelegate;

@interface MailContactButton : XXUnknownSuperclass {
	CMailContact* m_oMailContact;
	id<MailContactButtonDelegate> m_delegate;
	UIButton* m_btnMailContactButton;
}
@property(retain, nonatomic) CMailContact* m_oMailContact;
@property(assign, nonatomic) __weak id<MailContactButtonDelegate> m_delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)onReceiverBtnRepeatClick:(id)click;
-(void)onReceiverBtnClick:(id)click;
-(void)createButton;
-(id)initWithMailContact:(id)mailContact;
@end
