#include "PushButton.h"
#include"Window.h"
PushButton::PushButton(const std::string& text, int x, int y, int w, int h)
	:BasicWidget(x,y,w,h),m_text(text)
{

}

void PushButton::show()
{	
	//按钮颜色
	setfillcolor(cur_c);
	//按钮框大小
	::fillroundrect(m_x, m_y, m_x + m_w, m_y + m_h, 10,10);

	//文字颜色
	settextcolor(BLACK);
	//文字居中显示在按钮中间
	int tx = m_x+(m_w - textwidth(m_text.c_str())) / 2;
	int ty = m_y + (m_h - textheight(m_text.c_str())) / 2;
	
	::outtextxy(tx, ty, m_text.c_str());
}






