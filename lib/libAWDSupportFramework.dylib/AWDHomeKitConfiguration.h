/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDHomeKitConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int databaseSize : 1; 
        unsigned int numAccessories : 1; 
        unsigned int numAccessoryServiceGroups : 1; 
        unsigned int numHomes : 1; 
        unsigned int numLocationGroups : 1; 
        unsigned int numLocations : 1; 
        unsigned int numScenes : 1; 
        unsigned int numServices : 1; 
        unsigned int numTriggers : 1; 
        unsigned int numUsers : 1; 
    unsigned int _databaseSize;
    NSString *_guid;
    } _has;
    unsigned int _numAccessories;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _numHomes;
    unsigned int _numLocationGroups;
    unsigned int _numLocations;
    unsigned int _numScenes;
    unsigned int _numServices;
    unsigned int _numTriggers;
    unsigned int _numUsers;
    unsigned long long _timestamp;
}

@property unsigned int databaseSize;
@property(retain) NSString * guid;
@property BOOL hasDatabaseSize;
@property(readonly) BOOL hasGuid;
@property BOOL hasNumAccessories;
@property BOOL hasNumAccessoryServiceGroups;
@property BOOL hasNumHomes;
@property BOOL hasNumLocationGroups;
@property BOOL hasNumLocations;
@property BOOL hasNumScenes;
@property BOOL hasNumServices;
@property BOOL hasNumTriggers;
@property BOOL hasNumUsers;
@property BOOL hasTimestamp;
@property unsigned int numAccessories;
@property unsigned int numAccessoryServiceGroups;
@property unsigned int numHomes;
@property unsigned int numLocationGroups;
@property unsigned int numLocations;
@property unsigned int numScenes;
@property unsigned int numServices;
@property unsigned int numTriggers;
@property unsigned int numUsers;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)databaseSize;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasDatabaseSize;
- (BOOL)hasGuid;
- (BOOL)hasNumAccessories;
- (BOOL)hasNumAccessoryServiceGroups;
- (BOOL)hasNumHomes;
- (BOOL)hasNumLocationGroups;
- (BOOL)hasNumLocations;
- (BOOL)hasNumScenes;
- (BOOL)hasNumServices;
- (BOOL)hasNumTriggers;
- (BOOL)hasNumUsers;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (unsigned int)numAccessoryServiceGroups;
- (unsigned int)numHomes;
- (unsigned int)numLocationGroups;
- (unsigned int)numLocations;
- (unsigned int)numScenes;
- (unsigned int)numServices;
- (unsigned int)numTriggers;
- (unsigned int)numUsers;
- (BOOL)readFrom:(id)arg1;
- (void)setDatabaseSize:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDatabaseSize:(BOOL)arg1;
- (void)setHasNumAccessories:(BOOL)arg1;
- (void)setHasNumAccessoryServiceGroups:(BOOL)arg1;
- (void)setHasNumHomes:(BOOL)arg1;
- (void)setHasNumLocationGroups:(BOOL)arg1;
- (void)setHasNumLocations:(BOOL)arg1;
- (void)setHasNumScenes:(BOOL)arg1;
- (void)setHasNumServices:(BOOL)arg1;
- (void)setHasNumTriggers:(BOOL)arg1;
- (void)setHasNumUsers:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg1;
- (void)setNumHomes:(unsigned int)arg1;
- (void)setNumLocationGroups:(unsigned int)arg1;
- (void)setNumLocations:(unsigned int)arg1;
- (void)setNumScenes:(unsigned int)arg1;
- (void)setNumServices:(unsigned int)arg1;
- (void)setNumTriggers:(unsigned int)arg1;
- (void)setNumUsers:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
