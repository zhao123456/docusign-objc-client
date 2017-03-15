#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* Contact: devcenter@docusign.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSEnvelope.h"
#import "DSErrorDetails.h"
#import "DSPowerFormRecipient.h"


@protocol DSPowerForm
@end

@interface DSPowerForm : DSObject

/* Indicates the date and time the item was created. [optional]
 */
@property(nonatomic) NSString* createdDateTime;
/* Specifies the email body of the message sent to the recipient.   Maximum length: 10000 characters.  [optional]
 */
@property(nonatomic) NSString* emailBody;
/* Specifies the subject of the email that is sent to all recipients.  See [ML:Template Email Subject Merge Fields] for information about adding merge field information to the email subject. [optional]
 */
@property(nonatomic) NSString* emailSubject;
/*  [optional]
 */
@property(nonatomic) NSArray<DSEnvelope>* envelopes;

@property(nonatomic) DSErrorDetails* errorDetails;
/*  [optional]
 */
@property(nonatomic) NSString* instructions;
/*  [optional]
 */
@property(nonatomic) NSString* isActive;
/*  [optional]
 */
@property(nonatomic) NSString* lastUsed;
/*  [optional]
 */
@property(nonatomic) NSString* limitUseInterval;
/*  [optional]
 */
@property(nonatomic) NSString* limitUseIntervalEnabled;
/*  [optional]
 */
@property(nonatomic) NSString* limitUseIntervalUnits;
/*  [optional]
 */
@property(nonatomic) NSString* maxUseEnabled;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* powerFormId;
/*  [optional]
 */
@property(nonatomic) NSString* powerFormUrl;
/* An array of powerform recipients. [optional]
 */
@property(nonatomic) NSArray<DSPowerFormRecipient>* recipients;
/*  [optional]
 */
@property(nonatomic) NSString* senderName;
/*  [optional]
 */
@property(nonatomic) NSString* senderUserId;
/*  [optional]
 */
@property(nonatomic) NSString* signingMode;
/* The unique identifier of the template. If this is not provided, DocuSign will generate a value.  [optional]
 */
@property(nonatomic) NSString* templateId;
/*  [optional]
 */
@property(nonatomic) NSString* templateName;
/*  [optional]
 */
@property(nonatomic) NSString* timesUsed;
/*  [optional]
 */
@property(nonatomic) NSString* uri;
/*  [optional]
 */
@property(nonatomic) NSString* usesRemaining;

@end