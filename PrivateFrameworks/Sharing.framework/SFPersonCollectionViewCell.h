/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class CALayer, NSArray, NSObject<SFPersonCollectionViewCellDelegate>, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, UIColor, UILabel, _SFPersonImageView;

__attribute__((visibility("hidden")))
@interface SFPersonCollectionViewCell : UICollectionViewCell
{
    struct CGRect _personViewFrame;
    _SFPersonImageView *_personImageView;
    CALayer *_personIconMaskLayer;
    UIColor *_averagedColor;
    UIColor *_textColor;
    SFCircleProgressView *_circleProgressView;
    UILabel *_personNameLabel;
    float _labelsOriginY;
    UILabel *_waitingLabel;
    UILabel *_sendingLabel;
    UILabel *_sentLabel;
    UILabel *_declinedLabel;
    id _progressToken;
    NSProgress *_progress;
    NSArray *_progressKeyPaths;
    SFAirDropNode *_person;
    int _cellState;
    NSString *_sessionID;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<SFPersonCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int cellState; // @synthesize cellState=_cellState;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) SFAirDropNode *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)userDidCancel;
- (void)userDidSelect;
- (void)switchToLabel:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)updateTextLabels;
- (void)updatePersonIconView;
- (void)didMoveToWindow;
- (void)restoreCellStateFromFinalTransferState:(int)arg1;
- (void)setCellState:(int)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)createLabelWithFrame:(struct CGRect)arg1;

@end

