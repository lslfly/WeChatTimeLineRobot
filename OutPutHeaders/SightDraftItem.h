/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class UIImage, NSString;

@interface SightDraftItem : MMObject <PBCoding> {
	int mode;
	NSString* thumbPath;
	NSString* videoPath;
	UIImage* _thumbImg;
	NSString* _moviePath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* moviePath;
@property(retain, nonatomic) UIImage* thumbImg;
@property(retain, nonatomic) NSString* thumbPath;
@property(retain, nonatomic) NSString* videoPath;
@property(assign, nonatomic) int mode;
+(id)draftItemWithThumbImg:(id)thumbImg andPath:(id)path inMode:(int)mode;
+(void)initialize;
-(void).cxx_destruct;
-(id)getThumbPath;
-(id)getVideoPath;
-(void)dealloc;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
