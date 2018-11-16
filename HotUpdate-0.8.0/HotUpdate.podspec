Pod::Spec.new do |s|
  s.name = "HotUpdate"
  s.version = "0.8.0"
  s.summary = "HotUpdateHotUpdate"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"rebeccaBullTxt"=>"rebeccaBull@sina.com"}
  s.homepage = "https://github.com/rebeccaBullTxt/HotUpdate"
  s.description = "HotUpdateHotUpdateHotUpdate"
  s.frameworks = ["UIKit", "MapKit", "Foundation", "AVFoundation", "CoreMedia", "CFNetwork", "Security", "SystemConfiguration", "MobileCoreServices", "ImageIO", "CoreGraphics", "CoreFoundation", "QuartzCore", "AssetsLibrary", "Accelerate", "CoreTelephony", "OpenGLES", "CoreMotion", "AudioToolbox", "CoreLocation", "CoreText"]
  s.libraries = ["stdc++", "z", "sqlite3", "ssl", "crypto"]
  s.xcconfig = {"OTHER_LDFLAGS"=>"-ObjC"}
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/HotUpdate.framework'
end
