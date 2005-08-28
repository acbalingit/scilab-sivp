#include <mex.h> 
static int direct_gateway(char *fname,void F(void)) { F();return 0;};
extern Gatefunc int_test;
extern Gatefunc int_imread;
extern Gatefunc int_imwrite;
extern Gatefunc int_canny;
extern Gatefunc int_convert;
extern Gatefunc int_laplace;
extern Gatefunc int_precornerdetec;
extern Gatefunc int_imsmooth;
extern Gatefunc int_sobel;
extern Gatefunc int_threshold;
extern Gatefunc int_vdopen;
extern Gatefunc int_vdgetframe;
extern Gatefunc int_vdshowopened;
extern Gatefunc int_vdclose;
extern Gatefunc int_vdcloseall;
extern Gatefunc int_mat2utfimg;
static GenericTable Tab[]={
  {(Myinterfun)sci_gateway,int_test,"sivptest"},
  {(Myinterfun)sci_gateway,int_imread,"imread"},
  {(Myinterfun)sci_gateway,int_imwrite,"imwrite"},
  {(Myinterfun)sci_gateway,int_canny,"canny"},
  {(Myinterfun)sci_gateway,int_convert,"convert"},
  {(Myinterfun)sci_gateway,int_laplace,"laplace"},
  {(Myinterfun)sci_gateway,int_precornerdetec,"precornerdetec"},
  {(Myinterfun)sci_gateway,int_imsmooth,"imsmooth"},
  {(Myinterfun)sci_gateway,int_sobel,"sobel"},
  {(Myinterfun)sci_gateway,int_threshold,"threshold"},
  {(Myinterfun)sci_gateway,int_vdopen,"vdopen"},
  {(Myinterfun)sci_gateway,int_vdgetframe,"vdgetframe"},
  {(Myinterfun)sci_gateway,int_vdshowopened,"vdshowopened"},
  {(Myinterfun)sci_gateway,int_vdclose,"vdclose"},
  {(Myinterfun)sci_gateway,int_vdcloseall,"vdcloseall"},
  {(Myinterfun)sci_gateway,int_mat2utfimg,"mat2utfimg"},
};
 
int C2F(libsivp)()
{
  Rhs = Max(0, Rhs);
  (*(Tab[Fin-1].f))(Tab[Fin-1].name,Tab[Fin-1].F);
  return 0;
}
