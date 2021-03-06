/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiver : TSPArchiverBase {
    NSHashTable * _aggregatedCommandToModelReferences;
    NSHashTable * _aggregatedDataReferences;
    NSHashTable * _aggregatedLazyReferences;
    NSHashTable * _aggregatedStrongReferences;
    NSHashTable * _aggregatedWeakReferences;
    NSHashTable * _alternates;
    NSObject<OS_dispatch_group> * _archiveGroup;
    unsigned long long  _documentReadVersion;
    unsigned long long  _documentWriteVersion;
    TSPObject * _explicitComponentRootObject;
    BOOL  _flags;
    NSUUID * _objectUUID;
    NSObject<OS_dispatch_group> * _serializeGroup;
    NSObject<OS_dispatch_data> * _serializedData;
    NSArray * _unknownMessages;
}

@property (nonatomic, readonly) NSHashTable *aggregatedCommandToModelReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedDataReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedLazyReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedStrongReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedWeakReferences;
@property (nonatomic, readonly) NSHashTable *alternates;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *archiveGroup;
@property (nonatomic, readonly) unsigned long long documentReadVersion;
@property (nonatomic, readonly) unsigned long long documentWriteVersion;
@property (nonatomic, readonly) TSPObject *explicitComponentRootObject;
@property (nonatomic) unsigned long long messageVersion;
@property (nonatomic, readonly) bool needsArchive;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *serializeGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *serializedData;
@property (nonatomic, readonly) bool shouldSaveAlternates;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)addAlternateForMessageVersion:(unsigned long long)arg1;
- (void)aggregateReferencesFromArchiver:(id)arg1;
- (id)aggregatedCommandToModelReferences;
- (id)aggregatedDataReferences;
- (id)aggregatedLazyReferences;
- (id)aggregatedStrongReferences;
- (id)aggregatedWeakReferences;
- (id)alternates;
- (void)archive;
- (id)archiveGroup;
- (bool)beginArchive;
- (bool)beginWrite;
- (void)cleanup;
- (unsigned long long)documentReadVersion;
- (unsigned long long)documentWriteVersion;
- (id)explicitComponentRootObject;
- (void)fail;
- (id)initWithObject:(id)arg1;
- (bool)needsArchive;
- (id)objectUUID;
- (void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2;
- (void)requiresDocumentVersion:(unsigned long long)arg1;
- (void)serialize;
- (id)serializeGroup;
- (id)serializedData;
- (bool)shouldSaveAlternates;
- (bool)success;
- (bool)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; }*)arg1 withArchiver:(id)arg2;

@end
