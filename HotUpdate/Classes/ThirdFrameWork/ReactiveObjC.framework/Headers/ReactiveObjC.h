//
//  ReactiveObjC.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveObjC.
FOUNDATION_EXPORT double ReactiveObjCVersionNumber;

//! Project version string for ReactiveObjC.
FOUNDATION_EXPORT const unsigned char ReactiveObjCVersionString[];

//#import <ReactiveObjC/EXTKeyPathCoding.h>
//#import <ReactiveObjC/EXTScope.h>
#import "EXTKeyPathCoding.h"
#import "NSArray+RACSequenceAdditions.h"
#import "NSData+RACSupport.h"
#import "NSDictionary+RACSequenceAdditions.h"
#import "NSEnumerator+RACSequenceAdditions.h"
#import "NSFileHandle+RACSupport.h"
#import "NSNotificationCenter+RACSupport.h"
#import "NSObject+RACDeallocating.h"
#import "NSObject+RACLifting.h"
#import "NSObject+RACPropertySubscribing.h"
#import "NSObject+RACSelectorSignal.h"
#import "NSOrderedSet+RACSequenceAdditions.h"
#import "NSSet+RACSequenceAdditions.h"
#import "NSString+RACSequenceAdditions.h"
#import "NSString+RACSupport.h"
#import "NSIndexSet+RACSequenceAdditions.h"
#import "NSUserDefaults+RACSupport.h"
#import "RACBehaviorSubject.h"
#import "RACChannel.h"
#import "RACCommand.h"
#import "RACCompoundDisposable.h"
#import "RACDelegateProxy.h"
#import "RACDisposable.h"
#import "RACEvent.h"
#import "RACGroupedSignal.h"
#import "RACKVOChannel.h"
#import "RACMulticastConnection.h"
#import "RACQueueScheduler.h"
#import "RACQueueScheduler+Subclass.h"
#import "RACReplaySubject.h"
#import "RACScheduler.h"
#import "RACScheduler+Subclass.h"
#import "RACScopedDisposable.h"
#import "RACSequence.h"
#import "RACSerialDisposable.h"
#import "RACSignal+Operations.h"
#import "RACSignal.h"
#import "RACStream.h"
#import "RACSubject.h"
#import "RACSubscriber.h"
#import "RACSubscriptingAssignmentTrampoline.h"
#import "RACTargetQueueScheduler.h"
#import "RACTestScheduler.h"
#import "RACTuple.h"
#import "RACUnit.h"

#if TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_TV
//    #import <ReactiveObjC/UIBarButtonItem+RACCommandSupport.h>
//    #import <ReactiveObjC/UIButton+RACCommandSupport.h>
//    #import <ReactiveObjC/UICollectionReusableView+RACSignalSupport.h>
//    #import <ReactiveObjC/UIControl+RACSignalSupport.h>
//    #import <ReactiveObjC/UIGestureRecognizer+RACSignalSupport.h>
//    #import <ReactiveObjC/UISegmentedControl+RACSignalSupport.h>
//    #import <ReactiveObjC/UITableViewCell+RACSignalSupport.h>
//    #import <ReactiveObjC/UITableViewHeaderFooterView+RACSignalSupport.h>
//    #import <ReactiveObjC/UITextField+RACSignalSupport.h>
//    #import <ReactiveObjC/UITextView+RACSignalSupport.h>
    #import "UIBarButtonItem+RACCommandSupport.h"
    #import "UIButton+RACCommandSupport.h"
    #import "UICollectionReusableView+RACSignalSupport.h"
    #import "UIControl+RACSignalSupport.h"
    #import "UIGestureRecognizer+RACSignalSupport.h"
    #import "UISegmentedControl+RACSignalSupport.h"
    #import "UITableViewCell+RACSignalSupport.h"
    #import "UITableViewHeaderFooterView+RACSignalSupport.h"
    #import "UITextField+RACSignalSupport.h"
    #import "UITextView+RACSignalSupport.h"

	#if TARGET_OS_IOS
