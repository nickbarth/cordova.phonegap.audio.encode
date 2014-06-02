## PhoneGap/Cordova AudioEncode Plugin
 * Original by Lyle Pratt
 * Updated by Keenan Wyrobek and John Croucher

## About this Plugin

This plugin lets you easily convert WAV audio into M4A audio. It is useful when using the Phonegap audio capture or media recording functionality. Uploading WAV files on via cellular connections is not advised. M4A encoded files are 1/4 to 1/10 the size.

## Using the Plugin

The plugin creates a function at window.encodeAudio(originalSrc, success, fail) method.
 * originalSrc: (required) This is a string path to the local file to encode. This is typically the fullPath property of the entry passed to the success of a fileSystem.root.getFile call
 * success: (required) This function is called when the encoding has completed successfully. It will be called with the new m4ASource 
 * fail: (required) This function is called on encode failure and will be passed a statusCode.

Example:

```
window.encodeAudio(pathToWavFile, success, fail);

var success = function(newM4APath) {
  // Do something with your new encoded audio (upload it?  - see notes in Xcode example)
  console.log(newM4APath);
}

var fail = function(statusCode) {
  // Why did it fail? - look in the plug in for source of error codes.
  console.log(statusCode);
}
```

## Adding the Plugin ##

```
  cordova plugin add https://github.com/nickbarth/cordova.phonegap.audio.encode.git
```

## LICENSE ##

The MIT License
