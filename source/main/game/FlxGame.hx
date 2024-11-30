package main.game;

import openfl.Lib;
import openfl.display.DisplayObject;

class FlxGame extends DisplayObject
{

	public static var nextState(default, set):State;

	public function new(state:State,fps:Float = 60)
	{
        super();
        
        nextState = state;
        Lib.current.stage.frameRate = fps;

	}

	
	public static function set_nextState(value:State):State
	{
		if (FlxG.state != null)
		{
			nextState.destroy();
		}
		FlxG.state = null;
		FlxG.state = value;
		FlxG.state.create();
   

		return value;
	}
}
