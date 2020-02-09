#import <UIKit/UIKit.h>

@interface MGGooseView : UIView {
	NSTimer *_timer;
	NSMutableArray<UIView *> *_mud;
	CGFloat _foot1Y;
	CGFloat _foot2Y;
	NSInteger _walkingState;
	CGFloat _targetFacingTo;
	NSInteger _remainingFramesUntilCompletion;
	void(^_walkCompletion)(void);
	void(^_animationCompletion)(void);
	CGFloat _walkMultiplier;
}
@property (nonatomic, assign) CGFloat facingTo;
- (void)walkForDuration:(NSTimeInterval)duration
	speed:(CGFloat)speed
	completionHandler:(void(^)(void))completion;
- (void)setFacingTo:(CGFloat)degress
	animationCompletion:(void(^)(void))completion;
@end