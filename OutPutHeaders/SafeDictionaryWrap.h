/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSRecursiveLock, NSDictionary;

@interface SafeDictionaryWrap : MMObject {
	NSRecursiveLock* _lock;
	NSDictionary* _dic;
}
-(void).cxx_destruct;
-(unsigned)count;
-(id)valueForKey:(id)key;
-(void)safeSetDictionrary:(id)dictionrary;
-(id)init;
@end
