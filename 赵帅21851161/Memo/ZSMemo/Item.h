//
//  Item.h
//  Memo
//
//  Created by 赵帅 on 2018/10/31.
//  Copyright © 2018 赵帅. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Item : NSManagedObject

@property (nonatomic, retain) NSString * itemName;

@end
