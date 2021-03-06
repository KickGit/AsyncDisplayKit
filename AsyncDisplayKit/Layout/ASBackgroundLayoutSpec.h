//
//  ASBackgroundLayoutSpec.h
//  AsyncDisplayKit
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//

#import <AsyncDisplayKit/ASLayoutSpec.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Lays out a single layoutElement child, then lays out a background layoutElement instance behind it stretched to its size.
 */
@interface ASBackgroundLayoutSpec : ASLayoutSpec

/**
 * Background layoutElement for this layout spec
 */
@property (nullable, nonatomic, strong) id<ASLayoutElement> background;

/**
 * Creates and returns an ASBackgroundLayoutSpec object
 *
 * @param child A child that is laid out to determine the size of this spec.
 * @param background A layoutElement object that is laid out behind the child. If this is nil, the background is omitted.
 */
+ (instancetype)backgroundLayoutSpecWithChild:(id<ASLayoutElement>)child background:(nullable id<ASLayoutElement>)background;

@end

NS_ASSUME_NONNULL_END
