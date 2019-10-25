#include<iostream>

enum Color
{
    Color_Black,
    Color_Red,
    Color_Blue,
    Color_Green
};

enum ItemType
{
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION
};

std::string getItemName(ItemType itemType)
{
    if(itemType == ITEMTYPE_SWORD)
        return std::string("Sword");
    if(itemType == ITEMTYPE_TORCH)
        return std::string("Torch");
    if(itemType == ITEMTYPE_POTION)
        return std::string("Potion");

    return std::string("???");
}

int main()
{
    
    Color color{Color_Red};
    std::cout<<color<<'\n';
    ItemType itemType = ITEMTYPE_TORCH;
    std::cout<<"You are carraying a "<<getItemName(itemType)<<'\n';

    return 0;
}

