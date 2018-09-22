//
//  VCH264FFmpegDecoder.h
//  VideoCodecKitDemo
//
//  Created by CmST0us on 2018/9/9.
//  Copyright © 2018年 eric3u. All rights reserved.
//


#import "VCBaseDecoder.h"

@class VCH264FFmpegFrameParser;
@interface VCH264FFmpegDecoder : VCBaseDecoder
@property (nonatomic, readonly) VCH264FFmpegFrameParser *parser;

+ (BOOL)isH264Frame:(id<VCFrameTypeProtocol>)frame;
    
@end