/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoOverlayDelegate>, UINavigationButton, UILabel, MPTransportControls, UIView, MPNowPlayingItemQueueInfoButton, UINavigationBar, MPVideoViewController, MPDetailSlider, MPItem, UIImageView, UINavigationItem;



@interface MPFullScreenVideoOverlay : MPSwipableView <MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay>
{
    MPVideoViewController *_videoController;
    <MPVideoOverlayDelegate> *_delegate;
    MPItem *_item;
    NSInteger _interfaceOrientation;
    UIView *_loadingMovieIndicatorView;
    MPDetailSlider *_scrubControl;
    UILabel *_scrubSpeedLabel;
    UILabel *_scrubInstructionsLabel;
    MPTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_linkInfoButton;
    UINavigationButton *_backButton;
    UINavigationBar *_navigationBar;
    UIImageView *_navigationBarBackground;
    UIImageView *_navigationBarShadow;
    UINavigationItem *_navigationItem;
    UINavigationButton *_scaleModeButton;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    NSUInteger _visibleParts;
    unsigned int _tvOutEnabled : 1;
    unsigned int _wantsTick : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _detailScrubbing : 1;
}

@property BOOL TVOutEnabled;
@property BOOL allowsDetailScrubbing;
@property NSUInteger visibleParts;
@property MPVideoViewController *videoViewController;
@property(retain,readonly) MPTransportControls *transportControls;
@property NSInteger interfaceOrientation;
@property(retain,readonly) UINavigationBar *navigationBar;
@property(retain) MPItem *item;
@property NSUInteger disabledParts;
@property NSUInteger desiredParts;
@property <MPVideoOverlayDelegate> *delegate;

+ (void)_initializeSafeCategory;

- (void)setItem:(id)arg1;
- (id)navigationBar;
- (id)item;
- (void)didMoveToSuperview;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (NSInteger)interfaceOrientation;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)videoViewController;
- (NSUInteger)desiredParts;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)hideAlternateTracks;
- (void)_hideScrubInstructions;
- (BOOL)TVOutEnabled;
- (void)showAlternateTracks;
- (id)viewsToFadeOutWhenShowingBackside;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (NSUInteger)disabledParts;
- (void)restoreSanity;
- (NSInteger)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(NSInteger)arg2;
- (void)_configureLinkButtonForCurrentItemTime;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)_backButtonAction:(id)arg1;
- (void)_scaleButtonAction:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_bufferingStateDidChange:(id)arg1;
- (void)_scaleModeDidChangeNotification:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(NSInteger)arg2;
- (NSUInteger)_desiredPartsForTransportControlsWithParts:(NSUInteger)arg1;
- (void)_initNavigationBar;
- (void)_reloadTransportControls:(BOOL)arg1;
- (void)_reloadNavigationBarWithAnimation:(BOOL)arg1;
- (id)_scrubControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateScrubControlWithAnimation:(BOOL)arg1;
- (void)_updateTimeBasedValues;
- (NSUInteger)_visiblePartsForTransportControlsWithParts:(NSUInteger)arg1;
- (void)_showScrubInstructions;
- (id)_loadingMovieIndicatorView;
- (void)setVideoController:(id)arg1;
- (BOOL)allowsDetailScrubbing;
- (void)setVideoViewController:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 interfaceOrientation:(NSInteger)arg2;
- (id)transportControls;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)crossedURLTimeMarker:(id)arg1;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (NSUInteger)visibleParts;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;

@end