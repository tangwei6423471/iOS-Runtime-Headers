/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying> {
    NSMutableArray *_objects;
}

@property(retain) NSMutableArray * objects;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)clearObjects;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objects;
- (unsigned int)objectsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)writeTo:(id)arg1;

@end
