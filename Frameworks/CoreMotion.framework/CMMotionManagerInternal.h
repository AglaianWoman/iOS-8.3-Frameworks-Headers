//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface CMMotionManagerInternal : NSObject
{
    int fSampleLock;
    struct Dispatcher *fAccelerometerDispatcher;
    double fAccelerometerUpdateInterval;
    CDUnknownBlockType fAccelerometerHandler;
    NSOperationQueue *fAccelerometerQueue;
    double fLastAccelerometerNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 acceleration;
    } fLatestAccelerometerSample;
    struct Dispatcher *fAmbientPressureDispatcher;
    double fAmbientPressureUpdateInterval;
    CDUnknownBlockType fAmbientPressureHandler;
    NSOperationQueue *fAmbientPressureQueue;
    double fLastAmbientPressureNotificationTimestamp;
    Sample_068dee23 fLatestAmbientPressureSample;
    struct Dispatcher *fGyroDispatcher;
    double fGyroUpdateInterval;
    CDUnknownBlockType fGyroHandler;
    NSOperationQueue *fGyroQueue;
    double fLastGyroNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 rotationRate;
        unsigned short sampleNum;
        _Bool fsync;
    } fLatestGyroSample;
    struct Dispatcher *fDeviceMotionDispatcher;
    double fDeviceMotionUpdateInterval;
    CDUnknownBlockType fDeviceMotionHandler;
    NSOperationQueue *fDeviceMotionQueue;
    double fLastDeviceMotionNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_04e8b4cd deviceMotion;
        _Bool fsync;
    } fLatestDeviceMotionSample;
    unsigned int fAttitudeReferenceFrame;
    _Bool fCompassCalibrationHud;
    _Bool fShowCompassCalibrationHudOnResume;
    _Bool fHaveSentDeviceRequiresMovementError;
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client>> fGeomagneticModelProviderClient;
    CDStruct_3e502cbb fGeomagneticModel;
    _Bool fHaveSentTrueNorthUnavailableError;
    double fDeviceMotionStartTimestamp;
    struct Dispatcher *fMagnetometerDispatcher;
    double fMagnetometerUpdateInterval;
    CDUnknownBlockType fMagnetometerHandler;
    NSOperationQueue *fMagnetometerQueue;
    double fLastMagnetometerNotificationTimestamp;
    struct Sample {
        double timestamp;
        CDStruct_03942939 magneticField;
    } fLatestMagnetometerSample;
    _Bool fShowsDeviceMovementDisplay;
    struct Dispatcher *fPrivateAccelerometerDataDispatcher;
    CDUnknownFunctionPointerType fPrivateAccelerometerDataCallback;
    void *fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher *fPrivateGyroDataDispatcher;
    CDUnknownFunctionPointerType fPrivateGyroDataCallback;
    void *fPrivateGyroDataCallbackInfo;
    struct Dispatcher *fPrivateMagnetometerDataDispatcher;
    CDUnknownFunctionPointerType fPrivateMagnetometerDataCallback;
    void *fPrivateMagnetometerDataCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionDispatcher;
    CDUnknownFunctionPointerType fPrivateDeviceMotionCallback;
    void *fPrivateDeviceMotionCallbackInfo;
    _Bool fPrivateDeviceMotionUse9Axis;
    _Bool fPrivateUseAccelerometer;
    struct CLConnectionClient *fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    struct __CFRunLoopTimer *fWatchdogTimer;
    _Bool fSidebandSensorFusionEnabled;
    _Bool fSidebandSensorFusionLatency;
    _Bool fSidebandSensorFusionSnoop;
    struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor>> fSidebandVisitor;
    _Bool fPrivateWantsPowerConservativeDeviceMotion;
    CDUnknownFunctionPointerType fPrivateNotificationCallback;
    void *fPrivateNotificationCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionSensorStatusDispatcher;
    struct Dispatcher *fPrivateDeviceMotionAlgorithmDidResetDispatcher;
    CDUnknownFunctionPointerType fPrivateGyroBiasAndVarianceCallback;
    void *fPrivateGyroBiasAndVarianceCallbackInfo;
    struct Dispatcher *fPrivateGyroBiasAndVarianceDispatcher;
    CDUnknownFunctionPointerType fPrivateDeviceMotionCompassDataCallback;
    void *fPrivateDeviceMotionCompassDataCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionCompassDataDispatcher;
    CDUnknownFunctionPointerType fPrivateDeviceMotionCompassAlignmentCallback;
    void *fPrivateDeviceMotionCompassAlignmentCallbackInfo;
    struct Dispatcher *fPrivateDeviceMotionCompassAlignmentDispatcher;
    _Bool fInactive;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;
- (void)teardownPrivate;

@end
