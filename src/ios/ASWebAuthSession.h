#import <Cordova/CDVPlugin.h>
#import <AuthenticationServices/AuthenticationServices.h>


@interface ASWebAuthSession : CDVPlugin<ASWebAuthenticationPresentationContextProviding> {
}

- (void)start:(CDVInvokedUrlCommand *)command;
- (void)appIsActive;
- (void)cancel:(CDVInvokedUrlCommand *)command;

@end
