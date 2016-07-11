/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICFolder : ICNoteContainer <ICCloudObject>

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) NSDate *dateForLastTitleModification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short folderType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool importedFromLegacy;
@property (nonatomic, readonly) bool isDefaultFolderForAccount;
@property (nonatomic, retain) NSSet *noteChanges;
@property (nonatomic, retain) NSSet *notes;
@property (nonatomic, retain) ICFolder *parent;
@property (nonatomic, retain) NSDate *parentModificationDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)allFoldersInContext:(id)arg1;
+ (unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3;
+ (void)deleteFolder:(id)arg1;
+ (id)englishTitleForDefaultFolder;
+ (id)englishTitleForTrashFolder;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)folderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)folderWithIdentifierCreatingIfNecessary:(id)arg1 context:(id)arg2;
+ (id)foldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingIsDefaultFolderForAccount;
+ (id)keyPathsForValuesAffectingIsLeaf;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (id)keyPathsForValuesAffectingTitleForTableViewCell;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)localizedNewFolderName;
+ (id)localizedTitleForDefaultFolder;
+ (id)localizedTitleForTrashFolder;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newFolderInContext:(id)arg1;
+ (id)newFolderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)predicateForVisibleFolders;
+ (id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(bool)arg1;
+ (void)purgeFolder:(id)arg1;
+ (id)reservedFolderTitles;
+ (id)stringByScrubbingStringForFolderName:(id)arg1;
+ (id)visibleFoldersInContext:(id)arg1;

- (id)accountName;
- (void)awakeFromFetch;
- (bool)canBeSharedViaICloud;
- (id)childCloudObjects;
- (long long)compare:(id)arg1;
- (unsigned long long)countOfVisibleNotesInFolder;
- (void)deleteFromLocalDatabase;
- (void)fixBrokenReferences;
- (id)foldersInFolder;
- (bool)hasAllMandatoryFields;
- (id)ic_loggingValues;
- (bool)isAncestorOfFolder:(id)arg1;
- (bool)isDefaultFolderForAccount;
- (bool)isDefaultFolderOrDescendantOfDefaultFolder;
- (bool)isDeletable;
- (bool)isEditable;
- (bool)isInICloudAccount;
- (bool)isLeaf;
- (bool)isMovable;
- (bool)isRecentlyDeletedFolder;
- (bool)isTitleValid:(id)arg1 error:(out id*)arg2;
- (id)localizedTitle;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeParentFromRecord:(id)arg1;
- (id)newlyCreatedRecord;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentFolder;
- (id)predicateForAttachmentsInFolder;
- (id)predicateForFoldersInFolder;
- (id)predicateForNotesInFolder;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleAttachmentsInFolder;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesInFolder;
- (void)prepareForDeletion;
- (id)recordType;
- (id)recordZoneName;
- (void)regenerateNestedTitleForSorting;
- (void)resetUniqueIdentifier;
- (void)setAccount:(id)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setNeedsInitialFetchFromCloud:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shareTitle;
- (id)shareType;
- (bool)shouldTrackChanges;
- (bool)supportsEditingNotes;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)unmarkForDeletionIncludingParentHierarchy;
- (void)updateSortOrder;
- (bool)validateTitle:(inout id*)arg1 error:(out id*)arg2;
- (bool)visibleChildFoldersContainsFolderWithTitle:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotesInFolder;
- (id)visibleNotesIncludingChildFolders;

@end