/* 
Copyright 2011 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "BSD" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/bsd_license
*/

#import <Cocoa/Cocoa.h>
#import "../base/PyDupeGuru.h"

@interface PyDupeGuru : PyDupeGuruBase
//Scanning options
- (void)setWordWeighting:(NSNumber *)words_are_weighted;
- (void)setMatchSimilarWords:(NSNumber *)match_similar_words;
@end
