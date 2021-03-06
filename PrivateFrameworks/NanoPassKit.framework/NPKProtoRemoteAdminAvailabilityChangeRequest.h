/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemoteAdminAvailabilityChangeRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int isAvailable : 1; 
    } _has;
    BOOL _isAvailable;
}

@property BOOL hasIsAvailable;
@property BOOL isAvailable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsAvailable;
- (unsigned int)hash;
- (BOOL)isAvailable;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsAvailable:(BOOL)arg1;
- (void)setIsAvailable:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
