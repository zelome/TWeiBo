//
//  SinaWeiBo.h
//  WeiBo
//
//  Created by 健锋 章 on 11-8-2.
//  Copyright 2011年 Zelome. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"

@interface SinaWeiBo : NSObject <ASIHTTPRequestDelegate> {
    
}

/**
 * 获取OAuth认证URL
 *
 */
- (NSURL *)getOauthUrl:(NSString *)reqMethod 
            httpMethod:(NSString *)httpMethod 
                 token:(NSString *)token
           tokenSecret:(NSString *)tokenSecret
                verify:(NSString *)verify 
           callbackUrl:(NSString *)callbackUrl 
            parameters:(NSDictionary *)parameters;

/**
 * OAuth同步请求
 * 
 */
- (NSDictionary *) oauthRequest:(NSURL *) oauthUrl;

/**
 * 获取普通请求URL
 *
 */
- (NSURL *)getOrdinaryGetUrl:(NSString *)reqMethod
                       token:(NSString *)token 
                 tokenSecret:(NSString *)tokenSecret
                  parameters:(NSDictionary *)parameters;

/**
 * POST方式api同步请求
 *
 */
- (NSDictionary *) apiSynPostRequest:(NSString *)reqMethod
                               token:(NSString *)token 
                         tokenSecret:(NSString *)tokenSecret
                          parameters:(NSDictionary *)parameters;

/**
 * POST异步发送带图片微博
 *
 */
- (NSDictionary *) apiSynPostImageWithRequsetMethod:(NSString *)reqMethod
                                               token:(NSString *)token 
                                         tokenSecret:(NSString *)tokenSecret
                                           imageData:(NSData *) imageData
                                          parameters:(NSDictionary *)parameters;


/**
 * GET方式api同步请求
 * NSInteger reqType 请求方式 1:同步/2:异步
 * NSString reqMethod Api方法
 * NSString token AccessToken
 * NSString tokenSecret AccessTokenSecret
 * NSDictionary parameters 参数
 */
- (NSDictionary *) apiGetRequest:(int)reqType
                       reqMethod:(NSString *)reqMethod
                           token:(NSString *)token 
                     tokenSecret:(NSString *)tokenSecret
                      parameters:(NSDictionary *)parameters;

- (NSArray *) apiGetRequestWithReqMethod:(NSString *)reqMethod
                                   token:(NSString *)token 
                             tokenSecret:(NSString *)tokenSecret
                              parameters:(NSDictionary *)parameters;

@end
