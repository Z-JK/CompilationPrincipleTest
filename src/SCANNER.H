/* SCANNER 作为一个接口存在
 * 仅提供 getToken() 
 * 获取下一个记号，并返回对应的字符串值
 *
 */

#include "GLOBALS.H"

static const int MAX_BUF_LEN = 256;
static char lineBuf[MAX_BUF_LEN + 1]; 
static int EOF_FLAG;



class SCANNER
{
       
    static int linepos;
    static int bufsize;

    static bool getNextChar(char c);
    static void ungetNextChar();
    static void getToken();
};