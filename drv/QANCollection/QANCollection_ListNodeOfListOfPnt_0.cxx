// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <QANCollection_ListNodeOfListOfPnt.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _QANCollection_ListOfPnt_HeaderFile
#include <QANCollection_ListOfPnt.hxx>
#endif
#ifndef _QANCollection_ListIteratorOfListOfPnt_HeaderFile
#include <QANCollection_ListIteratorOfListOfPnt.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(QANCollection_ListNodeOfListOfPnt)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(QANCollection_ListNodeOfListOfPnt)


IMPLEMENT_DOWNCAST(QANCollection_ListNodeOfListOfPnt,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(QANCollection_ListNodeOfListOfPnt)


#define Item gp_Pnt
#define Item_hxx <gp_Pnt.hxx>
#define TCollection_ListNode QANCollection_ListNodeOfListOfPnt
#define TCollection_ListNode_hxx <QANCollection_ListNodeOfListOfPnt.hxx>
#define TCollection_ListIterator QANCollection_ListIteratorOfListOfPnt
#define TCollection_ListIterator_hxx <QANCollection_ListIteratorOfListOfPnt.hxx>
#define Handle_TCollection_ListNode Handle_QANCollection_ListNodeOfListOfPnt
#define TCollection_ListNode_Type_() QANCollection_ListNodeOfListOfPnt_Type_()
#define TCollection_List QANCollection_ListOfPnt
#define TCollection_List_hxx <QANCollection_ListOfPnt.hxx>
#include <TCollection_ListNode.gxx>
