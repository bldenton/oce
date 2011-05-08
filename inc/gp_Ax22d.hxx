// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Ax22d_HeaderFile
#define _gp_Ax22d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Ax2d_HeaderFile
#include <gp_Ax2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Pnt2d;
class gp_Dir2d;
class gp_Ax2d;
class gp_Trsf2d;
class gp_Vec2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Ax22d);


//!  Describes a coordinate system in a plane (2D space). <br>
//! A coordinate system is defined by: <br>
//! -   its origin (also referred to as its "Location point"), and <br>
//! -   two orthogonal unit vectors, respectively, called the "X <br>
//!   Direction" and the "Y Direction". <br>
//!   A gp_Ax22d may be right-handed ("direct sense") or <br>
//! left-handed ("inverse" or "indirect sense"). <br>
//! You use a gp_Ax22d to: <br>
//! - describe 2D geometric entities, in particular to position <br>
//!   them. The local coordinate system of a geometric <br>
//!   entity serves for the same purpose as the STEP <br>
//!   function "axis placement two axes", or <br>
//! -   define geometric transformations. <br>
//! Note: we refer to the "X Axis" and "Y Axis" as the axes having: <br>
//! -   the origin of the coordinate system as their origin, and <br>
//! -   the unit vectors "X Direction" and "Y Direction", <br>
//!   respectively, as their unit vectors. <br>
class gp_Ax22d  {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates an object representing the reference <br>
//!            co-ordinate system (OXY). <br>
      gp_Ax22d();
  
//!  Creates a coordinate system with origin P and where: <br>
//!   -   Vx is the "X Direction", and <br>
//!   -   the "Y Direction" is orthogonal to Vx and <br>
//!    oriented so that the cross products Vx^"Y <br>
//!    Direction" and Vx^Vy have the same sign. <br>
//! Raises ConstructionError if Vx and Vy are parallel (same or opposite orientation). <br>
      gp_Ax22d(const gp_Pnt2d& P,const gp_Dir2d& Vx,const gp_Dir2d& Vy);
  
//!  Creates -   a coordinate system with origin P and "X Direction" <br>
//!   V, which is: <br>
//!   -   right-handed if Sense is true (default value), or <br>
//!   -   left-handed if Sense is false <br>
      gp_Ax22d(const gp_Pnt2d& P,const gp_Dir2d& V,const Standard_Boolean Sense = Standard_True);
  
//!  Creates -   a coordinate system where its origin is the origin of <br>
//!   A and its "X Direction" is the unit vector of A, which   is: <br>
//!   -   right-handed if Sense is true (default value), or <br>
//!   -   left-handed if Sense is false. <br>
      gp_Ax22d(const gp_Ax2d& A,const Standard_Boolean Sense = Standard_True);
  
//!  Assigns the origin and the two unit vectors of the <br>
//! coordinate system A1 to this coordinate system. <br>
        void SetAxis(const gp_Ax22d& A1) ;
  
//!  Changes the XAxis and YAxis ("Location" point and "Direction") <br>
//!  of <me>. <br>
//!  The "YDirection" is recomputed in the same sense as before. <br>
        void SetXAxis(const gp_Ax2d& A1) ;
  //! Changes the XAxis and YAxis ("Location" point and "Direction") of <me>. <br>
//!  The "XDirection" is recomputed in the same sense as before. <br>
        void SetYAxis(const gp_Ax2d& A1) ;
  
//!  Changes the "Location" point (origin) of <me>. <br>
        void SetLocation(const gp_Pnt2d& P) ;
  
//! Assigns Vx to the "X Direction"  of <br>
//! this coordinate system. The other unit vector of this <br>
//! coordinate system is recomputed, normal to Vx , <br>
//! without modifying the orientation (right-handed or <br>
//! left-handed) of this coordinate system. <br>
        void SetXDirection(const gp_Dir2d& Vx) ;
  //! Assignsr Vy to the  "Y Direction" of <br>
//! this coordinate system. The other unit vector of this <br>
//! coordinate system is recomputed, normal to Vy, <br>
//! without modifying the orientation (right-handed or <br>
//! left-handed) of this coordinate system. <br>
        void SetYDirection(const gp_Dir2d& Vy) ;
  //! Returns an axis, for which <br>
//! -   the origin is that of this coordinate system, and <br>
//! -   the unit vector is either the "X Direction"  of this coordinate system. <br>
//! Note: the result is the "X Axis" of this coordinate system. <br>
        gp_Ax2d XAxis() const;
  //! Returns an axis, for which <br>
//!    -   the origin is that of this coordinate system, and <br>
//! - the unit vector is either the  "Y Direction" of this coordinate system. <br>
//! Note: the result is the "Y Axis" of this coordinate system. <br>
        gp_Ax2d YAxis() const;
  
//!  Returns the "Location" point (origin) of <me>. <br>
       const gp_Pnt2d& Location() const;
  
//!  Returns the "XDirection" of <me>. <br>
       const gp_Dir2d& XDirection() const;
  
//!  Returns the "YDirection" of <me>. <br>
       const gp_Dir2d& YDirection() const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt2d& P) ;
  
