/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSLocale, NSString, AVWeakReference, NSMutableArray;



@interface AVChapterMetadataItemInternal : NSObject 
{
    AVWeakReference *weakReference;
    struct OpaqueFigFormatReaderLoader { } *loader;
    NSInteger chapterGroupIndex;
    NSInteger chapterIndex;
    NSString *chapterType;
    NSLocale *locale;
    id value;
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    } time;
    struct { 
        long long value; 
        NSInteger timescale; 
        NSUInteger flags; 
        long long epoch; 
    } duration;
    NSInteger valueStatus;
    NSInteger valueErrorCode;
    NSMutableArray *completions;
    struct dispatch_queue_s { } *readWriteQueue;
}



@end