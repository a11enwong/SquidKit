//
//  URLImageViewController.swift
//  SquidKitExample
//
//  Created by Mike Leavy on 2/3/15.
//  Copyright (c) 2015 SquidKit. All rights reserved.
//

import UIKit
import SquidKit

class URLImageViewController: UIViewController {

    @IBOutlet var imageView:URLImageView?
    
    var urlString = "http://static1.squarespace.com/static/52eea758e4b0fff11bf07129/52eeeda0e4b0fff11bf09db9/52eeee41e4b0b43e3bb4e615/1391390276529/DSC_3729.jpg"
    
    override func viewDidAppear(animated: Bool) {
        super.viewDidAppear(animated)
        
        self.imageView?.urlString = urlString
        self.imageView?.activityIndicatorType = .Dark
        self.imageView?.load()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.imageView?.imageAppearanceType = .FadeIfNotCached(0.5, 0.0, 1.0)
    }
}
