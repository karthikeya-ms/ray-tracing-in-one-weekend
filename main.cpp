#include <iostream>

int main(){

    int image_width = 256;
    int image_height = 256;

    std::cout<<"P3\n"<<image_width<<" "<<image_height<<"\n255\n";

    for(auto j = 0; j< image_height; j++){
        std::clog<<"\nScanlines remaining: "<<(image_height - j)<<' '<<std::flush;
        for(auto i =0; i< image_width; i++){

            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height - 1);
            auto b = 0.0;  

            int ir = int(255.99*r);
            int ig = int(255.99*g);
            int ib = int(255.99*b);

            std::cout<< ir << " " <<ig<<" "<< ib<< '\n';
        }
    }
    std::clog<<"Done.       \n";
    
}