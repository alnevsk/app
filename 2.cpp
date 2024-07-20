#include <iostream>
#include <fstream>

int main() {
    int x, y;
    int count=0, count2=0;
    std::ifstream file("cont2.txt");
    if (file) {
        while (true) {
            file >> x >> y;
            if (file.eof()) {
                break;
            }

            count+=x;
            count2+=y;
            std::cout << x << ", " << y << std::endl;
            
            

        }
    
        
    }
    
    printf("%d",count);
    std::cout << ", ";
    printf("%d",count2);

    return 0;
}