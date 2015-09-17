/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNForkJoinProgressiveResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {
    unsigned int _activeObservableIdx;
    NSMutableIndexSet *_finishedObservables;
    NSArray *_results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)observableAtIndex:(unsigned int)arg1 didCompleteForObserver:(id)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned int)arg2 observer:(id)arg3;

@end