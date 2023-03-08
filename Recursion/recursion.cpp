#include <iostream>
#include <iomanip>
// 1 -> 1
// 2 -> 1 + 2  | (1) + 2
// 3 -> 1 + 2 + 3  | (2) + 3
// 4 -> 1 + 2 + 3 + 4  | (3) + 4

int sum_to_1(int inp)
{
    if(inp == 0)
    {
        //base
        return 0;
    }
    else
    {
        //general
        return inp + sum_to_1(inp - 1);
    }


}

// 1 " "
// 2 ()
// 3 ( )
// 4 (())  |  ([2])
// 5 (( ))  |  ([3])
// 6 ((()))  |  ([4])
// 7 ((( )))  |  ([5])
// 8 (((())))  |  ([6])
// 9 (((( ))))  |  ([7])
// 9 ([7]) -> (([5])) -> ((([3])))
// 8 ([6]) -> (([4])) -> ((([2])))
// 7 ([5])
// 6 ([4])
// 5 ([3]) -> "(" + [3] + ")"
// 4 ([2])
// 3 ( )
// 2 ()
// 1 " "
void print_parenteses(unsigned int num)
{
    if (num == 1)
    {
        std::cout<< " ";
    }
    else if(num == 0)
    {}
    /*
    else if(num == 2)
        std::cout << "()";
    */
    else
    {
        std::cout << "(";
        print_parenteses(num - 2);
        std::cout << ")";
    }
}

/* 
    (re) f (er)
    (r) efe (r)
       refer
*/
/* 
    (rac) e (car)
    (ra) cec (ar)
    (r) aceca (r)
       racecar
*/
/*
    (r)ac e ac(r)
    (ra)c e c(ar)
    (rac) e (car)
*/
bool is_palindrome(const char* start, const char* end)
{
    if((end - start) == 0)
    {
        return true;
    }
    else
    {
        if(*start == *(end))
            return is_palindrome(start + 1, end - 1);
        else
            return false;
    }
}

int main(int argc, char* argv[]) {
    //print_parenteses(2);

    const char str[] = "refer"; //racecar
    //const char str[] = "racecar";

    std::cout << std::boolalpha << is_palindrome(str, str + sizeof(str) - 2) << std::endl;
    system("pause");
    //std::cout << (int)is_palindrome(str, str + sizeof(str) - 2) << std::endl;
}
   

/*
//Anser
bool is_palindrome(const char front[], const char back[])
{
    if(front >= back)
    {
        return true;
    }
    else
    {
        return *front == *back && is_palindrome(front + 1, back - 1);
    }
}
*/