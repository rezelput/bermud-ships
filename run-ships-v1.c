include <stdio.h>
void go2W(int * lat, int * lon)
{
    *lat = *lat -1;
    *lon = *lon +1;
}
void go2E(int * lt1, int * ln2)
{
    while (lt1 != 'x1')
    {
        char side[4];
puts ("Change side of the world: ")
fgets(side, sizeof(side), stdin)
    }
}
void change_side()
{
go2E(&side);


}
int main(void)
{
   int latitude = 32;
   int longtitude = 64;
   go2W(&latitude, &longtitude)
   printf("Coord: [%i,%i]\n", latitude, longtitude) 
}