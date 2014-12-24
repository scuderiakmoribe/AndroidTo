//
//  ViewController.m
//  AndroidTo
//
//  Created by Developer on 2014/12/12.
//  Copyright (c) 2014年 Developer. All rights reserved.
//

#import "ViewController.h"
//#import "R9HTTPRequest.h"
#import "BTService.h"
//#import "TempConvert.h"

@interface ViewController (){
    NSString *String_StatusStart;
    NSString *String_StatusPlace;
    NSString *String_StatusAction;
    NSString *String_Supplement;
    
}

@property (unsafe_unretained, nonatomic) IBOutlet UILabel *Label_Status;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *Label_StatusStart;

//場所
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *Label_StatusPlace;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *TextField_StatusPlace;


//行動
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *Label_StatusAction;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *TextField_StatusAction;


//補足
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *TextField_Supplement;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)Tap_ActionPlace:(id)sender {
    NSLog(@"kokokita");
    //画面遷移--> 場所の選択List
    
    
    
}

- (IBAction)Tap_ActionAction:(id)sender {
    NSLog(@"kokokita koudou");

    _Label_StatusStart.text =@"henkou";

}

//登録ボタン
- (IBAction)Tap_Register:(id)sender {
    NSLog(@"touroku");
    
    //場所、行動の内容をステータスに反映させる
    [self UpdateStatus];

    
}


//場所、行動の内容をステータスに反映させる
- (void)UpdateStatus{
    NSLog(@"UpdateStatus");
    
    
    String_Supplement =_TextField_Supplement.text;
    NSLog(@"補足:%@",String_StatusAction);
    
    String_StatusPlace = _TextField_StatusPlace.text;
    NSLog(@"直近の場所:%@",String_StatusPlace);
    _Label_StatusPlace.text =String_StatusPlace;
    
    String_StatusAction = _TextField_StatusAction.text;
    NSLog(@"直近の行動:%@",String_StatusAction);
    
    if([String_Supplement length]>0){
        String_StatusAction=[String_StatusAction stringByAppendingString:@"("];
        String_StatusAction=[String_StatusAction stringByAppendingString:String_Supplement];
        String_StatusAction=[String_StatusAction stringByAppendingString:@")"];
    }
    
    _Label_StatusAction.text =String_StatusAction;


}


