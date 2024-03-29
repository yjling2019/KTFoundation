#
# Be sure to run `pod lib lint KTFoundation.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'KTFoundation'
  s.version          = '1.0.3'
  s.summary          = 'KOTU\'S foundation kit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/KOTU/KTFoundation'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'KOTU' => 'yjling2019@gmail.com' }
  s.source           = { :git => 'https://github.com/yjling2019/KTFoundation.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

#  s.source_files = 'KTFoundation/Classes/**/*'
  
  s.subspec 'Macros' do |sp|
	  sp.source_files = 'KTFoundation/Macros/Classes/**/*.{h,m}'
  end

  s.subspec 'Category' do |sp|
	  sp.source_files = 'KTFoundation/Category/**/*.{h,m}'
	  sp.dependency 'KTFoundation/Macros'
  end
  
  s.subspec 'Store' do |sp|
	  sp.source_files = 'KTFoundation/Store/**/*.{h,m}'
	  sp.dependency 'MMKV'
  end
  
  s.subspec 'Device' do |sp|
	  sp.source_files = 'KTFoundation/Device/**/*.{h,m}'
  end
  
end
