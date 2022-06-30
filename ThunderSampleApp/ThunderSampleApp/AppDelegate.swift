//
//  AppDelegate.swift
//  AdTonosLinkGeneratorSampleApp
//
//  Created by Mateusz Wojnar on 10/12/2021.
//

import UIKit
import ThunderSDK

@main
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window:UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        self.window = UIWindow(frame: UIScreen.main.bounds)
        window?.rootViewController = UIStoryboard(name: "Main", bundle: nil).instantiateInitialViewController()
        window?.makeKeyAndVisible()

        //Initialize with launchOptions
        ATThunderSDK.shared.initialize(with: launchOptions)
        //Sets NumberEight key before start method (skip this step on ThunderLiteSDK)
        ATThunderSDK.shared.setNumberEightKey("U71E94V86CT9ZXY98ABNMFLQ0Y9B")

        return true
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
        //Start AdTonosSDK with all consents if it is not started.
        if !ATThunderSDK.shared.isStarted {
            ATThunderSDK.shared.start(with: .allowAll)
        }
    }
}

