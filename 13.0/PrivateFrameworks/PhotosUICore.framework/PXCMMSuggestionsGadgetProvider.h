//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceManager;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMSuggestionsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>
{
    PXCMMSuggestionsDataSource *_dataSource;
    _Bool _didGenerateGadgets;
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
}

@property(readonly, nonatomic) id <PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)_newGadgetForSuggestion:(id)arg1;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
