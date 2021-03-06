/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int volumeValue : 1; 
    NSString *_category;
    } _has;
    float _volumeValue;
}

@property(retain) NSString * category;
@property(readonly) BOOL hasCategory;
@property BOOL hasVolumeValue;
@property float volumeValue;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCategory;
- (BOOL)hasVolumeValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasVolumeValue:(BOOL)arg1;
- (void)setVolumeValue:(float)arg1;
- (float)volumeValue;
- (void)writeTo:(id)arg1;

@end
