#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    /**
     * @param s: A string with lowercase letters and parentheses
     * @return: A string which has been removed invalid parentheses
     */
    string removeParentheses(string &s) {
        stack<int> stk;
        for (int i = 0; i < s.size(); ) {
            if (s[i] == '(') {
                stk.push(i);
                i++;
            } else if (s[i] == ')') {
                if (!stk.empty()) {
                    stk.pop();
                    i++;
                }else{
                    s.erase(i,1);
                }
            }else{
                i++;
            }
        }
        while (!stk.empty()) {
            s.erase(stk.top(), 1);
            stk.pop();
        }
        return s;
    }
};

int main() {
    Solution solution;
    string s = "pns(i(bhbi)kj()kojs(tzanmj)rxmsl(zkl(i(ggqqeyo)bxht((auwsuuyhzb)cq((jabbcui))cpe(jj))(snd(a(mpe(ooe)ggjp))((k)iudv)acfk(kl(vagyd)c)r)))(y)i)k)))b)))q)(s))kxoy()kg)zbpyk)(ish()yc)ljjc()((qm(hec(zb((d)qvl(stob)y)s)rj)(f)zyf()(uw)dwjuryn)r()qegnfef()hm()nos(zb((suu))eudvoei)(p)ebmqqv)fooe)uiqs)t(ggcuh(uc))(dc)r)jpc(w)icgr)jjkhz(i(hh(sxjhxlqbl)cd(((x(syah)pc)wb(mtksjq(rg(abg(a(absm)crryc())f)ecejbrizgel((v)(qz())fox)x)()v(it()k(rabrs)e(urx))gg)q)p(rpjv)kfqjnz(ivn)lurl)fu))mam)v()pthlcse(((nd)uw)tqozric(kan)p)e)(k)u(s)h(f(neiundsufv()vw(ih)()md))u))ex((jib))eqixg())dpooo((d()s)sw(we)fzvus()wuzs(h()j))n)ykcbaxew(f()r))bcxa))y((vs)mqfn((utlr(mcw((oc)b)r(fvhtaxzxc(djuq)))))(((edik)g(ikygpv(ncpuueplg(((po(sjeweb()txbqafuh)t)))bpat()x((j()((())(lz(vbx))rsr(((jn(((jc)l((tlqkq(xwtbpy)plol)njbxmdh(e(fw(aaetrpcp)ecw()y(p(cfepipj)d(m((xf(((n(o(hoy(fhe(pc(wb)(r)ka(hwir)hl(pw)j)vndjiw(uowqzi)lz()l)y)(jwp)))boqy)npj(h)hnpxki)f(fjxsyb)ojmr)((rk(ux())jrzezn)usy)(zdozd(by)p(z))lvkb()e)z))kw)gcyficicdws)lt(";
    cout << solution.removeParentheses(s);
    return 0;
}
