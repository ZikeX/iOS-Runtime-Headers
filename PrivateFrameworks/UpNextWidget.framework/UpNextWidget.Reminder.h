/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.Reminder : NSObject <NSSecureCoding> {
    void dueDate;
    void externalURL;
    void listColor;
    void location;
    void notes;
    void title;
}

@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic, retain) NSURL *externalURL;
@property (nonatomic, retain) struct CGColor { }*listColor;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, readonly) NSString *shallowDescription;
@property (nonatomic, copy) NSString *title;

+ (BOOL)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dueDate:(id)arg2 listColor:(struct CGColor { }*)arg3 externalURL:(id)arg4;
- (struct CGColor { }*)listColor;
- (id)location;
- (id)notes;
- (void)setDueDate:(id)arg1;
- (void)setExternalURL:(id)arg1;
- (void)setListColor:(struct CGColor { }*)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shallowDescription;
- (id)title;

@end