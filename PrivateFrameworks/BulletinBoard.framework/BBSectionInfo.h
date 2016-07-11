/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appName;
    NSArray * _dataProviderIDs;
    NSString * _displayName;
    bool  _displaysCriticalBulletins;
    NSString * _factorySectionID;
    NSArray * _filters;
    bool  _hideWeeApp;
    BBSectionIcon * _icon;
    BBSectionInfoSettings * _managedSectionInfoSettings;
    BBSectionInfo * _parentSection;
    NSString * _pathToWeeAppPluginBundle;
    long long  _sectionCategory;
    NSString * _sectionID;
    BBSectionInfoSettings * _sectionInfoSettings;
    long long  _sectionType;
    NSString * _subsectionID;
    long long  _subsectionPriority;
    NSArray * _subsections;
    bool  _suppressFromSettings;
    unsigned long long  _suppressedSettings;
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long alertType;
@property (nonatomic) bool allowsNotifications;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic) unsigned long long bulletinCount;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic, copy) NSArray *dataProviderIDs;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool displaysCriticalBulletins;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *factorySectionID;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic) bool hideWeeApp;
@property (nonatomic, copy) BBSectionIcon *icon;
@property (nonatomic, readonly, copy) NSData *iconData;
@property (nonatomic, copy) BBSectionInfoSettings *managedSectionInfoSettings;
@property (nonatomic) unsigned long long notificationCenterLimit;
@property (nonatomic) BBSectionInfo *parentSection;
@property (nonatomic, copy) NSString *pathToWeeAppPluginBundle;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic, readonly) BBSectionInfoSettings *readableSettings;
@property (nonatomic) long long sectionCategory;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) BBSectionInfoSettings *sectionInfoSettings;
@property (nonatomic) long long sectionType;
@property (nonatomic) bool showsInLockScreen;
@property (nonatomic) bool showsInNotificationCenter;
@property (nonatomic) bool showsMessagePreview;
@property (nonatomic) bool showsOnExternalDevices;
@property (nonatomic, copy) NSString *subsectionID;
@property (nonatomic) long long subsectionPriority;
@property (nonatomic, copy) NSArray *subsections;
@property (nonatomic) bool suppressFromSettings;
@property (nonatomic) unsigned long long suppressedSettings;
@property (nonatomic, readonly) bool usesManagedSettings;
@property (nonatomic) unsigned long long version;
@property (nonatomic, readonly) BBSectionInfoSettings *writableSettings;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)defaultSectionInfoForSection:(id)arg1;
+ (id)defaultSectionInfoForType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addSubsection:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(long long)arg1;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (unsigned long long)alertType;
- (bool)allowsNotifications;
- (id)appName;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned long long)bulletinCount;
- (long long)carPlaySetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProviderIDs;
- (id)description;
- (long long)disabledSettingForSetting:(long long)arg1;
- (id)displayName;
- (bool)displaysCriticalBulletins;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)factorySectionID;
- (id)filters;
- (unsigned long long)hash;
- (bool)hideWeeApp;
- (id)icon;
- (id)iconData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)managedSectionInfoSettings;
- (unsigned long long)notificationCenterLimit;
- (id)parentSection;
- (id)pathToWeeAppPluginBundle;
- (unsigned long long)pushSettings;
- (bool)queryAndUseManagedSettings;
- (bool)queryAndUseManagedSettingsForSectionID:(id)arg1;
- (id)readableSettings;
- (id)replacementObjectForCoder:(id)arg1;
- (long long)sectionCategory;
- (id)sectionID;
- (id)sectionInfoSettings;
- (long long)sectionType;
- (void)setAlertType:(unsigned long long)arg1;
- (void)setAllowsNotifications:(bool)arg1;
- (void)setAppName:(id)arg1;
- (void)setBulletinCount:(unsigned long long)arg1;
- (void)setCarPlaySetting:(long long)arg1;
- (void)setDataProviderIDs:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletins:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setHideWeeApp:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setManagedSectionInfoSettings:(id)arg1;
- (void)setNotificationCenterLimit:(unsigned long long)arg1;
- (void)setParentSection:(id)arg1;
- (void)setPathToWeeAppPluginBundle:(id)arg1;
- (void)setPushSettings:(unsigned long long)arg1;
- (void)setSectionCategory:(long long)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionInfoSettings:(id)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setShowsInLockScreen:(bool)arg1;
- (void)setShowsInNotificationCenter:(bool)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setShowsOnExternalDevices:(bool)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setSubsectionPriority:(long long)arg1;
- (void)setSubsections:(id)arg1;
- (void)setSuppressFromSettings:(bool)arg1;
- (void)setSuppressedSettings:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (bool)showsMessagePreview;
- (bool)showsOnExternalDevices;
- (id)subsectionID;
- (long long)subsectionPriority;
- (id)subsections;
- (bool)suppressFromSettings;
- (unsigned long long)suppressedSettings;
- (void)updateWithDefaultFilters:(id)arg1;
- (void)updateWithDefaultSectionInfo:(id)arg1;
- (bool)usesManagedSettings;
- (unsigned long long)version;
- (id)writableSettings;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (bool)uns_isEnabled;
- (long long)uns_notificationSettingForBBSectionInfoSetting:(long long)arg1;
- (id)uns_notificationSettings;
- (id)uns_sectionInfoWithAuthorizationOptions:(unsigned long long)arg1;

@end