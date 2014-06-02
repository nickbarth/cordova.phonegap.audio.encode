var exec = require('cordova/exec');

var encodeAudio = function(originalSrc, successCallback, failCallback) {
  exec(successCallback, failCallback, 'AudioEncode', 'encodeAudio', [originalSrc]);
};

module.exports = encodeAudio;
