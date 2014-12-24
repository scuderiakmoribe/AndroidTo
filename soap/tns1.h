#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class tns1_ClsServiceResultOfUserMaster5L_SolL2Q;
@class tns1_ClsServiceResult;
@class tns1_ClsServiceFaultData;
@class tns1_ClsServiceResultOfLoginData5L_SolL2Q;
@class tns1_ClsServiceResultOfClsUserStatusDatadk07q9fG;
@class tns1_ArrayOfClsUserStatusData;
@class tns1_ClsUserStatusData;
@class tns1_ClsServiceResultOfNameMaster5L_SolL2Q;
@class tns1_ClsServiceResultOfClsActionData5L_SolL2Q;
@class tns1_ClsServiceResultOfstring;
@class tns1_ClsServiceResultOfRosterData5L_SolL2Q;
@class tns1_ClsServiceResultOfConditionBoardSetting5L_SolL2Q;
@class tns1_ClsServiceResultOfConditionDisplaySetting5L_SolL2Q;
@class tns1_ClsServiceResultOfClsConditionBoardData5L_SolL2Q;
#import "tns2.h"
#import "tns3.h"
#import "tns5.h"
@interface tns1_ClsServiceResult : NSObject {
	
/* elements */
	tns3_ErrorCode ResultCode;
	NSString * ResultMessage;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) tns3_ErrorCode ResultCode;
@property (retain) NSString * ResultMessage;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfUserMaster5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfUserMaster * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfUserMaster5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfUserMaster * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceFaultData : NSObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceFaultData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfLoginData5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfLoginData * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfLoginData5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfLoginData * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsUserStatusData : NSObject {
	
/* elements */
	NSNumber * ActionCode;
	NSString * ActionDetail;
	NSDate * ActionEnd;
	NSString * ActionName;
	NSDate * ActionStart;
	NSString * ContactAddress1;
	NSString * ContactAddress2;
	NSNumber * DivisionCode;
	NSString * DivisionName;
	NSNumber * GroupCode;
	NSString * GroupName;
	NSNumber * LocationCode;
	NSString * LocationName;
	NSDate * LoginDateTime;
	NSDate * LogoutDateTime;
	tns2_RosterData * Roster;
	NSNumber * SectionCode;
	NSString * SectionName;
	NSNumber * TeamCode;
	NSString * TeamName;
	NSData * UserImageData;
	NSString * UserName;
	NSString * UserNameAbbreviation;
	NSNumber * UserNo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsUserStatusData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ActionCode;
@property (retain) NSString * ActionDetail;
@property (retain) NSDate * ActionEnd;
@property (retain) NSString * ActionName;
@property (retain) NSDate * ActionStart;
@property (retain) NSString * ContactAddress1;
@property (retain) NSString * ContactAddress2;
@property (retain) NSNumber * DivisionCode;
@property (retain) NSString * DivisionName;
@property (retain) NSNumber * GroupCode;
@property (retain) NSString * GroupName;
@property (retain) NSNumber * LocationCode;
@property (retain) NSString * LocationName;
@property (retain) NSDate * LoginDateTime;
@property (retain) NSDate * LogoutDateTime;
@property (retain) tns2_RosterData * Roster;
@property (retain) NSNumber * SectionCode;
@property (retain) NSString * SectionName;
@property (retain) NSNumber * TeamCode;
@property (retain) NSString * TeamName;
@property (retain) NSData * UserImageData;
@property (retain) NSString * UserName;
@property (retain) NSString * UserNameAbbreviation;
@property (retain) NSNumber * UserNo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ArrayOfClsUserStatusData : NSObject {
	
/* elements */
	NSMutableArray *ClsUserStatusData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ArrayOfClsUserStatusData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClsUserStatusData:(tns1_ClsUserStatusData *)toAdd;
@property (readonly) NSMutableArray * ClsUserStatusData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfClsUserStatusDatadk07q9fG : tns1_ClsServiceResult {
	
/* elements */
	tns1_ArrayOfClsUserStatusData * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfClsUserStatusDatadk07q9fG *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns1_ArrayOfClsUserStatusData * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfNameMaster5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfNameMaster * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfNameMaster5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfNameMaster * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfClsActionData5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfClsActionData * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfClsActionData5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfClsActionData * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfstring : tns1_ClsServiceResult {
	
/* elements */
	tns5_ArrayOfstring * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfstring *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns5_ArrayOfstring * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfRosterData5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfRosterData * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfRosterData5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfRosterData * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfConditionBoardSetting5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfConditionBoardSetting * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfConditionBoardSetting5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfConditionBoardSetting * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfConditionDisplaySetting5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfConditionDisplaySetting * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfConditionDisplaySetting5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfConditionDisplaySetting * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns1_ClsServiceResultOfClsConditionBoardData5L_SolL2Q : tns1_ClsServiceResult {
	
/* elements */
	tns2_ArrayOfClsConditionBoardData * ResultValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns1_ClsServiceResultOfClsConditionBoardData5L_SolL2Q *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) tns2_ArrayOfClsConditionBoardData * ResultValue;
/* attributes */
- (NSDictionary *)attributes;
@end
