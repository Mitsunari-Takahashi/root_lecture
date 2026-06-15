void while_loop(){
    int f = 0;
    int g = 1;
    int h;
    while (g < 100){
        h = f + g;
        f = g;
        g = h;
        std::cout << h << ", ";
        }
    std::cout << endl;
}