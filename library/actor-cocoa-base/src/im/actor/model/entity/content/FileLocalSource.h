//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/entity/content/FileLocalSource.java
//

#ifndef _AMFileLocalSource_H_
#define _AMFileLocalSource_H_

#include "J2ObjC_header.h"
#include "im/actor/model/entity/content/FileSource.h"

@interface AMFileLocalSource : AMFileSource

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)fileName
                         withInt:(jint)size
                    withNSString:(NSString *)fileDescriptor;

- (NSString *)getFileDescriptor;

- (NSString *)getFileName;

- (jint)getSize;

@end

J2OBJC_EMPTY_STATIC_INIT(AMFileLocalSource)

FOUNDATION_EXPORT void AMFileLocalSource_initWithNSString_withInt_withNSString_(AMFileLocalSource *self, NSString *fileName, jint size, NSString *fileDescriptor);

FOUNDATION_EXPORT AMFileLocalSource *new_AMFileLocalSource_initWithNSString_withInt_withNSString_(NSString *fileName, jint size, NSString *fileDescriptor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AMFileLocalSource)

typedef AMFileLocalSource ImActorModelEntityContentFileLocalSource;

#endif // _AMFileLocalSource_H_
