//
//  ViewController.h
//  MyTableView_ObjC
//
//  Created by Jervy Umandap on 8/2/21.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *myTableView;

@end

