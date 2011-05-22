﻿#ifndef __electricsheepguiMyDialog2__
#define __electricsheepguiMyDialog2__

/**
@file
Subclass of MyDialog2, which is generated by wxFormBuilder.
*/

#include "config.h"

//// end generated include
#ifndef LINUX_GNU
#include <windows.h>
#include <wx/msw/winundef.h>
#else
#include <limits.h>
#define MAX_PATH PATH_MAX
#endif
#include <wx/wx.h>
#include <wx/thread.h>
#include <string>

class LoginThread : public wxThread
{
public:
	LoginThread(wxThreadKind kind = wxTHREAD_JOINABLE): wxThread(kind) {};
	virtual ~LoginThread() {};
	void* Entry();
};

/** Implementing MyDialog2 */
class electricsheepguiMyDialog2 : public MyDialog2
{
	protected:
		// Handlers for MyDialog2 events.
		void OnDialogClose( wxCloseEvent& event );
		void OnRunClick( wxCommandEvent& event );
		void OnHelpClick( wxCommandEvent& event );
		void OnDrupalNameTextEnter( wxCommandEvent& event );
		void OnDrupalPasswordTextEnter( wxCommandEvent& event );
		void OnTestAccountButtonClick( wxCommandEvent& event );
		void OnCreateClick( wxCommandEvent& event );
		void OnUnlimitedCacheCheck( wxCommandEvent& event );
		void OnGoldUnlimitedCacheCheck( wxCommandEvent& event );
		void OnContentDirChanged( wxFileDirPickerEvent& event );
		void OnOpenClick( wxCommandEvent& event );
		void OnProxyTextEnter( wxCommandEvent& event );
		void OnProxyUserNameEnter( wxCommandEvent& event );
		void OnProxyPasswordEnter( wxCommandEvent& event );
		void OnAboutUrl( wxTextUrlEvent& event );
		void OnClickOk( wxCommandEvent& event );
		void OnCancelClick( wxCommandEvent& event );
		virtual void LoginTest( wxIdleEvent& event );
		void DeleteListXml();
		
		void OnDecodeFpsTextUpdated( wxCommandEvent& event );
		void OnDecodeFpsKillFocus( wxFocusEvent& event );
		void OnPlayerFpsTextUpdated( wxCommandEvent& event );
		void OnPlayerFpsKillFocus( wxFocusEvent& event );

	public:
		/** Constructor */
		electricsheepguiMyDialog2( wxWindow* parent );
	//// end generated class members
	bool m_TestLogin;
	void Login();
	virtual ~electricsheepguiMyDialog2();

	std::string m_Response;
	std::string m_Role;
private:
	char szPath[ MAX_PATH ];
	void SaveSettings();
	void LoadSettings();
	std::string m_UniqueId;
	LoginThread *m_LoginThread;
};

#endif // __electricsheepguiMyDialog2__