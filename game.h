/* 符号常量和game.c中所有函数的原型 */
// 游戏屏幕尺寸
#define HIGH 20
#define WIDTH 30


// 数据初始化
void startup(void);

// 显示画面
void show(void);

// 与用户输入无关的更新
void updateWithoutInput(void); 

// 与用户输入有关的更新
void updateWithInput(void); 
