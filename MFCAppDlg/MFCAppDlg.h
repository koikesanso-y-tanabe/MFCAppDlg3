
// MFCAppDlg.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CMFCAppDlgApp:
// このクラスの実装については、MFCAppDlg.cpp を参照してください。
//

class CMFCAppDlgApp : public CWinApp
{
public:
	CMFCAppDlgApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CMFCAppDlgApp theApp;