/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPasscodeManager : NSObject {
}

+ (BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (id)deviceLockedError;
+ (id)generateSalt;
+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3;
+ (BOOL)isDeviceUnlocked;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;
+ (BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4;
+ (id)sharedManager;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;

- (BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3;
- (id)_passcodeCharacteristics;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;
- (id)_wrongPasscodeError;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2;
- (int)currentUnlockScreenType;
- (BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1;
- (BOOL)isDeviceLocked;
- (BOOL)isPasscodeSet;
- (id)localizedDescriptionOfPasscodePolicy;
- (void)lockDevice;
- (void)lockDeviceImmediately:(BOOL)arg1;
- (int)newPasscodeEntryScreenType;
- (BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3;
- (void)passcodeExpiryDateCompletionBlock:(id)arg1;
- (id)passcodeExpiryDateOutError:(id*)arg1;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;

@end
