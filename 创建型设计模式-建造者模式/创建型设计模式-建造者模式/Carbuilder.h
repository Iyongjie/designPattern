
//
//  Carbuilder.h
//  创建型设计模式-建造者模式
//
//  Created by 温杰 on 2018/4/8.
//  Copyright © 2018年 温杰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"
@protocol Carbuilder <NSObject>
-(void)tire;
-(void)engine;
-(void)wheel;
-(Car*)createCar;
@end
