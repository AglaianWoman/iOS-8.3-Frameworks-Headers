//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject
{
    NSMutableArray *nodeList;
    UIColor *labelColor;
}

@property(retain) UIColor *labelColor;
- (id)nodeAtIndex:(unsigned int)arg1;
- (id)init;
- (void)refresh;
- (id)nodeWithNodeInfo:(id)arg1;
- (void)createNodeList;
@property(readonly) unsigned int numNodes;

@end

