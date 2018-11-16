#
# Be sure to run `pod lib lint HotUpdate.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HotUpdate'
  s.version          = '0.16.0'
  s.summary          = 'HotUpdateHotUpdate'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'HotUpdateHotUpdateHotUpdate'

  s.homepage         = 'https://github.com/rebeccaBullTxt/HotUpdate'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'rebeccaBullTxt' => 'rebeccaBull@sina.com' }
#  s.source           = { :git => 'https://github.com/rebeccaBullTxt/HotUpdate.git', :tag => s.version.to_s }
  s.source = { :git => '/Users/duke/Desktop/HotUpdate'}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.static_framework  =  true
  s.libraries = 'stdc++', 'z', 'sqlite3', 'ssl', 'crypto'
  s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}
#  s.xcconfig = {'OTHER_LDFLAGS' => '-all_load'}
  #第三方静态库
#  s.vendored_libraries = 'HotUpdate/Classes/ThirdFrameWork/ReactiveObjC'
#  s.vendored_libraries = 'HotUpdate/Classes/ThirdFrameWork/PgySDK/*.{framework}'
#  s.vendored_libraries = 'HotUpdate/Classes/ThirdFrameWork/PgySDK/PgyUpdate.framework'
#  s.vendored_libraries = 'HotUpdate/Classes/ThirdFrameWork/PgySDK/PgySDK.framework'

 #  s.source_files = 'HotUpdate/Classes/**/*'  'HotUpdate/Classes/**/*.framework'
  s.source_files = 'HotUpdate/Classes/**/*.{h,m}', 'HotUpdate/Classes/**/*.mm', 'HotUpdate/Classes/**/*.d'
  s.public_header_files = 'HotUpdate/Classes/**/*.h'
 
  s.frameworks = 'UIKit', 'MapKit', 'Foundation', 'AVFoundation', 'CoreMedia', 'CFNetwork', 'Security', 'SystemConfiguration', 'MobileCoreServices', 'ImageIO', 'CoreGraphics', 'CoreFoundation', 'QuartzCore', 'AssetsLibrary', 'Accelerate', 'CoreTelephony', 'OpenGLES', 'CoreMotion', 'AudioToolbox', 'CoreLocation', 'CoreText'
  
#  s.dependency 'WCDB'
  s.dependency 'Qiniu'
  s.dependency 'BMKLocationKit'
  s.dependency 'BaiduMapKit'
  s.dependency 'JPush'
  s.dependency 'Bugly'
  s.dependency 'tingyunApp'
end
