// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_Array1OfPISeg_HeaderFile
#define _HLRAlgo_Array1OfPISeg_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class HLRAlgo_PolyInternalSegment;



class HLRAlgo_Array1OfPISeg 
{
public:

  DEFINE_STANDARD_ALLOC

  
    HLRAlgo_Array1OfPISeg(const Standard_Integer Low, const Standard_Integer Up);
  
    HLRAlgo_Array1OfPISeg(const HLRAlgo_PolyInternalSegment& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const HLRAlgo_PolyInternalSegment& V) ;
  
      void Destroy() ;
~HLRAlgo_Array1OfPISeg()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  HLRAlgo_Array1OfPISeg& Assign (const HLRAlgo_Array1OfPISeg& Other) ;
 const  HLRAlgo_Array1OfPISeg& operator = (const HLRAlgo_Array1OfPISeg& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const HLRAlgo_PolyInternalSegment& Value) ;
  
     const  HLRAlgo_PolyInternalSegment& Value (const Standard_Integer Index)  const;
   const  HLRAlgo_PolyInternalSegment& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      HLRAlgo_PolyInternalSegment& ChangeValue (const Standard_Integer Index) ;
    HLRAlgo_PolyInternalSegment& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT HLRAlgo_Array1OfPISeg(const HLRAlgo_Array1OfPISeg& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item HLRAlgo_PolyInternalSegment
#define Array1Item_hxx <HLRAlgo_PolyInternalSegment.hxx>
#define TCollection_Array1 HLRAlgo_Array1OfPISeg
#define TCollection_Array1_hxx <HLRAlgo_Array1OfPISeg.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _HLRAlgo_Array1OfPISeg_HeaderFile
