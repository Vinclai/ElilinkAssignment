//
//  DSCity.h
//  ElilinkAssignment
//
//  Created by Dmitry Smolyakov on 6/30/16.
//  Copyright © 2016 Dmitry Smolyakov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface DSCity : NSManagedObject

+ (void)createWithDictionary:(NSDictionary *)dictionary InContext:(NSManagedObjectContext *)localContext;
- (void)updateWeatherWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END

#import "DSCity+CoreDataProperties.h"
