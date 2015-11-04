/*
 
 File: MyDocument.h
 
 */ 


#import <Cocoa/Cocoa.h>

#define kSpendDocumentType @"com.apple.ispend.document"
#define kSpendExtension @"spend"

@interface MyDocument : NSDocument
{
    double _openingBalance;
    NSMutableArray *_transactions;
    NSMutableArray *_categories;
    NSMutableArray *_accountTypes;
    id _transactionController;
    NSSearchField *searchFieldOutlet;
}

- (NSArray *)transactions;
- (void)setTransactions:(NSMutableArray *)transactions;
- (void)setCategories:(NSMutableArray *)categories;
- (void)setAccountTypes:(NSMutableArray *)accountTypes;

- (void)startObservingTransactions:(NSArray *)newTransactions;
- (void)stopObservingTransactions:(NSArray *)oldTransactions;

- (void)insertTransactions:(NSArray *)objects atIndexes:(NSIndexSet *)indexes;
- (void)removeTransactionsAtIndexes:(NSIndexSet *)indexes;
@end

@interface MyDocument(Toolbar)
- (void)setupToolbarForWindow:(NSWindow *)theWindow;
@end

