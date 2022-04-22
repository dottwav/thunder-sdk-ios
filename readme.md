
# Overview
**ThunderSDK** is a framework for your in-app audio advertisement preparation. The framework provides automatically generated, personalized advertisements' URLs where VAST resources can be found. Use it to prepare downloadable advertisement content.

# Tutorial
Below is a tutorial on how to add the library to your project and how to use it. 

## Requirements
* XCode
* An iOS project 
* An Apple iPhone or iPad
* iOS 11 or greater

## Installation

[CocoaPods](https://guides.cocoapods.org/using/using-cocoapods) is used to integrate `ThunderSDK` into existing iOS project.

In the same directory as your project file, create Podfile, and add the following configuration:

```ruby
platform :ios, '10' # or any other deployment target

target "BasicExample" do
   pod 'ThunderSDK'
end
```
then install pods with the command

```bash
pod install
```
![alt text](./docs/images/pods1.png)

## Permissions
Add the following keys to the project’s `Info.plist`.

       
```xml
<!-- Location usage descriptions -->
<key>NSLocationWhenInUseUsageDescription</key>
<string>To determine the type of place the user is situated in while interacting with the app.</string>
<!-- Motion usage descriptions -->
<key>NSMotionUsageDescription</key>
<string>To determine physical interaction with the device while using the app.</string>
<!-- User tracking usage descriptions -->
<key>NSUserTrackingUsageDescription</key>
<string>This identifier will be used to deliver personalized ads to you.</string>
```
![alt text](./docs/images/permissions1.png)
## App Privacy Declarations

Since the release of iOS 14.5, developers must now declare the data they use in the App Privacy section of App Store Connect.
In order to assist you in declaring the correct data being collected, we have created an [AppStore Data Guide](./docs/guides/appStoreDataGuide.md).

## Consents
To work properly, the SDK needs consents. Depending on the region, please ask the user if they agree to the following.
In some regions, such as the EU, consent is required to allow third-parties to store data on users’ devices for example.


### Consents set to allow all
 Below is a list of what is included in the `AdTonosConsent.allowAll` option<br />
`PROCESSING` - Allow processing of data.<br />
`SENSOR_ACCESS` - Allow use of the device’s sensor data.<br />
`STORAGE` - Allow storing and accessing information on the device.<br />
`USE_FOR_AD_PROFILES` - Allow use of technology for personalised ads.<br />
`USE_FOR_PERSONALISED_CONTENT` - Allow use of technology for personalised content.<br />
`USE_FOR_REPORTING` - Allow use of technology for market research and audience insights.<br />
`USE_FOR_IMPROVEMENT` - Allow use of technology for improving products.<br />
`LINKING_DEVICES` - Allow linking different devices to the user through deterministic or probabilistic means.<br />
`USE_OF_DEVICE_INFO` - Allow use of automatically provided device information such as manufacturer, model, IP addresses and MAC addresses.<br />
`USE_FOR_SECURITY` - Allow use of independent identifiers to ensure the secure operation of systems.<br />
`USE_FOR_DIAGNOSTICS` - Allow processing of diagnostic information using an independent identifier to ensure the correct operation of systems.<br />
`PRECISE_GEOLOCATION` - Allow use of precise geolocation data (within 500 metres accuracy).

### Consent set to none
It is possible to start adTonos with consents set to `AdTonosConsent.none`, but it will not collect data about the user then, so the advertisement will not be personalized appropriately to the user.

## Start SDK and generate vast link

### Import
First import `ThunderSDK` in all files that use the SDK.

```swift
import ThunderSDK
```

### Initialization
The first necessary step in the project is to call the `ATThunderSDK.shared.initialize` method. It should be called at the start of the application, when the other components are created. The method is safe to be called multiple times. The Initialize method must be called every time the application starts. Below is an example of how this should be done:

* Use the following code to initialize `ThunderSDK` in the AppDelegate’s `application:willFinishLaunchingWithOptions:` method:

```swift
func application(_ application: UIApplication, willFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
    ATThunderSDK.shared.initialize(with: launchOptions)
  
    return true
}
```

* If you don't want to do initialization in AppDelegate but e.g. in ViewController, you can also pass `nil` as a parameter.

```swift
ATThunderSDK.shared.initialize(with: nil)
```

### Start

The library requires certain permissions and user consents for data collection. Therefore, one of the initial screens should show the user the terms and conditions containing the necessary information about the use and processing of personal data. This is done when the user first interacts with the application, so this is a good time to call the Start method. The method takes the consent flag as a parameter and then asks the user for the system permissions necessary for the application to work. The `start` method must be called every time the application starts. Additionally, the `loadLatestConsents` method can be used, which returns the most recently granted consents. Below is an example of how this can be done:

> Important: `start` must be called when the application is active, otherwise the idfa permission popup will not be shown to the user.<br />

Pass the consent `.allowAll` or `.none` as a function parameter. 

```swift
ATThunderSDK.shared.start(with: .allowAll)
```
To check if *ThunderSDK* is started it is possible to use the `isStarted` variable.

```swift
_ = ATThunderSDK.shared.isStarted
```

**Save consents**

In case you want to change the consents, you can use the method `save`.

```swift
ATThunderSDK.shared.save(consent: .none)
```
**Load consents**

You can also get the last set consents using the method `loadLatestConsent`.

```swift
ATThunderSDK.shared.loadLatestConsent()
```
### Generate VAST link
To generate a VAST link, create a builder and then set the AdTonos key. 

>The best way to create a builder is to use `ThunderObserver` and create it when the `onStarted` callback is invoked. 

Moreover if you want to use a language other than preferred in the system, you can set it with ``set(lang:)``. 

>Language must be provided in **ISO-639-1** or **ISO-639-2** format. 

```swift
let vastLink = ATThunderSDK.shared.createBuilder()
                      .set(adTonosKey: "XXXXX") //Sets developer key.
                      .set(lang: "en") //Sets user language if different than a system defined
                      .build()
   
```
* **AdTonos key** - Where to find AdTonosKey? 
It's provided by AdTonos on the portal and can be extracted from the link:

 > [https://play.adtonos.com/xml/XXXXX/vast.xml]()
 
 where XXXXX is the AdTonos key. AdTonos usually provides two links, one for testing purposes and one for release.
 During development testing key shall be used.

### ThunderObserver
The best way to request for ads is to listen to the callback informing that the SDK is started. To be notified of this state conform your class to  `ThunderObserver`  and use  `add(thunderObserver:)`method.

```swift
extension YourViewController: ThunderObserver { 
   func onStarted(success: Bool, error: ATError?) {
        if success {
            let builder = ATThunderSDK.shared.createBuilder()
            let vastLink: String = builder.set(adTonosKey: <key>)
                                          .set(lang: "en") 
                                          .build()
        }
    }
 }
```

an observer should be added, 

```swift
ATThunderSDK.shared.add(thunderObserver: self)
```

e.g. in `viewDidLoad()`

```swift
override func viewDidLoad() {
        super.viewDidLoad()
        ATThunderSDK.shared.add(thunderObserver: self)
}
```
To **remove** an observer to not be notified for related callbacks anymore use  `remove(thunderObserver:)`  method.

```swift
ATThunderSDK.shared.remove(thunderObserver: self)
```

To **remove all** previously added observers to not be notified for related callbacks anymore use  `removeAllObservers()`  method.

```swift
ATThunderSDK.shared.removeAllObservers()
```

### Dispose

Use `dispose` to dispose any collected data related to personalized advertisements and prevent further gathering if needed.

```swift
ATThunderSDK.shared.dispose()
```
