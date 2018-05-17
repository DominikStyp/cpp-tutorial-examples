
#include "DominikPHPExtension.h"

/**
 * Replaces regular links with hyperlinks in a string, as follows:
 * input:
 * http://bla.ok/link.html
 * 
 * result:
 *  <a href="http://bla.ok/link.html">http://bla.ok/link.html</a>
 * 
 * @param string input
 * @return string
 */
string replaceUrlsWithAnchors(string input){
    regex r ("http(s?)://[^\\s]+");
    return regex_replace(input, r, "<a href=\"$&\">$&</a>");
}

void testReplaceUrlsWithAnchors(){
    string s = "alskdfj xcv http://bla.ok/12343-2234/?x=123&y=22 http https://github.com/?user=my and https://is.ok.domain/fuckit.html";
    cout << "--------- testReplaceUrlsWithAnchors() ---------- " << endl;
    cout << replaceUrlsWithAnchors(s) << endl;
}
