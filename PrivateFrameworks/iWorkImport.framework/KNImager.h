/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAbstractSlide, NSString;

@interface KNImager : TSDImager <TSDConnectedInfoReplacing> {
    BOOL mShouldShowInstructionalText;
    KNAbstractSlide *mSlide;
    unsigned int mSlideNumber;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL shouldShowInstructionalText;
@property KNAbstractSlide * slide;
@property unsigned int slideNumber;
@property(readonly) Class superclass;

- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (void)setShouldShowInstructionalText:(BOOL)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideNumber:(unsigned int)arg1;
- (BOOL)shouldShowInstructionalText;
- (id)slide;
- (unsigned int)slideNumber;

@end
