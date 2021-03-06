#if !defined(AFX_VLCPLAYLIST_H__240360AD_3039_4E1A_9ACF_458CFC44D563__INCLUDED_)
#define AFX_VLCPLAYLIST_H__240360AD_3039_4E1A_9ACF_458CFC44D563__INCLUDED_

#if _MSC_VER > 1000
    #pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CVLCPlaylistItems;

/////////////////////////////////////////////////////////////////////////////
// CVLCPlaylist wrapper class

class CVLCPlaylist : public COleDispatchDriver
{
public:
    CVLCPlaylist() {}       // Calls COleDispatchDriver default constructor
    CVLCPlaylist(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
    CVLCPlaylist(const CVLCPlaylist& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
    BOOL GetIsPlaying();
    long add(LPCTSTR uri, const VARIANT& name, const VARIANT& options);
    void play();
    void playItem(long itemId);
    void togglePause();
    void stop();
    void next();
    void prev();
    CVLCPlaylistItems GetItems();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VLCPLAYLIST_H__240360AD_3039_4E1A_9ACF_458CFC44D563__INCLUDED_)
