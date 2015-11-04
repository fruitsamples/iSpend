/*
 
 File: TransactionsController.h
 
 */ 

#import <Cocoa/Cocoa.h>

@interface TransactionsController : NSArrayController
{
    id _document;
    id _transactionTable;
    NSString *_observedKeyPath;
    BOOL _pendingArrangement;
}
@end

@interface TransactionsController(Sorting)
- (void)scheduleRearrangeObjects;
- (void)updateObservationForOldTransactions:(NSArray *)oldTransactions newTransactions:(NSArray *)newTransactions;
- (void)removeSortObserversForTransactions:(NSArray *)transactions sortDescriptors:(NSArray *)sortDescriptors;
- (void)addSortObserversForTransactions:(NSArray *)transactions sortDescriptors:(NSArray *)sortDescriptors;
@end
