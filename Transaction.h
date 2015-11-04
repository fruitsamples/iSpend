/*
 
 File: Transaction.h
 
 */ 

#import <Cocoa/Cocoa.h>

@interface Transaction : NSObject {
    double _amount;
    NSDate *_date;
    NSString *_descriptionString;
    NSString *_type;
    NSString *_accountType;
    BOOL _taxable;
    BOOL _stockTransaction;
    double _purchasePrice;
    double _salePrice;
    double _numberShares;
    double _costBasis;
    double _saleAmount;
    NSDate *_purchaseDate;
    NSDocument *_document;
    NSUndoManager *_undoManager;
}

@property double amount;
@property(retain) NSDate *date;
@property(copy) NSString *descriptionString;
@property(copy) NSString *type;
@property(copy) NSString *accountType;
@property BOOL taxable;
@property BOOL stockTransaction;
@property double purchasePrice;
@property double salePrice;
@property double numberShares;
@property double costBasis;
@property double saleAmount;
@property(retain) NSDate *purchaseDate;
@property(retain) NSDocument *document;
@property(readonly) NSUndoManager *undoManager;

@end
