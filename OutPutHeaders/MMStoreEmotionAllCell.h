/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class EmoticonStoreItem, UIView, MMWebImageView, EmoticonStoreDownloadView, UIImageView, UILabel;

@interface MMStoreEmotionAllCell : XXUnknownSuperclass {
	int _type;
	int _scene;
	MMWebImageView* _m_webImageView;
	UILabel* _m_nameLabel;
	UILabel* _m_inroduceLabel;
	EmoticonStoreDownloadView* _m_downloadView;
	EmoticonStoreItem* _m_storeItem;
	UIView* _m_lineView;
	MMWebImageView* _m_tagImageView;
	UIImageView* _m_newImageView;
}
@property(retain, nonatomic) UIImageView* m_newImageView;
@property(retain, nonatomic) MMWebImageView* m_tagImageView;
@property(retain, nonatomic) UIView* m_lineView;
@property(retain, nonatomic) EmoticonStoreItem* m_storeItem;
@property(retain, nonatomic) EmoticonStoreDownloadView* m_downloadView;
@property(retain, nonatomic) UILabel* m_inroduceLabel;
@property(retain, nonatomic) UILabel* m_nameLabel;
@property(retain, nonatomic) MMWebImageView* m_webImageView;
-(void).cxx_destruct;
-(void)setScene:(int)scene andType:(int)type;
-(void)updateStoreItem:(id)item Delegate:(id)delegate Entrance:(unsigned long)entrance;
-(void)layoutSubviews;
-(void)loadTagImageView;
-(void)initDownloadView;
-(void)initIntroduceLabel;
-(void)initNameLabel;
-(void)initWebImageView;
-(void)initLineView;
-(void)drawRect:(CGRect)rect;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setMsgBrowseStyleWithDownloadable:(BOOL)downloadable;
-(id)initWithFrame:(CGRect)frame;
@end

