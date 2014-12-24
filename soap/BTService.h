

#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class BTService_Login;
@class BTService_LoginResponse;
@class BTService_Logout;
@class BTService_LogoutResponse;
@class BTService_GetUserStatus;
@class BTService_GetUserStatusResponse;
@class BTService_GetNameMaster;
@class BTService_GetNameMasterResponse;
@class BTService_GetNameMasterByUserNo;
@class BTService_GetNameMasterByUserNoResponse;
@class BTService_GetActionData;
@class BTService_GetActionDataResponse;
@class BTService_EntryAction;
@class BTService_EntryActionResponse;
@class BTService_GetActionDetail;
@class BTService_GetActionDetailResponse;
@class BTService_UpdateAction;
@class BTService_UpdateActionResponse;
@class BTService_GetLastLosterData;
@class BTService_GetLastLosterDataResponse;
@class BTService_GetLosterData;
@class BTService_GetLosterDataResponse;
@class BTService_WorkStart;
@class BTService_WorkStartResponse;
@class BTService_WorkEnd;
@class BTService_WorkEndResponse;
@class BTService_SendReport;
@class BTService_SendReportResponse;
@class BTService_GetConditionBoardSetting;
@class BTService_GetConditionBoardSettingResponse;
@class BTService_GetConditionDisplaySetting;
@class BTService_GetConditionDisplaySettingResponse;
@class BTService_GetConditionValue;
@class BTService_GetConditionValueResponse;
#import "tns1.h"
#import "tns2.h"
#import "tns5.h"
@interface BTService_Login : NSObject {
	
/* elements */
	NSString * userID_;
	NSString * password_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_Login *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * userID_;
@property (retain) NSString * password_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_LoginResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfUserMaster5L_SolL2Q * LoginResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_LoginResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfUserMaster5L_SolL2Q * LoginResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_Logout : NSObject {
	
/* elements */
	tns2_UserMaster * user_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_Logout *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_UserMaster * user_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_LogoutResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfLoginData5L_SolL2Q * LogoutResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_LogoutResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfLoginData5L_SolL2Q * LogoutResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetUserStatus : NSObject {
	
/* elements */
	tns2_UserMaster * loginUser_;
	NSNumber * groupCode_;
	NSNumber * divisionCode_;
	NSNumber * sectionCode_;
	NSNumber * teamCode_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetUserStatus *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_UserMaster * loginUser_;
@property (retain) NSNumber * groupCode_;
@property (retain) NSNumber * divisionCode_;
@property (retain) NSNumber * sectionCode_;
@property (retain) NSNumber * teamCode_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetUserStatusResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfClsUserStatusDatadk07q9fG * GetUserStatusResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetUserStatusResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfClsUserStatusDatadk07q9fG * GetUserStatusResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetNameMaster : NSObject {
	
/* elements */
	NSString * kind_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetNameMaster *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * kind_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetNameMasterResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfNameMaster5L_SolL2Q * GetNameMasterResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetNameMasterResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfNameMaster5L_SolL2Q * GetNameMasterResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetNameMasterByUserNo : NSObject {
	
/* elements */
	NSString * kind_;
	NSNumber * userNo_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetNameMasterByUserNo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * kind_;
@property (retain) NSNumber * userNo_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetNameMasterByUserNoResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfNameMaster5L_SolL2Q * GetNameMasterByUserNoResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetNameMasterByUserNoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfNameMaster5L_SolL2Q * GetNameMasterByUserNoResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetActionData : NSObject {
	
/* elements */
	NSNumber * userNo_;
	NSDate * dateStart_;
	NSDate * dateEnd_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetActionData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
@property (retain) NSDate * dateStart_;
@property (retain) NSDate * dateEnd_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetActionDataResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfClsActionData5L_SolL2Q * GetActionDataResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetActionDataResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfClsActionData5L_SolL2Q * GetActionDataResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_EntryAction : NSObject {
	
/* elements */
	tns2_UserMaster * user_;
	NSNumber * locationCode_;
	NSString * locationName_;
	NSNumber * actionCode_;
	NSString * actionName_;
	NSString * actionDetail_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_EntryAction *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_UserMaster * user_;
@property (retain) NSNumber * locationCode_;
@property (retain) NSString * locationName_;
@property (retain) NSNumber * actionCode_;
@property (retain) NSString * actionName_;
@property (retain) NSString * actionDetail_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_EntryActionResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResult * EntryActionResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_EntryActionResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResult * EntryActionResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetActionDetail : NSObject {
	
/* elements */
	NSNumber * userNo_;
	NSNumber * count_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetActionDetail *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
@property (retain) NSNumber * count_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetActionDetailResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfstring * GetActionDetailResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetActionDetailResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfstring * GetActionDetailResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_UpdateAction : NSObject {
	
/* elements */
	NSNumber * userNo_;
	NSNumber * actionNo_;
	NSNumber * locationCode_;
	NSString * locationName_;
	NSNumber * actionCode_;
	NSString * actionName_;
	NSString * actionDetail_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_UpdateAction *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
@property (retain) NSNumber * actionNo_;
@property (retain) NSNumber * locationCode_;
@property (retain) NSString * locationName_;
@property (retain) NSNumber * actionCode_;
@property (retain) NSString * actionName_;
@property (retain) NSString * actionDetail_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_UpdateActionResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResult * UpdateActionResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_UpdateActionResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResult * UpdateActionResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetLastLosterData : NSObject {
	
/* elements */
	NSNumber * userNo_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetLastLosterData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetLastLosterDataResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfRosterData5L_SolL2Q * GetLastLosterDataResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetLastLosterDataResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfRosterData5L_SolL2Q * GetLastLosterDataResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetLosterData : NSObject {
	
/* elements */
	NSNumber * userNo_;
	NSDate * workdateFrom_;
	NSDate * workdateTo_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetLosterData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
@property (retain) NSDate * workdateFrom_;
@property (retain) NSDate * workdateTo_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetLosterDataResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfRosterData5L_SolL2Q * GetLosterDataResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetLosterDataResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfRosterData5L_SolL2Q * GetLosterDataResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_WorkStart : NSObject {
	
/* elements */
	NSNumber * userNo_;
	NSDate * workDate_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_WorkStart *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
@property (retain) NSDate * workDate_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_WorkStartResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfRosterData5L_SolL2Q * WorkStartResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_WorkStartResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfRosterData5L_SolL2Q * WorkStartResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_WorkEnd : NSObject {
	
/* elements */
	NSNumber * userNo_;
	NSDate * workDate_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_WorkEnd *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * userNo_;
@property (retain) NSDate * workDate_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_WorkEndResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfRosterData5L_SolL2Q * WorkEndResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_WorkEndResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfRosterData5L_SolL2Q * WorkEndResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_SendReport : NSObject {
	
/* elements */
	NSNumber * rosterNo_;
	NSNumber * status_;
	NSString * userComment_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_SendReport *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * rosterNo_;
@property (retain) NSNumber * status_;
@property (retain) NSString * userComment_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_SendReportResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfRosterData5L_SolL2Q * SendReportResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_SendReportResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfRosterData5L_SolL2Q * SendReportResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetConditionBoardSetting : NSObject {
	
/* elements */
	NSString * ipaddress_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetConditionBoardSetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ipaddress_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetConditionBoardSettingResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfConditionBoardSetting5L_SolL2Q * GetConditionBoardSettingResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetConditionBoardSettingResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfConditionBoardSetting5L_SolL2Q * GetConditionBoardSettingResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetConditionDisplaySetting : NSObject {
	
/* elements */
	NSNumber * boardNo_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetConditionDisplaySetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * boardNo_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetConditionDisplaySettingResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfConditionDisplaySetting5L_SolL2Q * GetConditionDisplaySettingResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetConditionDisplaySettingResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfConditionDisplaySetting5L_SolL2Q * GetConditionDisplaySettingResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetConditionValue : NSObject {
	
/* elements */
	tns5_ArrayOflong * users_;
	NSDate * workDate_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetConditionValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns5_ArrayOflong * users_;
@property (retain) NSDate * workDate_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface BTService_GetConditionValueResponse : NSObject {
	
/* elements */
	tns1_ClsServiceResultOfClsConditionBoardData5L_SolL2Q * GetConditionValueResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (BTService_GetConditionValueResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ClsServiceResultOfClsConditionBoardData5L_SolL2Q * GetConditionValueResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xs.h"
#import "BTService.h"
#import "ns1.h"
#import "tns1.h"
#import "tns2.h"
#import "tns3.h"
#import "tns4.h"
#import "tns5.h"
@class BasicHttpBinding_IBTServiceBinding;
@interface BTService : NSObject {
	
}
+ (BasicHttpBinding_IBTServiceBinding *)BasicHttpBinding_IBTServiceBinding;
@end
@class BasicHttpBinding_IBTServiceBindingResponse;
@class BasicHttpBinding_IBTServiceBindingOperation;
@protocol BasicHttpBinding_IBTServiceBindingResponseDelegate <NSObject>
- (void) operation:(BasicHttpBinding_IBTServiceBindingOperation *)operation completedWithResponse:(BasicHttpBinding_IBTServiceBindingResponse *)response;
@end
@interface BasicHttpBinding_IBTServiceBinding : NSObject <BasicHttpBinding_IBTServiceBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(BasicHttpBinding_IBTServiceBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (BasicHttpBinding_IBTServiceBindingResponse *)LoginUsingParameters:(BTService_Login *)aParameters ;
- (void)LoginAsyncUsingParameters:(BTService_Login *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)LogoutUsingParameters:(BTService_Logout *)aParameters ;
- (void)LogoutAsyncUsingParameters:(BTService_Logout *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetUserStatusUsingParameters:(BTService_GetUserStatus *)aParameters ;
- (void)GetUserStatusAsyncUsingParameters:(BTService_GetUserStatus *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetNameMasterUsingParameters:(BTService_GetNameMaster *)aParameters ;
- (void)GetNameMasterAsyncUsingParameters:(BTService_GetNameMaster *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetNameMasterByUserNoUsingParameters:(BTService_GetNameMasterByUserNo *)aParameters ;
- (void)GetNameMasterByUserNoAsyncUsingParameters:(BTService_GetNameMasterByUserNo *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetActionDataUsingParameters:(BTService_GetActionData *)aParameters ;
- (void)GetActionDataAsyncUsingParameters:(BTService_GetActionData *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)EntryActionUsingParameters:(BTService_EntryAction *)aParameters ;
- (void)EntryActionAsyncUsingParameters:(BTService_EntryAction *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetActionDetailUsingParameters:(BTService_GetActionDetail *)aParameters ;
- (void)GetActionDetailAsyncUsingParameters:(BTService_GetActionDetail *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)UpdateActionUsingParameters:(BTService_UpdateAction *)aParameters ;
- (void)UpdateActionAsyncUsingParameters:(BTService_UpdateAction *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetLastLosterDataUsingParameters:(BTService_GetLastLosterData *)aParameters ;
- (void)GetLastLosterDataAsyncUsingParameters:(BTService_GetLastLosterData *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetLosterDataUsingParameters:(BTService_GetLosterData *)aParameters ;
- (void)GetLosterDataAsyncUsingParameters:(BTService_GetLosterData *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)WorkStartUsingParameters:(BTService_WorkStart *)aParameters ;
- (void)WorkStartAsyncUsingParameters:(BTService_WorkStart *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)WorkEndUsingParameters:(BTService_WorkEnd *)aParameters ;
- (void)WorkEndAsyncUsingParameters:(BTService_WorkEnd *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)SendReportUsingParameters:(BTService_SendReport *)aParameters ;
- (void)SendReportAsyncUsingParameters:(BTService_SendReport *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetConditionBoardSettingUsingParameters:(BTService_GetConditionBoardSetting *)aParameters ;
- (void)GetConditionBoardSettingAsyncUsingParameters:(BTService_GetConditionBoardSetting *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetConditionDisplaySettingUsingParameters:(BTService_GetConditionDisplaySetting *)aParameters ;
- (void)GetConditionDisplaySettingAsyncUsingParameters:(BTService_GetConditionDisplaySetting *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
- (BasicHttpBinding_IBTServiceBindingResponse *)GetConditionValueUsingParameters:(BTService_GetConditionValue *)aParameters ;
- (void)GetConditionValueAsyncUsingParameters:(BTService_GetConditionValue *)aParameters  delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)responseDelegate;
@end
@interface BasicHttpBinding_IBTServiceBindingOperation : NSOperation {
	BasicHttpBinding_IBTServiceBinding *binding;
	BasicHttpBinding_IBTServiceBindingResponse *response;
	id<BasicHttpBinding_IBTServiceBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) BasicHttpBinding_IBTServiceBinding *binding;
@property (readonly) BasicHttpBinding_IBTServiceBindingResponse *response;
@property (nonatomic, assign) id<BasicHttpBinding_IBTServiceBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate;
@end
@interface BasicHttpBinding_IBTServiceBinding_Login : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_Login * parameters;
}
@property (retain) BTService_Login * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_Login *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_Logout : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_Logout * parameters;
}
@property (retain) BTService_Logout * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_Logout *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetUserStatus : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetUserStatus * parameters;
}
@property (retain) BTService_GetUserStatus * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetUserStatus *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetNameMaster : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetNameMaster * parameters;
}
@property (retain) BTService_GetNameMaster * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetNameMaster *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetNameMasterByUserNo : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetNameMasterByUserNo * parameters;
}
@property (retain) BTService_GetNameMasterByUserNo * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetNameMasterByUserNo *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetActionData : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetActionData * parameters;
}
@property (retain) BTService_GetActionData * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetActionData *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_EntryAction : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_EntryAction * parameters;
}
@property (retain) BTService_EntryAction * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_EntryAction *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetActionDetail : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetActionDetail * parameters;
}
@property (retain) BTService_GetActionDetail * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetActionDetail *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_UpdateAction : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_UpdateAction * parameters;
}
@property (retain) BTService_UpdateAction * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_UpdateAction *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetLastLosterData : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetLastLosterData * parameters;
}
@property (retain) BTService_GetLastLosterData * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetLastLosterData *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetLosterData : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetLosterData * parameters;
}
@property (retain) BTService_GetLosterData * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetLosterData *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_WorkStart : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_WorkStart * parameters;
}
@property (retain) BTService_WorkStart * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_WorkStart *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_WorkEnd : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_WorkEnd * parameters;
}
@property (retain) BTService_WorkEnd * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_WorkEnd *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_SendReport : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_SendReport * parameters;
}
@property (retain) BTService_SendReport * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_SendReport *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetConditionBoardSetting : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetConditionBoardSetting * parameters;
}
@property (retain) BTService_GetConditionBoardSetting * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetConditionBoardSetting *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetConditionDisplaySetting : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetConditionDisplaySetting * parameters;
}
@property (retain) BTService_GetConditionDisplaySetting * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetConditionDisplaySetting *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_GetConditionValue : BasicHttpBinding_IBTServiceBindingOperation {
	BTService_GetConditionValue * parameters;
}
@property (retain) BTService_GetConditionValue * parameters;
- (id)initWithBinding:(BasicHttpBinding_IBTServiceBinding *)aBinding delegate:(id<BasicHttpBinding_IBTServiceBindingResponseDelegate>)aDelegate
	parameters:(BTService_GetConditionValue *)aParameters
;
@end
@interface BasicHttpBinding_IBTServiceBinding_envelope : NSObject {
}
+ (BasicHttpBinding_IBTServiceBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface BasicHttpBinding_IBTServiceBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
