#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface TaskListAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (TaskListAPIClient *)sharedClient;

@end
