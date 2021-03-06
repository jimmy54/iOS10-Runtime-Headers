/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate> {
    NSError * _error;
    bool  _ignoreDocumentSupport;
    NSMutableSet * _persistenceWarnings;
}

@property (nonatomic, readonly) NSDictionary *additionalDocumentPropertiesForWrite;
@property (nonatomic, readonly) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (nonatomic, readonly) bool areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *baseUUIDForObjectUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreDocumentSupport;
@property (nonatomic, readonly) bool isDocumentSupportTemporary;
@property (nonatomic, readonly) NSSet *persistenceWarnings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPersistenceWarnings:(id)arg1;
- (id)error;
- (bool)ignoreDocumentSupport;
- (id)init;
- (id)persistenceWarnings;
- (id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2;
- (void)presentPersistenceError:(id)arg1;
- (void)requestAutosave;
- (void)resumeAutosave;
- (void)setIgnoreDocumentSupport:(bool)arg1;
- (void)suspendAutosave;

@end
