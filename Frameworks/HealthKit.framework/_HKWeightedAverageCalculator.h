/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWeightedAverageCalculator : NSObject {
    struct HDStatisticsCalculator_DEPRECATED<double> { 
        double _min; 
        double _max; 
        double _mean; 
        long long _count; 
    }  _currentInterval;
    double  _currentIntervalStart;
    double  _latestTime;
    struct HDStatisticsCalculator_DEPRECATED<double> { 
        double _min; 
        double _max; 
        double _mean; 
        long long _count; 
    }  _previousIntervals;
    struct HDStatisticsCalculator_DEPRECATED<double> { 
        double _min; 
        double _max; 
        double _mean; 
        long long _count; 
    }  _standardStatistics;
    HKUnit * _unit;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)getStatistics;
- (id)initWithStartTime:(double)arg1 unit:(id)arg2;

@end
