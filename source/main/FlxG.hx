package main;

import openfl.display.DisplayObject;
import main.game.FlxGame;

class FlxG
{
	public static var state:State;

	public static var stage:DisplayObject;

	public static var elapsed:Float = 0;

	public static function switchState(state:State)
	{
		FlxGame.nextState = state;
	}
}
