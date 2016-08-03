#import <Foundation/Foundation.h>

@interface OCSPLocalizedMessageTable : NSObject

+ (nonnull NSString *) localizedEmptyTestSuiteMessageWithSuiteName:(nonnull NSString *) suiteName;

+ (nonnull NSString *)localizedTestPageMessageWithUnderlyingMessage:(nonnull NSString *) underlyingMessage;

+ (nonnull NSString *) localizedTestSuiteParsingErrorMessage;

+ (nonnull NSString *) localizedTestSuiteReportDataNotFound;

+ (nullable NSString *)localizedMessageWithKey:(nonnull NSString*)key argument:(nullable NSString*)arg;


@end
