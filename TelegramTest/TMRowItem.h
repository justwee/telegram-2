//
//  TMRowItem.h
//  Telegram P-Edition
//
//  Created by Dmitry Kondratyev on 1/2/14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol TMRowItemDelegate <NSObject>

- (void) redrawRow;
- (void) changeSelected:(BOOL)isSelected;
- (void) checkSelected:(BOOL)isSelected;

@end

@protocol TMRowItemProtocol <NSObject>

- (NSObject *)itemForHash;
+ (NSUInteger)hash:(NSObject *)object;

@end

@interface TMRowItem : NSObject<TMRowItemProtocol>

@property (nonatomic, weak) id table;
@property (nonatomic, weak) id<TMRowItemDelegate> rowDelegate;
-(id)initWithObject:(id)object;
- (void) redrawRow;
- (NSUInteger)hash;

@end
