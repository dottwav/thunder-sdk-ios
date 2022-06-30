//
//  LinkGeneratorViewController.swift
//  AdTonosLinkGeneratorSampleApp
//
//  Created by Mateusz Wojnar on 10/12/2021.
//

import UIKit
import ThunderSDK

class LinkGeneratorViewController: UIViewController {

    @IBOutlet weak var statusLabel: UILabel!
    @IBOutlet weak var vastLinkLabel: UILabel!
    private let thunder = ATThunderSDK.shared

    override func viewDidLoad() {
        super.viewDidLoad()
        //Add an observer to be notified by callbacks related to the SDK setup.
        thunder.add(thunderObserver: self)
    }

    @IBAction func generateLink(_ sender: Any) {
        generateVastLink()
    }

    private func generateVastLink(){
        //Creates an empty builder instance for further usage.
        let builder = thunder.createBuilder()


        guard let vastLink = try? builder
                .set(adTonosKey: "KT267qyGPudAugiSt") //Sets developer key.
                .set(lang: "en") //Sets user language if different than a system defined.
                .set(adType: .bannerAd) // Sets the type of ad (default is .regular).
                .build() //Builds url for obtaining advertisements from VAST compliant advertisements provider.
        else { return }

        print(vastLink)
        vastLinkLabel.text = vastLink
    }

    deinit {
        thunder.remove(thunderObserver: self)
    }
}

extension LinkGeneratorViewController: ThunderObserver {
    func onStarted(success: Bool, error: ThunderError?) {
        if success {
            statusLabel.text = "Thunder is started."
            //SDK is started, so we can create a builder and generate link.
            generateVastLink()
        }
    }
}
