简易工厂模式的优缺点:
优点:对拓展开放,想加入新的运算方法只需要添加一个新的运算方法类即可
缺点:需要修改工厂类

工厂方法通过加入一个抽象工厂类,具体工厂继承抽象工厂类的方法,避开了简易工厂模式的缺点,不再需要修改工厂类,而是加入一个运算方法工厂,
创建对象的责任交给了客户端

工厂方法如何根据情况生成不同的对象:
工厂方法在 方法工厂 中生成对应对象,而简易工厂需要通过if或case判断来生成对象