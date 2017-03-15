# DSConnectApi

All URIs are relative to *https://www.docusign.net/restapi*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createConfiguration**](DSConnectApi.md#createconfiguration) | **POST** /v2/accounts/{accountId}/connect | Creates a connect configuration for the specified account.
[**deleteConfiguration**](DSConnectApi.md#deleteconfiguration) | **DELETE** /v2/accounts/{accountId}/connect/{connectId} | Deletes the specified connect configuration.
[**deleteEventFailureLog**](DSConnectApi.md#deleteeventfailurelog) | **DELETE** /v2/accounts/{accountId}/connect/failures/{failureId} | Deletes a Connect failure log entry.
[**deleteEventLog**](DSConnectApi.md#deleteeventlog) | **DELETE** /v2/accounts/{accountId}/connect/logs/{logId} | Deletes a specified Connect log entry.
[**deleteEventLogs**](DSConnectApi.md#deleteeventlogs) | **DELETE** /v2/accounts/{accountId}/connect/logs | Gets a list of Connect log entries.
[**deleteMobileNotifiers**](DSConnectApi.md#deletemobilenotifiers) | **DELETE** /v2/accounts/{accountId}/connect/mobile_notifiers | Reserved
[**getConfiguration**](DSConnectApi.md#getconfiguration) | **GET** /v2/accounts/{accountId}/connect/{connectId} | Get a Connect Configuration Information
[**getEventLog**](DSConnectApi.md#geteventlog) | **GET** /v2/accounts/{accountId}/connect/logs/{logId} | Get the specified Connect log entry.
[**listConfigurations**](DSConnectApi.md#listconfigurations) | **GET** /v2/accounts/{accountId}/connect | Get Connect Configuration Information
[**listEventFailureLogs**](DSConnectApi.md#listeventfailurelogs) | **GET** /v2/accounts/{accountId}/connect/failures | Gets the Connect failure log information.
[**listEventLogs**](DSConnectApi.md#listeventlogs) | **GET** /v2/accounts/{accountId}/connect/logs | Gets the Connect log.
[**listMobileNotifiers**](DSConnectApi.md#listmobilenotifiers) | **GET** /v2/accounts/{accountId}/connect/mobile_notifiers | Reserved
[**listUsers**](DSConnectApi.md#listusers) | **GET** /v2/accounts/{accountId}/connect/{connectId}/users | Returns users from the configured Connect service.
[**retryEventForEnvelope**](DSConnectApi.md#retryeventforenvelope) | **PUT** /v2/accounts/{accountId}/connect/envelopes/{envelopeId}/retry_queue | Republishes Connect information for the specified envelope.
[**retryEventForEnvelopes**](DSConnectApi.md#retryeventforenvelopes) | **PUT** /v2/accounts/{accountId}/connect/envelopes/retry_queue | Republishes Connect information for multiple envelopes.
[**updateConfiguration**](DSConnectApi.md#updateconfiguration) | **PUT** /v2/accounts/{accountId}/connect | Updates a specified Connect configuration.
[**updateMobileNotifiers**](DSConnectApi.md#updatemobilenotifiers) | **PUT** /v2/accounts/{accountId}/connect/mobile_notifiers | Reserved


# **createConfiguration**
```objc
-(NSNumber*) createConfigurationWithAccountId: (DSConnectCustomConfiguration*) connectCustomConfiguration
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSConnectCustomConfiguration* output, NSError* error)) handler;
```

Creates a connect configuration for the specified account.

Creates a DocuSign Custom Connect definition for your account. DocuSign Connect enables the sending of real-time data updates to external applications. These updates are generated by user transactions as the envelope progresses through actions to completion. The Connect Service provides updated information about the status of these transactions and returns updates that include the actual content of document form fields. Be aware that, these updates might or might not include the document itself. For more information about Connect, see the [ML:DocuSign Connect Service Guide].  ###### Note: Connect must be enabled for your account to use this function. This cannot be used to set up Connect configurations for Salesforce or eOriginal.

### Example 
```objc

DSConnectCustomConfiguration* connectCustomConfiguration = [[DSConnectCustomConfiguration alloc] init]; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Creates a connect configuration for the specified account.
[apiInstance createConfigurationWithAccountId:connectCustomConfiguration
              accountId:accountId
          completionHandler: ^(DSConnectCustomConfiguration* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->createConfiguration: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **connectCustomConfiguration** | [**DSConnectCustomConfiguration***](DSConnectCustomConfiguration*.md)|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSConnectCustomConfiguration***](DSConnectCustomConfiguration.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteConfiguration**
```objc
-(NSNumber*) deleteConfigurationWithAccountId: (NSString*) accountId
    connectId: (NSString*) connectId
        completionHandler: (void (^)(NSError* error)) handler;
```

Deletes the specified connect configuration.

Deletes the specified DocuSign Connect configuration.  ###### Note: Connect must be enabled for your account to use this function.    

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* connectId = @"connectId_example"; // The ID of the custom Connect configuration being accessed.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Deletes the specified connect configuration.
[apiInstance deleteConfigurationWithAccountId:accountId
              connectId:connectId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->deleteConfiguration: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **connectId** | **NSString***| The ID of the custom Connect configuration being accessed. | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEventFailureLog**
```objc
-(NSNumber*) deleteEventFailureLogWithAccountId: (NSString*) accountId
    failureId: (NSString*) failureId
        completionHandler: (void (^)(NSError* error)) handler;
```

Deletes a Connect failure log entry.

Deletes the Connect failure log information for the specified entry.

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* failureId = @"failureId_example"; // The ID of the failed connect log entry.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Deletes a Connect failure log entry.
[apiInstance deleteEventFailureLogWithAccountId:accountId
              failureId:failureId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->deleteEventFailureLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **failureId** | **NSString***| The ID of the failed connect log entry. | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEventLog**
```objc
-(NSNumber*) deleteEventLogWithAccountId: (NSString*) accountId
    logId: (NSString*) logId
        completionHandler: (void (^)(NSError* error)) handler;
```

Deletes a specified Connect log entry.

Deletes a specified entry from the Connect Log. 

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* logId = @"logId_example"; // The ID of the connect log entry

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Deletes a specified Connect log entry.
[apiInstance deleteEventLogWithAccountId:accountId
              logId:logId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->deleteEventLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **logId** | **NSString***| The ID of the connect log entry | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEventLogs**
```objc
-(NSNumber*) deleteEventLogsWithAccountId: (NSString*) accountId
        completionHandler: (void (^)(NSError* error)) handler;
```

Gets a list of Connect log entries.

Retrieves a list of connect log entries for your account.  ###### Note: The `enableLog` property in the Connect configuration must be set to **true** to enable logging. If logging is not enabled, then no log entries are recorded.

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Gets a list of Connect log entries.
[apiInstance deleteEventLogsWithAccountId:accountId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->deleteEventLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteMobileNotifiers**
```objc
-(NSNumber*) deleteMobileNotifiersWithAccountId: (DSMobileNotifierConfigurationInformation*) mobileNotifierConfigurationInformation
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSMobileNotifierConfigurationInformation* output, NSError* error)) handler;
```

Reserved

Reserved:

### Example 
```objc

DSMobileNotifierConfigurationInformation* mobileNotifierConfigurationInformation = [[DSMobileNotifierConfigurationInformation alloc] init]; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Reserved
[apiInstance deleteMobileNotifiersWithAccountId:mobileNotifierConfigurationInformation
              accountId:accountId
          completionHandler: ^(DSMobileNotifierConfigurationInformation* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->deleteMobileNotifiers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mobileNotifierConfigurationInformation** | [**DSMobileNotifierConfigurationInformation***](DSMobileNotifierConfigurationInformation*.md)|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSMobileNotifierConfigurationInformation***](DSMobileNotifierConfigurationInformation.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfiguration**
```objc
-(NSNumber*) getConfigurationWithAccountId: (NSString*) accountId
    connectId: (NSString*) connectId
        completionHandler: (void (^)(DSConnectConfigResults* output, NSError* error)) handler;
```

Get a Connect Configuration Information

Retrieves the information for the specified DocuSign Connect configuration.  ###### Note: Connect must be enabled for your account to use this function. 

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* connectId = @"connectId_example"; // The ID of the custom Connect configuration being accessed.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Get a Connect Configuration Information
[apiInstance getConfigurationWithAccountId:accountId
              connectId:connectId
          completionHandler: ^(DSConnectConfigResults* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->getConfiguration: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **connectId** | **NSString***| The ID of the custom Connect configuration being accessed. | 

### Return type

[**DSConnectConfigResults***](DSConnectConfigResults.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEventLog**
```objc
-(NSNumber*) getEventLogWithAccountId: (NSString*) additionalInfo
    accountId: (NSString*) accountId
    logId: (NSString*) logId
        completionHandler: (void (^)(DSConnectLog* output, NSError* error)) handler;
```

Get the specified Connect log entry.

Retrieves the specified Connect log entry for your account.  ###### Note: The `enableLog` setting in the Connect configuration must be set to true to enable logging. If logging is not enabled, then no log entries are recorded. 

### Example 
```objc

NSString* additionalInfo = @"additionalInfo_example"; // When true, the connectDebugLog information is included in the response. (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* logId = @"logId_example"; // The ID of the connect log entry

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Get the specified Connect log entry.
[apiInstance getEventLogWithAccountId:additionalInfo
              accountId:accountId
              logId:logId
          completionHandler: ^(DSConnectLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->getEventLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **additionalInfo** | **NSString***| When true, the connectDebugLog information is included in the response. | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **logId** | **NSString***| The ID of the connect log entry | 

### Return type

[**DSConnectLog***](DSConnectLog.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listConfigurations**
```objc
-(NSNumber*) listConfigurationsWithAccountId: (NSString*) accountId
        completionHandler: (void (^)(DSConnectConfigResults* output, NSError* error)) handler;
```

Get Connect Configuration Information

Retrieves all the DocuSign Custom Connect definitions for the specified account.  ###### Note: Connect must be enabled for your account to use this function. This does not retrieve information for Connect configurations for Box, eOriginal, or Salesforce.

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Get Connect Configuration Information
[apiInstance listConfigurationsWithAccountId:accountId
          completionHandler: ^(DSConnectConfigResults* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->listConfigurations: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSConnectConfigResults***](DSConnectConfigResults.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listEventFailureLogs**
```objc
-(NSNumber*) listEventFailureLogsWithAccountId: (NSString*) fromDate
    toDate: (NSString*) toDate
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSConnectLogs* output, NSError* error)) handler;
```

Gets the Connect failure log information.

Retrieves the Connect Failure Log information. It can be used to determine which envelopes failed to post, so a republish request can be created.

### Example 
```objc

NSString* fromDate = @"fromDate_example"; //  (optional)
NSString* toDate = @"toDate_example"; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Gets the Connect failure log information.
[apiInstance listEventFailureLogsWithAccountId:fromDate
              toDate:toDate
              accountId:accountId
          completionHandler: ^(DSConnectLogs* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->listEventFailureLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fromDate** | **NSString***|  | [optional] 
 **toDate** | **NSString***|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSConnectLogs***](DSConnectLogs.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listEventLogs**
```objc
-(NSNumber*) listEventLogsWithAccountId: (NSString*) fromDate
    toDate: (NSString*) toDate
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSConnectLogs* output, NSError* error)) handler;
```

Gets the Connect log.

Retrieves a list of connect log entries for your account.  ###### Note: The `enableLog` setting in the Connect configuration must be set to true to enable logging. If logging is not enabled, then no log entries are recorded. 

### Example 
```objc

NSString* fromDate = @"fromDate_example"; //  (optional)
NSString* toDate = @"toDate_example"; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Gets the Connect log.
[apiInstance listEventLogsWithAccountId:fromDate
              toDate:toDate
              accountId:accountId
          completionHandler: ^(DSConnectLogs* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->listEventLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **fromDate** | **NSString***|  | [optional] 
 **toDate** | **NSString***|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSConnectLogs***](DSConnectLogs.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listMobileNotifiers**
```objc
-(NSNumber*) listMobileNotifiersWithAccountId: (NSString*) accountId
        completionHandler: (void (^)(DSMobileNotifierConfigurationInformation* output, NSError* error)) handler;
```

Reserved

Reserved:

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Reserved
[apiInstance listMobileNotifiersWithAccountId:accountId
          completionHandler: ^(DSMobileNotifierConfigurationInformation* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->listMobileNotifiers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSMobileNotifierConfigurationInformation***](DSMobileNotifierConfigurationInformation.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listUsers**
```objc
-(NSNumber*) listUsersWithAccountId: (NSString*) count
    emailSubstring: (NSString*) emailSubstring
    listIncludedUsers: (NSString*) listIncludedUsers
    startPosition: (NSString*) startPosition
    status: (NSString*) status
    userNameSubstring: (NSString*) userNameSubstring
    accountId: (NSString*) accountId
    connectId: (NSString*) connectId
        completionHandler: (void (^)(DSIntegratedUserInfoList* output, NSError* error)) handler;
```

Returns users from the configured Connect service.

Returns users from the configured Connect service.

### Example 
```objc

NSString* count = @"count_example"; //  (optional)
NSString* emailSubstring = @"emailSubstring_example"; //  (optional)
NSString* listIncludedUsers = @"listIncludedUsers_example"; //  (optional)
NSString* startPosition = @"startPosition_example"; //  (optional)
NSString* status = @"status_example"; //  (optional)
NSString* userNameSubstring = @"userNameSubstring_example"; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* connectId = @"connectId_example"; // The ID of the custom Connect configuration being accessed.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Returns users from the configured Connect service.
[apiInstance listUsersWithAccountId:count
              emailSubstring:emailSubstring
              listIncludedUsers:listIncludedUsers
              startPosition:startPosition
              status:status
              userNameSubstring:userNameSubstring
              accountId:accountId
              connectId:connectId
          completionHandler: ^(DSIntegratedUserInfoList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->listUsers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **count** | **NSString***|  | [optional] 
 **emailSubstring** | **NSString***|  | [optional] 
 **listIncludedUsers** | **NSString***|  | [optional] 
 **startPosition** | **NSString***|  | [optional] 
 **status** | **NSString***|  | [optional] 
 **userNameSubstring** | **NSString***|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **connectId** | **NSString***| The ID of the custom Connect configuration being accessed. | 

### Return type

[**DSIntegratedUserInfoList***](DSIntegratedUserInfoList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **retryEventForEnvelope**
```objc
-(NSNumber*) retryEventForEnvelopeWithAccountId: (NSString*) accountId
    envelopeId: (NSString*) envelopeId
        completionHandler: (void (^)(DSConnectFailureResults* output, NSError* error)) handler;
```

Republishes Connect information for the specified envelope.

Republishes Connect information for the specified envelope.

### Example 
```objc

NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.
NSString* envelopeId = @"envelopeId_example"; // The envelopeId Guid of the envelope being accessed.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Republishes Connect information for the specified envelope.
[apiInstance retryEventForEnvelopeWithAccountId:accountId
              envelopeId:envelopeId
          completionHandler: ^(DSConnectFailureResults* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->retryEventForEnvelope: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 
 **envelopeId** | **NSString***| The envelopeId Guid of the envelope being accessed. | 

### Return type

[**DSConnectFailureResults***](DSConnectFailureResults.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **retryEventForEnvelopes**
```objc
-(NSNumber*) retryEventForEnvelopesWithAccountId: (DSConnectFailureFilter*) connectFailureFilter
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSConnectFailureResults* output, NSError* error)) handler;
```

Republishes Connect information for multiple envelopes.

Republishes Connect information for the  specified set of envelopes. The primary use is to republish Connect post failures by including envelope IDs for the envelopes that failed to post in the request. The list of envelope IDs that failed to post correctly can be retrieved by calling to [ML:GetConnectLog] retrieve the failure log.

### Example 
```objc

DSConnectFailureFilter* connectFailureFilter = [[DSConnectFailureFilter alloc] init]; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Republishes Connect information for multiple envelopes.
[apiInstance retryEventForEnvelopesWithAccountId:connectFailureFilter
              accountId:accountId
          completionHandler: ^(DSConnectFailureResults* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->retryEventForEnvelopes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **connectFailureFilter** | [**DSConnectFailureFilter***](DSConnectFailureFilter*.md)|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSConnectFailureResults***](DSConnectFailureResults.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateConfiguration**
```objc
-(NSNumber*) updateConfigurationWithAccountId: (DSConnectCustomConfiguration*) connectCustomConfiguration
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSConnectCustomConfiguration* output, NSError* error)) handler;
```

Updates a specified Connect configuration.

Updates the specified DocuSign Connect configuration in your account.  ###### Note: Connect must be enabled for your account to use this function. This cannot be used to update Connect configurations for Box, eOriginal, or Salesforce.

### Example 
```objc

DSConnectCustomConfiguration* connectCustomConfiguration = [[DSConnectCustomConfiguration alloc] init]; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Updates a specified Connect configuration.
[apiInstance updateConfigurationWithAccountId:connectCustomConfiguration
              accountId:accountId
          completionHandler: ^(DSConnectCustomConfiguration* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->updateConfiguration: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **connectCustomConfiguration** | [**DSConnectCustomConfiguration***](DSConnectCustomConfiguration*.md)|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSConnectCustomConfiguration***](DSConnectCustomConfiguration.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMobileNotifiers**
```objc
-(NSNumber*) updateMobileNotifiersWithAccountId: (DSMobileNotifierConfigurationInformation*) mobileNotifierConfigurationInformation
    accountId: (NSString*) accountId
        completionHandler: (void (^)(DSMobileNotifierConfigurationInformation* output, NSError* error)) handler;
```

Reserved

Reserved:

### Example 
```objc

DSMobileNotifierConfigurationInformation* mobileNotifierConfigurationInformation = [[DSMobileNotifierConfigurationInformation alloc] init]; //  (optional)
NSString* accountId = @"accountId_example"; // The external account number (int) or account ID Guid.

DSConnectApi*apiInstance = [[DSConnectApi alloc] init];

// Reserved
[apiInstance updateMobileNotifiersWithAccountId:mobileNotifierConfigurationInformation
              accountId:accountId
          completionHandler: ^(DSMobileNotifierConfigurationInformation* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling DSConnectApi->updateMobileNotifiers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mobileNotifierConfigurationInformation** | [**DSMobileNotifierConfigurationInformation***](DSMobileNotifierConfigurationInformation*.md)|  | [optional] 
 **accountId** | **NSString***| The external account number (int) or account ID Guid. | 

### Return type

[**DSMobileNotifierConfigurationInformation***](DSMobileNotifierConfigurationInformation.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
