/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface WK_RTCUIApplicationStatusObserver : NSObject {
    bool  _isActive;
}

+ (void)prepareForUse;
+ (id)sharedInstance;

- (id)init;
- (bool)isApplicationActive;
- (void)setActive;
- (void)setInactive;

@end
