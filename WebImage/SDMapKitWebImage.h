/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 * (c) Florent Vilmart
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <MapKit/MapKit.h>

//! Project version number for WebImage.
FOUNDATION_EXPORT double MapKitWebImageVersionNumber;

//! Project version string for WebImage.
FOUNDATION_EXPORT const unsigned char MapKitWebImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MapKitWebImage/PublicHeader.h>

// MapKit
#if __has_include(<SDWebImage/MKAnnotationView+WebCache.h>)
#import <SDMapKitWebImage/MKAnnotationView+WebCache.h>
#endif
