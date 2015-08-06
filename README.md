# ScrollImage
图片轮播器

 _scrollView = [[JYADView alloc] initWithFrame:CGRectMake(0, 0, kScreenWid, kScrollHeight)];
    _scrollView.imageArray = images;
    _scrollView.adDidClick = ^(NSInteger index){
        LZLog(@"%ld",(long)index);
    };
