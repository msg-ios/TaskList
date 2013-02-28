#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface TaskListAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (TaskListAPIClient *)sharedClient;

+ (NSData *)dataFromHexString:(NSString *)string;

@end
