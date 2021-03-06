/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#ifdef USE_TI_UIIOSCOVERFLOWVIEW

#import "TiUIView.h"
#import "AFOpenFlow/AFOpenFlowView.h"
#import "ImageLoader.h"

@interface TiUIiOSCoverFlowView : TiUIView <AFOpenFlowViewDataSource,AFOpenFlowViewDelegate,ImageLoaderDelegate>
{
@private
	AFOpenFlowView *view;
	NSMutableDictionary* toLoad;
	NSMutableDictionary* loading;
	NSRecursiveLock* loadLock;
	NSInteger previous;
}

-(void)setImage:(id)image forIndex:(NSInteger)index;

@end

#endif
