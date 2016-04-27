#ifndef GildedRose_H
#define GildedRose_H

typedef struct
{
    char *name;
    int sellIn;
    int quality;
} Item;

extern Item* init_item(Item* item, const char *name, int sellIn, int quality);
extern void update_quality(Item items[], int size);

#endif // GildedRose_H
