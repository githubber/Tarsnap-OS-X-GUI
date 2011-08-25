//
//  TSGBackupListLoader.h
//  Tarsnap GUI
//
//  Created by Pieter de Bie on 8/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
// Communicates with tarsnap via pipes to read in the list of archives (tarsnap --list-archives)

#import <Foundation/Foundation.h>
#import "TSGBackup.h"

typedef void (^TSGBackupListLoaderCallback)(TSGBackup *backupItem);

@interface TSGBackupListLoader : NSObject

- (id)initWithKeyURL:(NSURL *)theKeyURL;
- (void)loadListWithCallback:(TSGBackupListLoaderCallback)theCallback;

@end
