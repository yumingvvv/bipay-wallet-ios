//
//  AddAssetsController.h
//  BiPay
//
//  Created by sunliang on 2018/6/22.
//  Copyright © 2018年 zjs. All rights reserved.
//

#import "BaseController.h"

@interface AddAssetsController : BaseController
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property(nonatomic,strong)walletModel*wallet;
@end
