/**
 * Formula for root approximation
 * sq(x) = 1/2 (x + (n/x))
 * where:
 *    x = given problem
 *    n = base number of the root (ex. 2.5^2(base number) = 6.25)
 *    sq(x) = square root of x
 */


 #include <iostream>

 long double findClosestRoot(long double x) {
    
    long    base_root_gap //detects the gaps between the base root and the given number
            ,base_root_sqr // detects the square of the base root
            ,base_root_base_dec // base root with added decimals
            ,base_root = 1
            ,base_root_value = ++base_root
            ,base_root_x = base_root * base_root
            ,base_root_dec = 0.1;

    do {

        if (base_root_x < x) {

            do {

                if(base_root_value <= x) {

                    //tries if the base root is less than x
                    std::cout << "Trying: " << base_root_value << "\n";
                    base_root_sqr = base_root_value * base_root_value;
                    std::cout << "     |--Square: " << base_root_sqr << "\n";

                }

                if (base_root_sqr <= x) {
                    base_root_gap = x - base_root_sqr;
                    break;
                    if (base_root_gap > 2) {
                        //if the gap between the base root and the given number is greater than 2, we can add decimals to the base root
                        
                        do {
                            base_root_base_dec = base_root_sqr + base_root_dec;
                            ++base_root_dec;
    
                            std::cout << base_root_base_dec;
    
                        } while (base_root_gap > 2);
                    }
                }

            } while (base_root_value <= x);

        }

        break;
    } while (base_root_x < x);
    return 0;
 }

 int main() {
    findClosestRoot(60);
 }