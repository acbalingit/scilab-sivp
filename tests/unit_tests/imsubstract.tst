//==============================================================================
// Allan CORNET - 2012 - DIGITEO
//==============================================================================
// unit test imsubstract
//==============================================================================
im1 = imread(fullpath(getSIVPpath() + "/images/lena.png"));
im2 = imread(fullpath(getSIVPpath() + "/images/peppers.png"));
ims1 = imsubtract(im1, im2);
ims2 = imsubtract(im1, 50);
//==============================================================================