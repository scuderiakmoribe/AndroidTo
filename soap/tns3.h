#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
#import "tns4.h"
typedef enum {
	tns3_ErrorCode_none = 0,
	tns3_ErrorCode_正常,
	tns3_ErrorCode_データベース接続エラー,
	tns3_ErrorCode_Webサービス接続エラー,
	tns3_ErrorCode_Webサービス実行エラー,
	tns3_ErrorCode_該当ユーザー無し,
	tns3_ErrorCode_データ取得エラー,
	tns3_ErrorCode_勤務終了済みエラー,
	tns3_ErrorCode_勤務未開始エラー,
	tns3_ErrorCode_更新対象なしエラー,
	tns3_ErrorCode_不明なエラー,
} tns3_ErrorCode;
tns3_ErrorCode tns3_ErrorCode_enumFromString(NSString *string);
NSString * tns3_ErrorCode_stringFromEnum(tns3_ErrorCode enumValue);
