#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef THUNDERSDK_SWIFT_H
#define THUNDERSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ThunderSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Representation of user consents related with ads personalization.
typedef SWIFT_ENUM(NSInteger, AdTonosConsent, open) {
/// Personalization allowed.
/// Application is allowed to collect user related information - for example localization.
/// Contains consent to:
/// <ul>
///   <li>
///     <code>PROCESSING</code> - Allow processing of data.
///   </li>
///   <li>
///     <code>SENSOR_ACCESS</code> - Allow use of the device’s sensor data.
///   </li>
///   <li>
///     <code>STORAGE</code> - Allow storing and accessing information on the device.
///   </li>
///   <li>
///     <code>USE_FOR_AD_PROFILES</code> - Allow use of technology for personalised ads.
///   </li>
///   <li>
///     <code>USE_FOR_PERSONALISED_CONTENT</code> - Allow use of technology for personalised content.
///   </li>
///   <li>
///     <code>USE_FOR_REPORTING</code> - Allow use of technology for market research and audience insights.
///   </li>
///   <li>
///     <code>USE_FOR_IMPROVEMENT</code> - Allow use of technology for improving  products.
///   </li>
///   <li>
///     <code>LINKING_DEVICES</code> - Allow linking different devices to the user through deterministic or probabilistic means.
///   </li>
///   <li>
///     <code>USE_OF_DEVICE_INFO</code> - Allow use of automatically provided device information such as manufacturer, model, IP addresses and MAC addresses.
///   </li>
///   <li>
///     <code>USE_FOR_SECURITY</code> - Allow use of independent identifiers to ensure the secure operation of systems.
///   </li>
///   <li>
///     <code>USE_FOR_DIAGNOSTICS</code> - Allow processing of diagnostic information using an independent identifier to ensure the correct operation of systems.
///   </li>
///   <li>
///     <code>PRECISE_GEOLOCATION</code> - Allow use of precise geolocation data (within 500 metres accuracy).
///   </li>
/// </ul>
  AdTonosConsentAllowAll = 0,
/// Personalization is not allowed.
  AdTonosConsentNone = 1,
};


@class NSString;
@class NSNumber;

