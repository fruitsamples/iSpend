/*
 
 File: ExpandableViewController.h
 
 */ 

#import <Cocoa/Cocoa.h>

@interface ExpandableViewController : NSObject
{
    IBOutlet NSView *_bankTransactionView;
    IBOutlet NSView *_stockTransactionView;
    IBOutlet NSView *_upperTableScrollView;
    IBOutlet NSView *_middleBoxView;
    NSView *_currentView;
    id _transactionController;
    BOOL _expanded;
    NSViewAnimation *_animation;
}

@end
