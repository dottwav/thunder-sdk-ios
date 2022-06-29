Pod::Spec.new do |s|

    s.name              = 'ThunderLiteSDK'
    s.version           = '1.0.7'
    s.summary           = 'SDK for your in-app audio advertisement preparation'
    s.homepage          = 'https://www.adtonos.com'
    s.authors           = { 'Mateusz Wojnar' => 'mateusz.wojnar@siroccomobile.com', 'Aleksander Olszewski' => 'aleksander.olszewski@siroccomobile.com' }
    s.license           = { :type => 'Proprietary', :file => 'LICENSE.txt' }
    s.platform          = :ios
    s.source            = { :git => 'https://github.com/adtonos/thunder-sdk-ios.git', :tag => s.version }
    s.swift_version = '5.0'
    s.ios.deployment_target = '10.0'
    s.ios.vendored_frameworks = '**/ThunderLiteSDK/ThunderSDK.xcframework'

    

    s.static_framework = true
    s.user_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }

end
