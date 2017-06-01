//
//  BNCServerInterface.h
//  Branch-SDK
//
//  Created by Alex Austin on 6/4/14.
//  Copyright (c) 2014 Branch Metrics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNCServerResponse.h"

typedef void (^BNCServerCallback)(BNCServerResponse *response, NSError *error);

@interface BNCServerInterface : NSObject

- (BNCServerResponse *)getRequest:(NSDictionary *)params url:(NSString *)url key:(NSString *)key;
- (BNCServerResponse *)getRequest:(NSDictionary *)params url:(NSString *)url key:(NSString *)key log:(BOOL)log;
- (void)getRequest:(NSDictionary *)params url:(NSString *)url key:(NSString *)key callback:(BNCServerCallback)callback;
- (void)getRequest:(NSDictionary *)params url:(NSString *)url key:(NSString *)key log:(BOOL)log callback:(BNCServerCallback)callback;

- (BNCServerResponse *)postRequest:(NSDictionary *)post url:(NSString *)url key:(NSString *)key log:(BOOL)log;
- (void)postRequest:(NSDictionary *)post url:(NSString *)url key:(NSString *)key callback:(BNCServerCallback)callback;
- (void)postRequest:(NSDictionary *)post url:(NSString *)url key:(NSString *)key log:(BOOL)log callback:(BNCServerCallback)callback;

- (void)genericHTTPRequest:(NSURLRequest *)request log:(BOOL)log callback:(BNCServerCallback)callback;
- (BNCServerResponse *)genericHTTPRequest:(NSURLRequest *)request log:(BOOL)log;

@end
