//==============================================================================
// Allan CORNET - 2012 - DIGITEO
//==============================================================================
// unit test ind2rgb
//==============================================================================
a = [1:0.05:16];
b = int32(a'*a);
cmap = jetcolormap(256);
c = ind2rgb(b,cmap);
imshow(c);
//==============================================================================
