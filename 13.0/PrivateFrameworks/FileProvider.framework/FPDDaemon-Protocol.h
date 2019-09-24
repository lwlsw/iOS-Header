//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FPActionOperationInfo, FPItem, FPItemID, FPSandboxingURLWrapper, NSArray, NSData, NSDate, NSFileHandle, NSFileProviderDomain, NSNumber, NSProgress, NSString, NSURL;
@protocol FPOperationClient;

@protocol FPDDaemon
- (void)_test_simulateUninstallOfBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_simulateInstallOfBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_callRemoveTrashedItemsOlderThanDate:(NSDate *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)_test_callFileProviderManagerAPIs:(void (^)(NSError *))arg1;
- (void)_test_retrieveItemWithName:(NSString *)arg1 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg2;
- (void)ingestFromCacheItemWithID:(FPItemID *)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)startAccessingServiceForItemURL:(NSURL *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSArray *, NSError *))arg2;
- (void)startAccessingServiceForItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSArray *, NSError *))arg2;
- (void)startAccessingOperationServiceForProviderDomainID:(NSString *)arg1 handler:(void (^)(id <FPXOperationService>, NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSError *))arg2;
- (void)startAccessingExtensionForProviderDomainID:(NSString *)arg1 handler:(void (^)(NSXPCListenerEndpoint *, id <FPDLifetimeServicing>, NSString *, NSError *))arg2;
- (void)currentMaterializedSetSyncAnchorForDomain:(NSFileProviderDomain *)arg1 completionHandler:(void (^)(NSData *))arg2;
- (void)enumerateMaterializedSetForDomain:(NSFileProviderDomain *)arg1 inProvider:(NSString *)arg2 syncAnchor:(NSData *)arg3 completionHandler:(void (^)(NSArray *, NSArray *, _Bool, NSData *, NSError *))arg4;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchAlternateContentsURLForDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 onDocumentURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateBlacklistedProcessNamesForProvider:(NSString *)arg1 processNames:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)reimportItemsBelowItemWithID:(FPItemID *)arg1 removeCachedItems:(_Bool)arg2 markItemDataless:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)setEnabled:(_Bool)arg1 forDomainIdentifier:(NSString *)arg2 providerIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)getDomainsForProviderIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllDomainsForProviderIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeDomain:(NSFileProviderDomain *)arg1 forProviderIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)addDomain:(NSFileProviderDomain *)arg1 forProviderIdentifier:(NSString *)arg2 byImportingDirectoryAtURL:(FPSandboxingURLWrapper *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)restoreUserURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)backUpUserURL:(NSURL *)arg1 outputUserURL:(NSURL *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)reindexAllSearchableItemsForBundleIDs:(NSArray *)arg1 acknowledgementHandler:(void (^)(void))arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg1;
- (void)providerDomainForURL:(NSURL *)arg1 completionHandler:(void (^)(FPProviderDomain *, NSError *))arg2;
- (void)writeCheckReportTo:(NSFileHandle *)arg1 limitNumberOfItems:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)dumpStateTo:(NSFileHandle *)arg1 limitNumberOfItems:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)getURLForContainerWithItemID:(NSString *)arg1 inDataScopeDomainWithIdentifier:(NSString *)arg2 documentsScopeDomainIdentifier:(NSString *)arg3 documentsFolderItemIdentifier:(NSString *)arg4 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg5;
- (void)makeTopologicallySortedItemsOnDisk:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)noteURLBecameFrontmost:(NSURL *)arg1 inWindow:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchDaemonOperationWithID:(NSString *)arg1 completionHandler:(void (^)(id <FPDaemonActionOperation>, FPActionOperationInfo *, NSError *))arg2;
- (void)fetchDaemonOperationIDsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)scheduleActionOperationWithInfo:(FPActionOperationInfo *)arg1 completionHandler:(void (^)(id <FPDaemonActionOperation>, NSError *))arg2;
- (void)materializeURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateLastUsedDate:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchIconsForAppBundleIDs:(NSArray *)arg2 requestedSize:(struct CGSize)arg3 scale:(double)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)fetchListOfMonitoredApps:(void (^)(NSArray *, NSError *))arg1;
- (void)valuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchAccessServicer:(void (^)(id <FPDAccessControlServicing>, NSError *))arg1;
- (void)extendBookmarkForItemID:(FPItemID *)arg1 consumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)fetchIndexPropertiesForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSString *, NSString *, NSError *))arg2;
- (void)fetchFSItemsForItemIdentifiers:(NSArray *)arg1 providerIdentifier:(NSString *)arg2 domainIdentifier:(NSString *)arg3 materializingIfNeeded:(_Bool)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)createItemBasedOnTemplate:(FPItem *)arg1 fields:(unsigned long long)arg2 urlWrapper:(FPSandboxingURLWrapper *)arg3 options:(unsigned long long)arg4 bounceOnCollision:(_Bool)arg5 completionHandler:(void (^)(FPItem *, NSError *))arg6;
- (void)forceIngestionForItemIDs:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)forceIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchDomainServicerForProviderDomainID:(NSString *)arg1 handler:(void (^)(id <FPDDomainServicing>, NSString *, NSError *))arg2;
- (void)documentURLFromBookmarkableString:(NSString *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)bookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)extendBookmarkForFileURL:(NSURL *)arg1 toConsumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)providerDomainsCompletionHandler:(void (^)(NSError *, NSDictionary *))arg1;
- (void)unpinItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)pinItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(FPItemID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)evictItemWithID:(FPItemID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (NSProgress *)evictItemAtURL:(NSURL *)arg1 evenIfEnumeratingFP:(_Bool)arg2 andClearACLForConsumer:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)startProvidingItemAtURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 forConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)extendSandboxForFileURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 toConsumerID:(NSString *)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg4;
- (void)wakeUpForURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *, id <FPDWakeupTransaction>))arg2;
@end
