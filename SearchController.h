/*
 
 File: SearchController.h
 
 */ 

#import <Cocoa/Cocoa.h>

@interface SearchController : NSObject
{
    NSMetadataQuery *_query;
    NSString *_searchKey;
    IBOutlet id _searchPanel;
    IBOutlet NSMenuItem *_allDocumentsMenuItem;
    IBOutlet NSMenuItem *_iSpendDocumentsMenuItem;
}
- (IBAction)orderFrontSearchPanel:(id)sender;
- (IBAction)setSearchAllDocuments:(id)sender;
- (IBAction)setSearchISpendDocuments:(id)sender;
// openFile is used for bindings. See the bindings in the NSTableView
- (void)openFile:(NSString *)path;

// used internally
- (void)createSearchPredicate;

@end
