#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class TempConvert_FahrenheitToCelsius;
@class TempConvert_FahrenheitToCelsiusResponse;
@class TempConvert_CelsiusToFahrenheit;
@class TempConvert_CelsiusToFahrenheitResponse;
@interface TempConvert_FahrenheitToCelsius : NSObject {
	
/* elements */
	NSString * Fahrenheit;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_FahrenheitToCelsius *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Fahrenheit;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface TempConvert_FahrenheitToCelsiusResponse : NSObject {
	
/* elements */
	NSString * FahrenheitToCelsiusResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_FahrenheitToCelsiusResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * FahrenheitToCelsiusResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface TempConvert_CelsiusToFahrenheit : NSObject {
	
/* elements */
	NSString * Celsius;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_CelsiusToFahrenheit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Celsius;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface TempConvert_CelsiusToFahrenheitResponse : NSObject {
	
/* elements */
	NSString * CelsiusToFahrenheitResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (TempConvert_CelsiusToFahrenheitResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CelsiusToFahrenheitResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "TempConvert.h"
@class TempConvertSoapBinding;
@class TempConvertSoap12Binding;
@interface TempConvert : NSObject {
	
}
+ (TempConvertSoapBinding *)TempConvertSoapBinding;
+ (TempConvertSoap12Binding *)TempConvertSoap12Binding;
@end
@class TempConvertSoapBindingResponse;
@class TempConvertSoapBindingOperation;
@protocol TempConvertSoapBindingResponseDelegate <NSObject>
- (void) operation:(TempConvertSoapBindingOperation *)operation completedWithResponse:(TempConvertSoapBindingResponse *)response;
@end
@interface TempConvertSoapBinding : NSObject <TempConvertSoapBindingResponseDelegate> {
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
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(TempConvertSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (TempConvertSoapBindingResponse *)FahrenheitToCelsiusUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters ;
- (void)FahrenheitToCelsiusAsyncUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters  delegate:(id<TempConvertSoapBindingResponseDelegate>)responseDelegate;
- (TempConvertSoapBindingResponse *)CelsiusToFahrenheitUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters ;
- (void)CelsiusToFahrenheitAsyncUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters  delegate:(id<TempConvertSoapBindingResponseDelegate>)responseDelegate;
@end
@interface TempConvertSoapBindingOperation : NSOperation {
	TempConvertSoapBinding *binding;
	TempConvertSoapBindingResponse *response;
	id<TempConvertSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) TempConvertSoapBinding *binding;
@property (readonly) TempConvertSoapBindingResponse *response;
@property (nonatomic, assign) id<TempConvertSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(TempConvertSoapBinding *)aBinding delegate:(id<TempConvertSoapBindingResponseDelegate>)aDelegate;
@end
@interface TempConvertSoapBinding_FahrenheitToCelsius : TempConvertSoapBindingOperation {
	TempConvert_FahrenheitToCelsius * parameters;
}
@property (retain) TempConvert_FahrenheitToCelsius * parameters;
- (id)initWithBinding:(TempConvertSoapBinding *)aBinding delegate:(id<TempConvertSoapBindingResponseDelegate>)aDelegate
	parameters:(TempConvert_FahrenheitToCelsius *)aParameters
;
@end
@interface TempConvertSoapBinding_CelsiusToFahrenheit : TempConvertSoapBindingOperation {
	TempConvert_CelsiusToFahrenheit * parameters;
}
@property (retain) TempConvert_CelsiusToFahrenheit * parameters;
- (id)initWithBinding:(TempConvertSoapBinding *)aBinding delegate:(id<TempConvertSoapBindingResponseDelegate>)aDelegate
	parameters:(TempConvert_CelsiusToFahrenheit *)aParameters
;
@end
@interface TempConvertSoapBinding_envelope : NSObject {
}
+ (TempConvertSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface TempConvertSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
@class TempConvertSoap12BindingResponse;
@class TempConvertSoap12BindingOperation;
@protocol TempConvertSoap12BindingResponseDelegate <NSObject>
- (void) operation:(TempConvertSoap12BindingOperation *)operation completedWithResponse:(TempConvertSoap12BindingResponse *)response;
@end
@interface TempConvertSoap12Binding : NSObject <TempConvertSoap12BindingResponseDelegate> {
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
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(TempConvertSoap12BindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (TempConvertSoap12BindingResponse *)FahrenheitToCelsiusUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters ;
- (void)FahrenheitToCelsiusAsyncUsingParameters:(TempConvert_FahrenheitToCelsius *)aParameters  delegate:(id<TempConvertSoap12BindingResponseDelegate>)responseDelegate;
- (TempConvertSoap12BindingResponse *)CelsiusToFahrenheitUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters ;
- (void)CelsiusToFahrenheitAsyncUsingParameters:(TempConvert_CelsiusToFahrenheit *)aParameters  delegate:(id<TempConvertSoap12BindingResponseDelegate>)responseDelegate;
@end
@interface TempConvertSoap12BindingOperation : NSOperation {
	TempConvertSoap12Binding *binding;
	TempConvertSoap12BindingResponse *response;
	id<TempConvertSoap12BindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) TempConvertSoap12Binding *binding;
@property (readonly) TempConvertSoap12BindingResponse *response;
@property (nonatomic, assign) id<TempConvertSoap12BindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(TempConvertSoap12Binding *)aBinding delegate:(id<TempConvertSoap12BindingResponseDelegate>)aDelegate;
@end
@interface TempConvertSoap12Binding_FahrenheitToCelsius : TempConvertSoap12BindingOperation {
	TempConvert_FahrenheitToCelsius * parameters;
}
@property (retain) TempConvert_FahrenheitToCelsius * parameters;
- (id)initWithBinding:(TempConvertSoap12Binding *)aBinding delegate:(id<TempConvertSoap12BindingResponseDelegate>)aDelegate
	parameters:(TempConvert_FahrenheitToCelsius *)aParameters
;
@end
@interface TempConvertSoap12Binding_CelsiusToFahrenheit : TempConvertSoap12BindingOperation {
	TempConvert_CelsiusToFahrenheit * parameters;
}
@property (retain) TempConvert_CelsiusToFahrenheit * parameters;
- (id)initWithBinding:(TempConvertSoap12Binding *)aBinding delegate:(id<TempConvertSoap12BindingResponseDelegate>)aDelegate
	parameters:(TempConvert_CelsiusToFahrenheit *)aParameters
;
@end
@interface TempConvertSoap12Binding_envelope : NSObject {
}
+ (TempConvertSoap12Binding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface TempConvertSoap12BindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
