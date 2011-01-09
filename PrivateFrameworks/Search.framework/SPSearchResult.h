/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString, NSDate, NSNumber, NSURL;



@interface SPSearchResult : NSObject <SPSearchResult, SPSearchResultCursor>
{
    NSInteger _domain;
    NSInteger _resultDomain;
    NSString *_resultDisplayIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_auxiliaryTitle;
    NSString *_auxiliarySubtitle;
    unsigned long long _identifier;
    NSURL *_URL;
    NSDate *_date;
    NSNumber *_badge;
}

@property(retain) NSDate *date;
@property(retain) NSURL *URL;
@property unsigned long long identifier;
@property(retain) NSString *auxiliarySubtitle;
@property(retain) NSString *auxiliaryTitle;
@property(retain) NSString *summary;
@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property(copy) NSNumber *badge;
@property(retain) NSString *resultDisplayIdentifier;
@property NSInteger resultDomain;
@property NSInteger domain;


- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setURL:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (unsigned long long)identifier;
- (void)setDate:(id)arg1;
- (NSUInteger)hash;
- (id)URL;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)date;
- (void)setTitle:(id)arg1;
- (id)summary;
- (void)setDomain:(NSInteger)arg1;
- (void)setSummary:(id)arg1;
- (NSInteger)domain;
- (BOOL)getBadgeValue:(float*)arg1;
- (const char *)subtitleUTF8String;
- (NSInteger)resultDomain;
- (const char *)resultDisplayIdentifierUTF8String;
- (const char *)titleUTF8String;
- (const char *)auxiliaryTitleUTF8String;
- (const char *)auxiliarySubtitleUTF8String;
- (const char *)summaryUTF8String;
- (BOOL)getDateSinceReferenceDate:(double*)arg1;
- (const char *)URLUTF8String;
- (id)auxiliarySubtitle;
- (void)setAuxiliarySubtitle:(id)arg1;
- (id)auxiliaryTitle;
- (void)setAuxiliaryTitle:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)resultDisplayIdentifier;
- (void)setResultDisplayIdentifier:(id)arg1;
- (void)setResultDomain:(NSInteger)arg1;

@end