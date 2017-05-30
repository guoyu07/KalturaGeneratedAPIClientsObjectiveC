// ===================================================================================================
//                           _  __     _ _
//                          | |/ /__ _| | |_ _  _ _ _ __ _
//                          | ' </ _` | |  _| || | '_/ _` |
//                          |_|\_\__,_|_|\__|\_,_|_| \__,_|
//
// This file is part of the Kaltura Collaborative Media Suite which allows users
// to do with audio, video, and animation what Wiki platfroms allow them to do with
// text.
//
// Copyright (C) 2006-2017  Kaltura Inc.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// @ignore
// ===================================================================================================
// @package Kaltura
// @subpackage Client
#import "../KalturaClient.h"
#import "KalturaBusinessProcessNotificationClientPlugin.h"

///////////////////////// enums /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaActivitiBusinessProcessServerOrderBy : NSObject
+ (NSString*)CREATED_AT_ASC;
+ (NSString*)UPDATED_AT_ASC;
+ (NSString*)CREATED_AT_DESC;
+ (NSString*)UPDATED_AT_DESC;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaActivitiBusinessProcessServerProtocol : NSObject
+ (NSString*)HTTP;
+ (NSString*)HTTPS;
@end

///////////////////////// classes /////////////////////////
// @package Kaltura
// @subpackage Client
@interface KalturaActivitiBusinessProcessServer : KalturaBusinessProcessServer
@property (nonatomic,copy) NSString* host;
@property (nonatomic,assign) int port;
@property (nonatomic,copy) NSString* protocol;	// enum KalturaActivitiBusinessProcessServerProtocol
@property (nonatomic,copy) NSString* username;
@property (nonatomic,copy) NSString* password;
- (KalturaFieldType)getTypeOfHost;
- (KalturaFieldType)getTypeOfPort;
- (KalturaFieldType)getTypeOfProtocol;
- (KalturaFieldType)getTypeOfUsername;
- (KalturaFieldType)getTypeOfPassword;
- (void)setPortFromString:(NSString*)aPropVal;
@end

// @package Kaltura
// @subpackage Client
@interface KalturaActivitiBusinessProcessServerBaseFilter : KalturaBusinessProcessServerFilter
@end

// @package Kaltura
// @subpackage Client
@interface KalturaActivitiBusinessProcessServerFilter : KalturaActivitiBusinessProcessServerBaseFilter
@end

///////////////////////// services /////////////////////////