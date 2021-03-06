//
//  Preferences.swift
//  SquidKit
//
//  Created by Mike Leavy on 8/29/14.
//  Copyright (c) 2014 SquidKit. All rights reserved.
//

import Foundation

public class Preferences {
    
    public init() {
        
    }
    
    // OVERRIDE to return a different NSUserDefaults (such as a shared defaults if you're working on an extension or suite)
    public var userDefaults:NSUserDefaults {
        return NSUserDefaults.standardUserDefaults()
    }
    
    public func setPreference(object:AnyObject, key:String) {
        self.userDefaults.setObject(object, forKey: key)
        self.userDefaults.synchronize()
    }
    
    public func preference(key:String) -> AnyObject? {
        return self.userDefaults.objectForKey(key)
    }
    
    public func remove(key:String) {
        self.userDefaults.removeObjectForKey(key)
    }
}