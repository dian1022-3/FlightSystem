#pragma once
#include "BasicWidget.h"
#include<string.>

class LineEdit:
	public BasicWidget
{
public:
	LineEdit(int x = 0, int y = 0, int w = 150, int h = 30);
	void show()override;
	inline void setText(const std::string& text) { m_text = text; }
	inline void setTitle(const std::string& title) { m_title = title; }
	inline void setHitText(const std::string& text) { m_hitText = text; }
	inline const std::string& text()const { return m_text; }
	void clear() { m_text.clear(); }

	bool textChanged();
private:
	std::string m_prevText;
	std::string m_text;
	std::string m_title;
	std::string m_hitText;

};