- (IBAction)Tap_Connect:(id)sender {
    NSLog(@"Tap_Connect");
    
    //Login
    BasicHttpBinding_IBTServiceBinding *s = [BTService BasicHttpBinding_IBTServiceBinding];
    s.logXMLInOut = YES;
    
    BTService_Login *l = [[BTService_Login alloc] init];
    l.userID_ = @"test";
    l.password_ = @"test";
    
    BasicHttpBinding_IBTServiceBindingResponse *response = [s LoginUsingParameters:l];

    NSLog(@"res:%@",response);
    
    //EntryAction
    BTService_EntryAction *e = [[BTService_EntryAction alloc] init];
    tns2_UserMaster *um = [[tns2_UserMaster alloc] init];
    um.UserNo = [NSNumber numberWithInt: 8];
    e.user_ = um;
    e.locationCode_ = [NSNumber numberWithInt: 10];
    e.actionCode_ = [NSNumber numberWithInt: 5];
    
    BasicHttpBinding_IBTServiceBindingResponse *response1 = [s EntryActionUsingParameters: e];
    NSLog(@"res1:%@",response1);
    
    //GetUserStatus => error in dateWithString
    BTService_GetUserStatus *u = [[BTService_GetUserStatus alloc] init];
    tns2_UserMaster *um1 = [[tns2_UserMaster alloc] init];
    um1.UserNo =[NSNumber numberWithInt: 8];
    u.loginUser_ = um1;
    
    BasicHttpBinding_IBTServiceBindingResponse *response2 = [s GetUserStatusUsingParameters: u];
    NSLog(@"res2:%@",response2);
    
    //GetNameMaster
    BTService_GetNameMaster *namemaster = [[BTService_GetNameMaster alloc] init];
    namemaster.kind_ = @"location";
    
    BasicHttpBinding_IBTServiceBindingResponse *response3 = [s GetNameMasterUsingParameters:namemaster];
    NSLog(@"res3:%@",response3);
    
    //GetActionData => error in dateWithString
    BTService_GetActionData *actiondata = [[BTService_GetActionData alloc] init];
    actiondata.userNo_ = [NSNumber numberWithInt: 8];
    
    BasicHttpBinding_IBTServiceBindingResponse *response4 = [s GetActionDataUsingParameters:actiondata];
    NSLog(@"res4:%@",response4);
    
    //GetActionDetail
    BTService_GetActionDetail *actiondetail = [[BTService_GetActionDetail alloc] init];
    actiondetail.userNo_ = [NSNumber numberWithInt: 8];
    
    BasicHttpBinding_IBTServiceBindingResponse *response5 = [s GetActionDetailUsingParameters:actiondetail];
    NSLog(@"res5:%@",response5);
    
    //GetNameMaterByUserno
    BTService_GetNameMasterByUserNo *namemaster_byno = [[BTService_GetNameMasterByUserNo alloc] init];
    namemaster_byno.kind_ = @"action";
    namemaster_byno.userNo_ = [NSNumber numberWithInt: 8];
    BasicHttpBinding_IBTServiceBindingResponse *response6 = [s GetNameMasterByUserNoUsingParameters:namemaster_byno];
    NSLog(@"res6:%@",response6);
    
    //GetLastLosterData => error in dateWithString
    BTService_GetLastLosterData *lastlost = [[BTService_GetLastLosterData alloc] init];
    lastlost.userNo_ = [NSNumber numberWithInt: 8];
    BasicHttpBinding_IBTServiceBindingResponse *response7 = [s GetLastLosterDataUsingParameters:lastlost];
    NSLog(@"res7:%@",response7);
    
    //GetLosterData
    BTService_GetLosterData *lost = [[BTService_GetLosterData alloc] init];
    lost.userNo_ = [NSNumber numberWithInt: 8];
    BasicHttpBinding_IBTServiceBindingResponse *response8 = [s GetLosterDataUsingParameters:lost];
    NSLog(@"res8:%@",response8);
    
    //WorkStart
    BTService_WorkStart *wkstart = [[BTService_WorkStart alloc] init];
    wkstart.userNo_ = [NSNumber numberWithInt: 8];
    BasicHttpBinding_IBTServiceBindingResponse *response9 = [s WorkStartUsingParameters:wkstart];
    NSLog(@"res9:%@",response9);
    
    //WorkEnd
    BTService_WorkEnd *wkend = [[BTService_WorkEnd alloc] init];
    wkend.userNo_ = [NSNumber numberWithInt: 8];
    BasicHttpBinding_IBTServiceBindingResponse *response10 = [s WorkEndUsingParameters:wkend];
    NSLog(@"res10:%@",response10);
    
    //SendReport
//    BTService_SendReport *send = [[BTService_SendReport alloc] init];
//    send.rosterNo_ = [NSNumber numberWithInt: 8];
//    BasicHttpBinding_IBTServiceBindingResponse *response11 = [s SendReportUsingParameters:send];
//    NSLog(@"res11:%@",response11);
    
    //for fahren version
//    TempConvertSoapBinding *soap = [TempConvert TempConvertSoapBinding];
//    soap.logXMLInOut = YES;

//    TempConvert_CelsiusToFahrenheit *p = [[TempConvert_CelsiusToFahrenheit alloc] init];
//    p.Celsius = @"30";
    
//    TempConvertSoapBindingResponse *response = [soap CelsiusToFahrenheitUsingParameters:p];
//    NSLog(@"res:%@",response);
}

@end
