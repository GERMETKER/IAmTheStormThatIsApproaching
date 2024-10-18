#ifndef _JAKPOT_HPP_
#define _JAKPOT_HPP_
#include <cstdlib>
#include <algorithm>
#include <new>
#include <initializer_list>

//���������� ���������� ������
template <class Type>
//����������� ������, � ������� ��� ������ ���������� ������
class Terraria
{
public:
    Terraria() = default;
    Terraria(const Type& var) :var_(var) {};

    void SetVar(Type newVar)
    {
        var_ = newVar;
    }
    Type GetVar()const { return var_; }

    Type& GetData() { return var_; };
    const Type GetData() const { return var_; }
private:
    Type var_;

};



#endif 