/// Allow access to ThunderSDK through Objective-C
SWIFT_CLASS("_TtC10ThunderSDK15ObjC_ThunderSDK")
@interface ObjC_ThunderSDK : NSObject
/// Shared object for VAST advertisements handling.
/// since:
/// 1.0.0
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ObjC_ThunderSDK * _Nonnull shared;)
+ (ObjC_ThunderSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Initializes the SDK with data about application launch.
/// since:
/// 1.0.0
/// \param launchOptions Options passed during application launch.
///
- (void)initializeWith:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
/// Sets the NumberEight key.
/// The key must be set before invoking the start method.
/// since:
/// 1.0.7
/// \param key NumberEight key, which you can get from AdTonos.
///
- (void)setNumberEightKey:(NSString * _Nonnull)key;
/// Starts the SDK with consent for personalization.
/// Invokes any required system permissions.
/// Uses <code>start(with:)</code> to save the consent.
/// since:
/// 1.0.0
/// \param consent Positive or negative profiling consents for ads personalization.
/// <code>0</code> is equivalent to  <code>AdTonosConsent/allowAll</code>
/// <code>1</code> is equivalent to <code>AdTonosConsent/none</code>
///
- (void)startWith:(int32_t)consent;
/// A Boolean that indicates whether an SDK is started.
/// since:
/// 1.0.0
@property (nonatomic, readonly) BOOL isStarted;
/// Saves consent to use between application launches.
/// since:
/// 1.0.0
/// \param consent Positive or negative profiling consents for ads personalization.
/// <code>0</code> is equivalent to  <code>AdTonosConsent/allowAll</code>
/// <code>1</code> is equivalent to <code>AdTonosConsent/none</code>
///
- (void)saveWithConsent:(int32_t)consent;
/// Loads previously used profiling settings for SDK start or recently saved consent if start was not invoked yet.
/// since:
/// 1.0.0
///
/// returns:
/// <code>0</code> when profiling consents are set to <code>AdTonosConsent/allowAll</code>,
/// <code>1</code> when profiling settings are set to <code>AdTonosConsent/none</code>,
/// <code>-1</code> when there are no stored profiling settings yet.
- (int32_t)loadLatestConsent SWIFT_WARN_UNUSED_RESULT;
/// Creates an empty builder instance and return id for further usage.
/// since:
/// 1.0.0
///
/// returns:
/// Builder id.
- (int32_t)createBuilder SWIFT_WARN_UNUSED_RESULT;
/// Sets user language.
/// since:
/// 1.0.0
/// \param language Language provided in ISO-639-1 or ISO-639-2 format.
///
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
- (void)setWithLanguage:(NSString * _Nullable)language for:(int32_t)builderId;
/// Sets adType.
/// since:
/// 1.1.0
/// \param adType <code>0</code> is equivalent to  <code>VastAdType/regular</code>
/// <code>1</code> is equivalent to <code>VastAdType/bannerAd</code>
///
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
- (void)setWithAdType:(int32_t)adType for:(int32_t)builderId;
/// Sets developer key.
/// since:
/// 1.0.0
/// \param key The developer key provided by AdTonos, required for correct SDK behavior.
///
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
- (void)setWithKey:(NSString * _Nullable)key for:(int32_t)builderId;
/// Builds url for obtaining advertisements from VAST compliant advertisements provider.
/// since:
/// 1.0.0
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
///
/// throws:
/// Error of type <code>ThunderSDK/ThunderBuilderError</code>
///
/// returns:
/// URL as a string.
- (NSString * _Nonnull)createURLWith:(int32_t)builderId SWIFT_WARN_UNUSED_RESULT;
/// Disposes any collected data used for ads personalization.
/// since:
/// 1.0.0
- (void)dispose;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef THUNDERSDK_SWIFT_H
#define THUNDERSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ThunderSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Representation of user consents related with ads personalization.
typedef SWIFT_ENUM(NSInteger, AdTonosConsent, open) {
/// Personalization allowed.
/// Application is allowed to collect user related information - for example localization.
/// Contains consent to:
/// <ul>
///   <li>
///     <code>PROCESSING</code> - Allow processing of data.
///   </li>
///   <li>
///     <code>SENSOR_ACCESS</code> - Allow use of the device’s sensor data.
///   </li>
///   <li>
///     <code>STORAGE</code> - Allow storing and accessing information on the device.
///   </li>
///   <li>
///     <code>USE_FOR_AD_PROFILES</code> - Allow use of technology for personalised ads.
///   </li>
///   <li>
///     <code>USE_FOR_PERSONALISED_CONTENT</code> - Allow use of technology for personalised content.
///   </li>
///   <li>
///     <code>USE_FOR_REPORTING</code> - Allow use of technology for market research and audience insights.
///   </li>
///   <li>
///     <code>USE_FOR_IMPROVEMENT</code> - Allow use of technology for improving  products.
///   </li>
///   <li>
///     <code>LINKING_DEVICES</code> - Allow linking different devices to the user through deterministic or probabilistic means.
///   </li>
///   <li>
///     <code>USE_OF_DEVICE_INFO</code> - Allow use of automatically provided device information such as manufacturer, model, IP addresses and MAC addresses.
///   </li>
///   <li>
///     <code>USE_FOR_SECURITY</code> - Allow use of independent identifiers to ensure the secure operation of systems.
///   </li>
///   <li>
///     <code>USE_FOR_DIAGNOSTICS</code> - Allow processing of diagnostic information using an independent identifier to ensure the correct operation of systems.
///   </li>
///   <li>
///     <code>PRECISE_GEOLOCATION</code> - Allow use of precise geolocation data (within 500 metres accuracy).
///   </li>
/// </ul>
  AdTonosConsentAllowAll = 0,
/// Personalization is not allowed.
  AdTonosConsentNone = 1,
};


@class NSString;
@class NSNumber;

/// Allow access to ThunderSDK through Objective-C
SWIFT_CLASS("_TtC10ThunderSDK15ObjC_ThunderSDK")
@interface ObjC_ThunderSDK : NSObject
/// Shared object for VAST advertisements handling.
/// since:
/// 1.0.0
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ObjC_ThunderSDK * _Nonnull shared;)
+ (ObjC_ThunderSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Initializes the SDK with data about application launch.
/// since:
/// 1.0.0
/// \param launchOptions Options passed during application launch.
///
- (void)initializeWith:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
/// Sets the NumberEight key.
/// The key must be set before invoking the start method.
/// since:
/// 1.0.7
/// \param key NumberEight key, which you can get from AdTonos.
///
- (void)setNumberEightKey:(NSString * _Nonnull)key;
/// Starts the SDK with consent for personalization.
/// Invokes any required system permissions.
/// Uses <code>start(with:)</code> to save the consent.
/// since:
/// 1.0.0
/// \param consent Positive or negative profiling consents for ads personalization.
/// <code>0</code> is equivalent to  <code>AdTonosConsent/allowAll</code>
/// <code>1</code> is equivalent to <code>AdTonosConsent/none</code>
///
- (void)startWith:(int32_t)consent;
/// A Boolean that indicates whether an SDK is started.
/// since:
/// 1.0.0
@property (nonatomic, readonly) BOOL isStarted;
/// Saves consent to use between application launches.
/// since:
/// 1.0.0
/// \param consent Positive or negative profiling consents for ads personalization.
/// <code>0</code> is equivalent to  <code>AdTonosConsent/allowAll</code>
/// <code>1</code> is equivalent to <code>AdTonosConsent/none</code>
///
- (void)saveWithConsent:(int32_t)consent;
/// Loads previously used profiling settings for SDK start or recently saved consent if start was not invoked yet.
/// since:
/// 1.0.0
///
/// returns:
/// <code>0</code> when profiling consents are set to <code>AdTonosConsent/allowAll</code>,
/// <code>1</code> when profiling settings are set to <code>AdTonosConsent/none</code>,
/// <code>-1</code> when there are no stored profiling settings yet.
- (int32_t)loadLatestConsent SWIFT_WARN_UNUSED_RESULT;
/// Creates an empty builder instance and return id for further usage.
/// since:
/// 1.0.0
///
/// returns:
/// Builder id.
- (int32_t)createBuilder SWIFT_WARN_UNUSED_RESULT;
/// Sets user language.
/// since:
/// 1.0.0
/// \param language Language provided in ISO-639-1 or ISO-639-2 format.
///
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
- (void)setWithLanguage:(NSString * _Nullable)language for:(int32_t)builderId;
/// Sets adType.
/// since:
/// 1.1.0
/// \param adType <code>0</code> is equivalent to  <code>VastAdType/regular</code>
/// <code>1</code> is equivalent to <code>VastAdType/bannerAd</code>
///
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
- (void)setWithAdType:(int32_t)adType for:(int32_t)builderId;
/// Sets developer key.
/// since:
/// 1.0.0
/// \param key The developer key provided by AdTonos, required for correct SDK behavior.
///
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
- (void)setWithKey:(NSString * _Nullable)key for:(int32_t)builderId;
/// Builds url for obtaining advertisements from VAST compliant advertisements provider.
/// since:
/// 1.0.0
/// \param builderId The builder id that is returned in the <code>ObjC_ThunderSDK/createBuilder()</code> method.
///
///
/// throws:
/// Error of type <code>ThunderSDK/ThunderBuilderError</code>
///
/// returns:
/// URL as a string.
- (NSString * _Nonnull)createURLWith:(int32_t)builderId SWIFT_WARN_UNUSED_RESULT;
/// Disposes any collected data used for ads personalization.
/// since:
/// 1.0.0
- (void)dispose;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
