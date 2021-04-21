#pragma once
#include <string>
#include <commctrl.h>
#include <commoncontrols.h>
#include <dpa_dsa.h>
#include <prsht.h>
#include <richedit.h>
#include <richole.h>
#include <shlobj.h>
#include <textserv.h>
#include <tom.h>
#include <uxtheme.h>
#include <windowsx.h>
#include <winuser.h>
class Show
{
protected:
	int Id;
private:
	/*void ApplyPromotions() {

	}*/
public:
	std::string Name;
	std::string Description;
	int AgeRating;

	// called when a show is clicked on - cout << DisplaySeatingChart()
	std::string DisplaySeatingChart() {
		std::string seatingchart = "A1 A2 A3 A4 A5 A6 A7 A8 \n B1 B2 B3 B4 B5 B6 B7 B8"; //Dummy db call, would search the db for seatingchart with matching show_id
		return seatingchart;
	};
	HWND DisplayManagerOptions() {
		int userPermissions = 1; //Mock for user = Venue Manager. 0 would be standard customer
		if (userPermissions == 1) {
			HWND options = Edit() + Cancel();
			return options;
		}
	};
	void Edit() {
		HWND edit CreateWindow(
			L"BUTTON",
			L"Edit",
			WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON
			10,
			10,
			100,
			100
			m_hwnd,
			NULL,
			(HINSTANCE)GetWindowLongPtr(m_hwnd, GWLP_HINSTANCE), NULL);
		);
	};
	void Cancel() {
		HWND cancel CreateWindow(
			L"BUTTON",
			L"Cancel",
			WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON
			10,
			10,
			100,
			100
			m_hwnd,
			NULL,
			(HINSTANCE)GetWindowLongPtr(m_hwnd, GWLP_HINSTANCE), NULL);
		);
	};
};

