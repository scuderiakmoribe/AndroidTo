#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class tns2_ArrayOfUserMaster;
@class tns2_UserMaster;
@class tns2_ArrayOfLoginData;
@class tns2_LoginData;
@class tns2_RosterData;
@class tns2_ArrayOfNameMaster;
@class tns2_NameMaster;
@class tns2_ArrayOfClsActionData;
@class tns2_ClsActionData;
@class tns2_ActionData;
@class tns2_ArrayOfRosterData;
@class tns2_ArrayOfConditionBoardSetting;
@class tns2_ConditionBoardSetting;
@class tns2_ArrayOfConditionDisplaySetting;
@class tns2_ConditionDisplaySetting;
@class tns2_ArrayOfClsConditionBoardData;
@class tns2_ClsConditionBoardData;
@interface tns2_UserMaster : NSObject {
	
/* elements */
	NSDate * AddDateTime;
	USBoolean * DeleteFlag;
	NSNumber * DivisionCode;
	NSDate * EnableEndDate;
	NSDate * EnableStartDate;
	NSNumber * GroupCode;
	NSString * Name;
	NSString * NameAbbreviation;
	NSString * Password;
	NSNumber * SectionCode;
	NSNumber * TeamCode;
	NSDate * UpdateDateTime;
	NSNumber * UserGroupCode;
	NSString * UserID;
	NSNumber * UserNo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_UserMaster *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * AddDateTime;
@property (retain) USBoolean * DeleteFlag;
@property (retain) NSNumber * DivisionCode;
@property (retain) NSDate * EnableEndDate;
@property (retain) NSDate * EnableStartDate;
@property (retain) NSNumber * GroupCode;
@property (retain) NSString * Name;
@property (retain) NSString * NameAbbreviation;
@property (retain) NSString * Password;
@property (retain) NSNumber * SectionCode;
@property (retain) NSNumber * TeamCode;
@property (retain) NSDate * UpdateDateTime;
@property (retain) NSNumber * UserGroupCode;
@property (retain) NSString * UserID;
@property (retain) NSNumber * UserNo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfUserMaster : NSObject {
	
/* elements */
	NSMutableArray *UserMaster;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfUserMaster *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addUserMaster:(tns2_UserMaster *)toAdd;
@property (readonly) NSMutableArray * UserMaster;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_LoginData : NSObject {
	
/* elements */
	NSNumber * DataNo;
	NSDate * Login;
	NSDate * Logout;
	NSNumber * UserNo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_LoginData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * DataNo;
@property (retain) NSDate * Login;
@property (retain) NSDate * Logout;
@property (retain) NSNumber * UserNo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfLoginData : NSObject {
	
/* elements */
	NSMutableArray *LoginData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfLoginData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addLoginData:(tns2_LoginData *)toAdd;
@property (readonly) NSMutableArray * LoginData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_RosterData : NSObject {
	
/* elements */
	NSDate * AddDateTime;
	NSDate * EndDateTime;
	NSString * ManagerComment;
	NSNumber * ManagerStatus;
	NSNumber * RosterNo;
	NSDate * StartDateTime;
	NSDate * UpdateDateTime;
	NSString * UserComment;
	NSNumber * UserNo;
	NSNumber * UserStatus;
	NSDate * WorkDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_RosterData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * AddDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * ManagerComment;
@property (retain) NSNumber * ManagerStatus;
@property (retain) NSNumber * RosterNo;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * UpdateDateTime;
@property (retain) NSString * UserComment;
@property (retain) NSNumber * UserNo;
@property (retain) NSNumber * UserStatus;
@property (retain) NSDate * WorkDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_NameMaster : NSObject {
	
/* elements */
	NSDate * AddDateTime;
	USBoolean * DeleteFlag;
	NSDate * EnableEndDate;
	NSDate * EnableStartDate;
	NSString * Name;
	NSString * NameAbbreviation;
	NSNumber * NameCode;
	NSString * NameKind;
	NSDate * UpdateDateTime;
	NSNumber * UserNo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_NameMaster *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * AddDateTime;
@property (retain) USBoolean * DeleteFlag;
@property (retain) NSDate * EnableEndDate;
@property (retain) NSDate * EnableStartDate;
@property (retain) NSString * Name;
@property (retain) NSString * NameAbbreviation;
@property (retain) NSNumber * NameCode;
@property (retain) NSString * NameKind;
@property (retain) NSDate * UpdateDateTime;
@property (retain) NSNumber * UserNo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfNameMaster : NSObject {
	
/* elements */
	NSMutableArray *NameMaster;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfNameMaster *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addNameMaster:(tns2_NameMaster *)toAdd;
@property (readonly) NSMutableArray * NameMaster;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ActionData : NSObject {
	
/* elements */
	NSNumber * ActionCode;
	NSString * ActionDetail;
	NSNumber * ActionNo;
	NSDate * AddDateTime;
	NSDate * EndDateTime;
	NSNumber * LocationCode;
	NSDate * ScheduledEndDateTime;
	NSDate * StartDateTime;
	NSDate * UpdateDateTime;
	NSNumber * UserNo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ActionData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ActionCode;
@property (retain) NSString * ActionDetail;
@property (retain) NSNumber * ActionNo;
@property (retain) NSDate * AddDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSNumber * LocationCode;
@property (retain) NSDate * ScheduledEndDateTime;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * UpdateDateTime;
@property (retain) NSNumber * UserNo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ClsActionData : NSObject {
	
/* elements */
	NSString * ActionName;
	tns2_ActionData * BaseActionData;
	NSString * LocationName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ClsActionData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ActionName;
@property (retain) tns2_ActionData * BaseActionData;
@property (retain) NSString * LocationName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfClsActionData : NSObject {
	
/* elements */
	NSMutableArray *ClsActionData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfClsActionData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClsActionData:(tns2_ClsActionData *)toAdd;
@property (readonly) NSMutableArray * ClsActionData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfRosterData : NSObject {
	
/* elements */
	NSMutableArray *RosterData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfRosterData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRosterData:(tns2_RosterData *)toAdd;
@property (readonly) NSMutableArray * RosterData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ConditionBoardSetting : NSObject {
	
/* elements */
	NSNumber * BoardNo;
	NSString * BoardTitle;
	NSNumber * HolizonCount;
	NSString * IPAddress;
	NSNumber * UpdateCycle;
	NSNumber * VerticalCount;
	NSDate * WorkStartClock;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ConditionBoardSetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * BoardNo;
@property (retain) NSString * BoardTitle;
@property (retain) NSNumber * HolizonCount;
@property (retain) NSString * IPAddress;
@property (retain) NSNumber * UpdateCycle;
@property (retain) NSNumber * VerticalCount;
@property (retain) NSDate * WorkStartClock;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfConditionBoardSetting : NSObject {
	
/* elements */
	NSMutableArray *ConditionBoardSetting;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfConditionBoardSetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addConditionBoardSetting:(tns2_ConditionBoardSetting *)toAdd;
@property (readonly) NSMutableArray * ConditionBoardSetting;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ConditionDisplaySetting : NSObject {
	
/* elements */
	NSNumber * BoardNo;
	NSString * Comment;
	NSNumber * HolizonIndex;
	USBoolean * IsComment;
	USBoolean * IsTitle;
	NSNumber * UserNo;
	NSNumber * VerticalIndex;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ConditionDisplaySetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * BoardNo;
@property (retain) NSString * Comment;
@property (retain) NSNumber * HolizonIndex;
@property (retain) USBoolean * IsComment;
@property (retain) USBoolean * IsTitle;
@property (retain) NSNumber * UserNo;
@property (retain) NSNumber * VerticalIndex;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfConditionDisplaySetting : NSObject {
	
/* elements */
	NSMutableArray *ConditionDisplaySetting;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfConditionDisplaySetting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addConditionDisplaySetting:(tns2_ConditionDisplaySetting *)toAdd;
@property (readonly) NSMutableArray * ConditionDisplaySetting;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ClsConditionBoardData : NSObject {
	
/* elements */
	NSString * ActionName;
	tns2_ActionData * CurrentAction;
	NSString * LocationName;
	tns2_RosterData * Roster;
	tns2_UserMaster * User;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ClsConditionBoardData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ActionName;
@property (retain) tns2_ActionData * CurrentAction;
@property (retain) NSString * LocationName;
@property (retain) tns2_RosterData * Roster;
@property (retain) tns2_UserMaster * User;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface tns2_ArrayOfClsConditionBoardData : NSObject {
	
/* elements */
	NSMutableArray *ClsConditionBoardData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (tns2_ArrayOfClsConditionBoardData *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClsConditionBoardData:(tns2_ClsConditionBoardData *)toAdd;
@property (readonly) NSMutableArray * ClsConditionBoardData;
/* attributes */
- (NSDictionary *)attributes;
@end
