/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@class CPDistributedNotificationCenter, <AOSNotifySessionDelegate>;

@interface AOSNotifySession : NSObject  {
    <AOSNotifySessionDelegate> *_delegate;
    CPDistributedNotificationCenter *_center;
}

@property <AOSNotifySessionDelegate> * delegate;

+ (id)sharedInstance;
+ (id)copyLostModeParams;
+ (void)disableLostMode;
+ (id)copyStoreAccount;
+ (BOOL)lostModeIsActive;

- (id)removeAccount:(id)arg1;
- (id)addAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)dumpDebugInfo:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (id)cancelEmailVet;
- (id)vetEmailAccount:(id)arg1;
- (id)iCloudAccount;
- (id)fmipAccount;
- (id)retrieveFMFAccount:(id*)arg1;
- (id)removeFMFAccountWithUsername:(id)arg1;
- (id)addFMFAccount:(id)arg1;
- (void)_vetFinished:(id)arg1;
- (void)_vetResultReceived:(id)arg1;
- (void)_stopVettingNotifications;
- (id)_errorForCode:(int)arg1 message:(id)arg2;
- (id)retrieveAllAccounts:(id*)arg1;
- (id)retrieveCurrentAccountForService:(id)arg1 returningAccount:(id*)arg2;

@end