//==============================================================================
// Allan CORNET - 2012 - DIGITEO
//==============================================================================
// unit test rgb2ntsc
//==============================================================================
stacksize('max');
RGB = imread(fullpath(getSIVPpath() + "/images/lena.png"));
YIQ = rgb2ntsc(RGB);
RGB = ntsc2rgb(YIQ);
imshow(RGB);
//==============================================================================
