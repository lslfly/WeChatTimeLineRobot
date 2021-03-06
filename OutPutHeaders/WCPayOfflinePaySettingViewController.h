/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "WCPayBaseViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCPayPickerViewDelegate.h"

@class NSString, MMTableView, NSArray, WCPayPickerView;

@interface WCPayOfflinePaySettingViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayPickerViewDelegate, WCActionSheetDelegate, UIAlertViewDelegate> {
	BOOL _didAutoShowedPickCardView;
	BOOL _shouldAutoPresentChooseCardView;
	MMTableView* _tableView;
	NSArray* _choices;
	WCPayPickerView* _m_pickerView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCPayPickerView* m_pickerView;
@property(retain, nonatomic) NSArray* choices;
@property(retain, nonatomic) MMTableView* tableView;
@property(assign, nonatomic) BOOL shouldAutoPresentChooseCardView;
-(void).cxx_destruct;
-(void)onChooseCardIndex:(int)index;
-(void)onChooseCardText:(id)text;
-(void)clearOfflinePayAndPopWithoutAlert;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)WCPayPickerViewDidChooseRow:(int)wcpayPickerView atSession:(int)session;
-(id)tipsLabelForChangePayCard;
-(id)currentCardText;
-(id)makeCellForChangeLimit;
-(id)makeCellForPayCard;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)onCloseOfflinePay;
-(void)onOperate:(id)operate;
-(void)onSelectChangeLimit:(id)limit;
-(void)onSelectChangeCard:(id)card;
-(void)onBackButton:(id)button;
-(void)viewDidAppear:(BOOL)view;
-(void)refreshViewWithData:(id)data;
-(void)setupView;
-(void)viewDidLoad;
-(void)dealloc;
@end

