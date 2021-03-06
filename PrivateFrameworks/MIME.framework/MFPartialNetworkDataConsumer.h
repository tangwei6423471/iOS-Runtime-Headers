/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <MFGuaranteedCollectingDataConsumer>, NSData, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    unsigned int _seenNetworkLineEndings : 1;
    unsigned int _length;
    <MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    NSData *_strippedData;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (int)appendData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (unsigned int)length;
- (void)purge;

@end
