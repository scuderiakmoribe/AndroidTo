#import "tns3.h"
#import <libxml/xmlstring.h>
#if TARGET_OS_IPHONE
#import <CFNetwork/CFNetwork.h>
#endif
tns3_ErrorCode tns3_ErrorCode_enumFromString(NSString *string)
{
	if([string isEqualToString:@"正常"]) {
		return tns3_ErrorCode_正常;
	}
	if([string isEqualToString:@"データベース接続エラー"]) {
		return tns3_ErrorCode_データベース接続エラー;
	}
	if([string isEqualToString:@"Webサービス接続エラー"]) {
		return tns3_ErrorCode_Webサービス接続エラー;
	}
	if([string isEqualToString:@"Webサービス実行エラー"]) {
		return tns3_ErrorCode_Webサービス実行エラー;
	}
	if([string isEqualToString:@"該当ユーザー無し"]) {
		return tns3_ErrorCode_該当ユーザー無し;
	}
	if([string isEqualToString:@"データ取得エラー"]) {
		return tns3_ErrorCode_データ取得エラー;
	}
	if([string isEqualToString:@"勤務終了済みエラー"]) {
		return tns3_ErrorCode_勤務終了済みエラー;
	}
	if([string isEqualToString:@"勤務未開始エラー"]) {
		return tns3_ErrorCode_勤務未開始エラー;
	}
	if([string isEqualToString:@"更新対象なしエラー"]) {
		return tns3_ErrorCode_更新対象なしエラー;
	}
	if([string isEqualToString:@"不明なエラー"]) {
		return tns3_ErrorCode_不明なエラー;
	}
	
	return tns3_ErrorCode_none;
}
NSString * tns3_ErrorCode_stringFromEnum(tns3_ErrorCode enumValue)
{
	switch (enumValue) {
		case tns3_ErrorCode_正常:
			return @"正常";
			break;
		case tns3_ErrorCode_データベース接続エラー:
			return @"データベース接続エラー";
			break;
		case tns3_ErrorCode_Webサービス接続エラー:
			return @"Webサービス接続エラー";
			break;
		case tns3_ErrorCode_Webサービス実行エラー:
			return @"Webサービス実行エラー";
			break;
		case tns3_ErrorCode_該当ユーザー無し:
			return @"該当ユーザー無し";
			break;
		case tns3_ErrorCode_データ取得エラー:
			return @"データ取得エラー";
			break;
		case tns3_ErrorCode_勤務終了済みエラー:
			return @"勤務終了済みエラー";
			break;
		case tns3_ErrorCode_勤務未開始エラー:
			return @"勤務未開始エラー";
			break;
		case tns3_ErrorCode_更新対象なしエラー:
			return @"更新対象なしエラー";
			break;
		case tns3_ErrorCode_不明なエラー:
			return @"不明なエラー";
			break;
		default:
			return @"";
	}
}
