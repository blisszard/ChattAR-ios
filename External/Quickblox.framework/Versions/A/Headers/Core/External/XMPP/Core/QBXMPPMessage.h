#import <Foundation/Foundation.h>
#import "QBXMPPElement.h"

/**
 * The XMPPMessage class represents a <message> element.
 * It extends XMPPElement, which in turn extends NSXMLElement.
 * All <message> elements that go in and out of the
 * xmpp stream will automatically be converted to XMPPMessage objects.
 * 
 * This class exists to provide developers an easy way to add functionality to message processing.
 * Simply add your own category to XMPPMessage to extend it with your own custom methods.
**/

@interface QBXMPPMessage : QBXMPPElement

// Converts an NSXMLElement to an XMPPMessage element in place (no memory allocations or copying)
+ (QBXMPPMessage *)messageFromElement:(NSXMLElement *)element;

+ (QBXMPPMessage *)message;

- (id)init;

- (BOOL)isChatMessage;
- (BOOL)isNormalMessage;
- (BOOL)isChatMessageWithBody;
- (BOOL)isErrorMessage;
- (BOOL)isMessageWithBody;

- (BOOL)hasReceiptRequest;
- (BOOL)hasReceiptResponse;
- (NSString *)extractReceiptResponseID;
- (QBXMPPMessage *)generateReceiptResponse;

- (NSError *)errorMessage;

@end
