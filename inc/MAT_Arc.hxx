// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_Arc_HeaderFile
#define _MAT_Arc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT_Arc_HeaderFile
#include <Handle_MAT_Arc.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_BasicElt_HeaderFile
#include <Handle_MAT_BasicElt.hxx>
#endif
#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MAT_Side_HeaderFile
#include <MAT_Side.hxx>
#endif
class MAT_BasicElt;
class MAT_Node;
class Standard_DomainError;


//! An Arc is associated to each Bisecting of the mat. <br>
class MAT_Arc : public MMgt_TShared {

public:

  
  Standard_EXPORT   MAT_Arc(const Standard_Integer ArcIndex,const Standard_Integer GeomIndex,const Handle(MAT_BasicElt)& FirstElement,const Handle(MAT_BasicElt)& SecondElement);
  //! Returns the index of <me> in Graph.theArcs. <br>
  Standard_EXPORT     Standard_Integer Index() const;
  //! Returns  the index associated  of the  geometric <br>
//!            representation of <me>. <br>
  Standard_EXPORT     Standard_Integer GeomIndex() const;
  //! Returns one of the BasicElt equidistant from <me>. <br>
  Standard_EXPORT     Handle_MAT_BasicElt FirstElement() const;
  //! Returns the other BasicElt equidistant from <me>. <br>
  Standard_EXPORT     Handle_MAT_BasicElt SecondElement() const;
  //! Returns one Node extremity of <me>. <br>
  Standard_EXPORT     Handle_MAT_Node FirstNode() const;
  //! Returns the other Node extremity of <me>. <br>
  Standard_EXPORT     Handle_MAT_Node SecondNode() const;
  //! an Arc has two Node, if <aNode> egal one <br>
//!            Returns the other. <br>
//! <br>//! if <aNode> is not oh <me> <br>
  Standard_EXPORT     Handle_MAT_Node TheOtherNode(const Handle(MAT_Node)& aNode) const;
  //! Returnst True is there is an arc linked to <br>
//!            the Node <aNode> located on the side <aSide> of <me>; <br>//! if <aNode> is not on <me> <br>
  Standard_EXPORT     Standard_Boolean HasNeighbour(const Handle(MAT_Node)& aNode,const MAT_Side aSide) const;
  //! Returns the first arc linked to the Node <aNode> <br>
//!            located on the side <aSide> of <me>; <br>//! if HasNeighbour() returns FALSE. <br>
  Standard_EXPORT     Handle_MAT_Arc Neighbour(const Handle(MAT_Node)& aNode,const MAT_Side aSide) const;
  
  Standard_EXPORT     void SetIndex(const Standard_Integer anInteger) ;
  
  Standard_EXPORT     void SetGeomIndex(const Standard_Integer anInteger) ;
  
  Standard_EXPORT     void SetFirstElement(const Handle(MAT_BasicElt)& aBasicElt) ;
  
  Standard_EXPORT     void SetSecondElement(const Handle(MAT_BasicElt)& aBasicElt) ;
  
  Standard_EXPORT     void SetFirstNode(const Handle(MAT_Node)& aNode) ;
  
  Standard_EXPORT     void SetSecondNode(const Handle(MAT_Node)& aNode) ;
  
  Standard_EXPORT     void SetFirstArc(const MAT_Side aSide,const Handle(MAT_Arc)& anArc) ;
  
  Standard_EXPORT     void SetSecondArc(const MAT_Side aSide,const Handle(MAT_Arc)& anArc) ;
  
  Standard_EXPORT     void SetNeighbour(const MAT_Side aSide,const Handle(MAT_Node)& aNode,const Handle(MAT_Arc)& anArc) ;




  DEFINE_STANDARD_RTTI(MAT_Arc)

protected:




private: 


Standard_Integer arcIndex;
Standard_Integer geomIndex;
Handle_MAT_BasicElt firstElement;
Handle_MAT_BasicElt secondElement;
Handle_MAT_Node firstNode;
Handle_MAT_Node secondNode;
Standard_Address firstArcLeft;
Standard_Address firstArcRight;
Standard_Address secondArcRight;
Standard_Address secondArcLeft;
Standard_Real firstParameter;
Standard_Real secondParameter;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif