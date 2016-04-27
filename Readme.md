This Kata is a C-port from Emilie Bache's [Github Repository](https://github.com/emilybache/GildedRose-Refactoring-Kata).
This Kata was originally created by Terry Hughes (http://twitter.com/#!/TerryHughes). It is already on GitHub [here](https://github.com/NotMyself/GildedRose). See also Bobby Johnson's [description](http://iamnotmyself.com/2011/02/13/refactor-this-the-gilded-rose-kata/) of the kata.

I used the [Ceedling](https://github.com/ThrowTheSwitch/Ceedling) build environment.

To start type
    
    rake release
    ./run_test_sh
    
to see an textual expression of the current functionality. Then start writing your own Unit-Tests in `test_GildedRose.c`
    
    rake test:all

will then run your unit tests. Then refactor the code and implement the new functionality.