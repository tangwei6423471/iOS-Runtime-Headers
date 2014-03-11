/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKAchievement, GKGame, GKPlayer, UIImage;

@interface GKAchievementSharingInfo : NSObject <NSCoding, NSSecureCoding> {
    GKAchievement *_achievement;
    UIImage *_badgeImage;
    BOOL _complete;
    GKGame *_game;
    UIImage *_iconImage;
    GKPlayer *_player;
}

@property(retain) GKAchievement * achievement;
@property(retain) UIImage * badgeImage;
@property BOOL complete;
@property(retain) GKGame * game;
@property(retain) UIImage * iconImage;
@property(retain) GKPlayer * player;

+ (BOOL)supportsSecureCoding;

- (id)achievement;
- (id)badgeImage;
- (BOOL)complete;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (id)iconImage;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2 playerID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)player;
- (void)setAchievement:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setComplete:(BOOL)arg1;
- (void)setGame:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;

@end