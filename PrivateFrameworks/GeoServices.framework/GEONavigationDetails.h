/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedRoute, GEOLocation, GEONavigationGuidanceState, GEONavigationRouteSummary, GEORouteMatch, NSString;

@interface GEONavigationDetails : NSObject {
    unsigned int _annoucementStage;
    NSString *_destinationName;
    double _distanceRemainingOnRoute;
    double _distanceToManeuverEnd;
    double _distanceToManeuverStart;
    double _distanceToRoute;
    GEONavigationGuidanceState *_guidanceState;
    GEOLocation *_location;
    BOOL _locationUnreliable;
    double _remainingTime;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    GEONavigationRouteSummary *_routeSummary;
}

@property unsigned int announcementStage;
@property(readonly) NSString * destinationName;
@property double distanceRemainingOnRoute;
@property double distanceToManeuverEnd;
@property double distanceToManeuverStart;
@property double distanceToRoute;
@property(readonly) GEONavigationGuidanceState * guidanceState;
@property(retain) GEOLocation * location;
@property BOOL locationUnreliable;
@property double remainingTime;
@property(retain) GEOComposedRoute * route;
@property(retain) GEORouteMatch * routeMatch;
@property(readonly) GEONavigationRouteSummary * routeSummary;

- (unsigned int)announcementStage;
- (void)dealloc;
- (id)destinationName;
- (double)distanceRemainingOnRoute;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (double)distanceToRoute;
- (id)guidanceState;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (id)location;
- (BOOL)locationUnreliable;
- (double)remainingTime;
- (id)route;
- (id)routeMatch;
- (id)routeSummary;
- (void)setAnnouncementStage:(unsigned int)arg1;
- (void)setDistanceRemainingOnRoute:(double)arg1;
- (void)setDistanceToManeuverEnd:(double)arg1;
- (void)setDistanceToManeuverStart:(double)arg1;
- (void)setDistanceToRoute:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationUnreliable:(BOOL)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;

@end