//        #import <ReactiveObjC/NSURLConnection+RACSupport.h>
//        #import <ReactiveObjC/UIStepper+RACSignalSupport.h>
//        #import <ReactiveObjC/UIDatePicker+RACSignalSupport.h>
//        #import <ReactiveObjC/UIAlertView+RACSignalSupport.h>
//        #import <ReactiveObjC/UIActionSheet+RACSignalSupport.h>
//        #import <ReactiveObjC/MKAnnotationView+RACSignalSupport.h>
//        #import <ReactiveObjC/UIImagePickerController+RACSignalSupport.h>
//        #import <ReactiveObjC/UIRefreshControl+RACCommandSupport.h>
//        #import <ReactiveObjC/UISlider+RACSignalSupport.h>
//        #import <ReactiveObjC/UISwitch+RACSignalSupport.h>
        #import "NSURLConnection+RACSupport.h"
        #import "UIStepper+RACSignalSupport.h"
        #import "UIDatePicker+RACSignalSupport.h"
        #import "UIAlertView+RACSignalSupport.h"
        #import "UIActionSheet+RACSignalSupport.h"
        #import "MKAnnotationView+RACSignalSupport.h"
        #import "UIImagePickerController+RACSignalSupport.h"
        #import "UIRefreshControl+RACCommandSupport.h"
        #import "UISlider+RACSignalSupport.h"
        #import "UISwitch+RACSignalSupport.h"
	#endif
#elif TARGET_OS_MAC
//    #import <ReactiveObjC/NSControl+RACCommandSupport.h>
//    #import <ReactiveObjC/NSControl+RACTextSignalSupport.h>
//    #import <ReactiveObjC/NSObject+RACAppKitBindings.h>
//    #import <ReactiveObjC/NSText+RACSignalSupport.h>
//    #import <ReactiveObjC/NSURLConnection+RACSupport.h>
        #import "NSControl+RACCommandSupport.h"
        #import "NSControl+RACTextSignalSupport.h"
        #import "NSObject+RACAppKitBindings.h"
        #import "NSText+RACSignalSupport.h"
        #import "NSURLConnection+RACSupport.h"

#endif

//#import <ReactiveObjC/NSArray+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSData+RACSupport.h>
//#import <ReactiveObjC/NSDictionary+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSEnumerator+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSFileHandle+RACSupport.h>
//#import <ReactiveObjC/NSNotificationCenter+RACSupport.h>
//#import <ReactiveObjC/NSObject+RACDeallocating.h>
//#import <ReactiveObjC/NSObject+RACLifting.h>
//#import <ReactiveObjC/NSObject+RACPropertySubscribing.h>
//#import <ReactiveObjC/NSObject+RACSelectorSignal.h>
//#import <ReactiveObjC/NSOrderedSet+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSSet+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSString+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSString+RACSupport.h>
//#import <ReactiveObjC/NSIndexSet+RACSequenceAdditions.h>
//#import <ReactiveObjC/NSUserDefaults+RACSupport.h>
//#import <ReactiveObjC/RACBehaviorSubject.h>
//#import <ReactiveObjC/RACChannel.h>
//#import <ReactiveObjC/RACCommand.h>
//#import <ReactiveObjC/RACCompoundDisposable.h>
//#import <ReactiveObjC/RACDelegateProxy.h>
//#import <ReactiveObjC/RACDisposable.h>
//#import <ReactiveObjC/RACEvent.h>
//#import <ReactiveObjC/RACGroupedSignal.h>
//#import <ReactiveObjC/RACKVOChannel.h>
//#import <ReactiveObjC/RACMulticastConnection.h>
//#import <ReactiveObjC/RACQueueScheduler.h>
//#import <ReactiveObjC/RACQueueScheduler+Subclass.h>
//#import <ReactiveObjC/RACReplaySubject.h>
//#import <ReactiveObjC/RACScheduler.h>
//#import <ReactiveObjC/RACScheduler+Subclass.h>
//#import <ReactiveObjC/RACScopedDisposable.h>
//#import <ReactiveObjC/RACSequence.h>
//#import <ReactiveObjC/RACSerialDisposable.h>
//#import <ReactiveObjC/RACSignal+Operations.h>
//#import <ReactiveObjC/RACSignal.h>
//#import <ReactiveObjC/RACStream.h>
//#import <ReactiveObjC/RACSubject.h>
//#import <ReactiveObjC/RACSubscriber.h>
//#import <ReactiveObjC/RACSubscriptingAssignmentTrampoline.h>
//#import <ReactiveObjC/RACTargetQueueScheduler.h>
//#import <ReactiveObjC/RACTestScheduler.h>
//#import <ReactiveObjC/RACTuple.h>
//#import <ReactiveObjC/RACUnit.h>