//!  Performs the symmetrical transformation of an axis <br>
//!  placement with respect to the point P which is the <br>
//!  center of the symmetry. <br>
//! Warnings : <br>
//!  The main direction of the axis placement is not changed. <br>
//!  The "XDirection" and the "YDirection" are reversed. <br>
//!  So the axis placement stay right handed. <br>
  Standard_EXPORT     gp_Ax22d Mirrored(const gp_Pnt2d& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2d& A) ;
  
//!  Performs the symmetrical transformation of an axis <br>
//!  placement with respect to an axis placement which <br>
//!  is the axis of the symmetry. <br>
//!  The transformation is performed on the "Location" <br>
//!  point, on the "XDirection" and "YDirection". <br>
//!  The resulting main "Direction" is the cross product between <br>
//!  the "XDirection" and the "YDirection" after transformation. <br>
  Standard_EXPORT     gp_Ax22d Mirrored(const gp_Ax2d& A) const;
  
        void Rotate(const gp_Pnt2d& P,const Standard_Real Ang) ;
  
//!  Rotates an axis placement. <A1> is the axis of the <br>
//!  rotation . Ang is the angular value of the rotation <br>
//!  in radians. <br>
        gp_Ax22d Rotated(const gp_Pnt2d& P,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt2d& P,const Standard_Real S) ;
  
//!  Applies a scaling transformation on the axis placement. <br>
//!  The "Location" point of the axisplacement is modified. <br>
//! Warnings : <br>
//!  If the scale <S> is negative : <br>
//!   . the main direction of the axis placement is not changed. <br>
//!   . The "XDirection" and the "YDirection" are reversed. <br>
//!  So the axis placement stay right handed. <br>
        gp_Ax22d Scaled(const gp_Pnt2d& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf2d& T) ;
  
//!  Transforms an axis placement with a Trsf. <br>
//!  The "Location" point, the "XDirection" and the <br>
//!  "YDirection" are transformed with T.  The resulting <br>
//!  main "Direction" of <me> is the cross product between <br>
//!  the "XDirection" and the "YDirection" after transformation. <br>
        gp_Ax22d Transformed(const gp_Trsf2d& T) const;
  
        void Translate(const gp_Vec2d& V) ;
  
//!  Translates an axis plaxement in the direction of the vector <br>
//!  <V>. The magnitude of the translation is the vector's magnitude. <br>
        gp_Ax22d Translated(const gp_Vec2d& V) const;
  
        void Translate(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  
//!  Translates an axis placement from the point <P1> to the <br>
//!  point <P2>. <br>
        gp_Ax22d Translated(const gp_Pnt2d& P1,const gp_Pnt2d& P2) const;
    const gp_Pnt2d& _CSFDB_Getgp_Ax22dpoint() const { return point; }
    const gp_Dir2d& _CSFDB_Getgp_Ax22dvydir() const { return vydir; }
    const gp_Dir2d& _CSFDB_Getgp_Ax22dvxdir() const { return vxdir; }



protected:




private: 


gp_Pnt2d point;
gp_Dir2d vydir;
gp_Dir2d vxdir;


};


#include <gp_Ax22d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif