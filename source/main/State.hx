package main;

import openfl.display.DisplayObject;
import lime.app.Application;
import openfl.events.Event;

class State
{
	public function new()
	{
	}

	public function create()
	{
		FlxG.stage.addEventListener(Event.ENTER_FRAME, tryUpdate);
		Application.current.onExit.add(function(smth:Int)
		{
			destroy();
		});
	}

	private function tryUpdate(event:Event)
	{
		try
		{
			if (event.type == Event.ENTER_FRAME)
			{
				var first:Float = haxe.Timer.stamp();
				update(FlxG.elapsed);
				var second:Float = haxe.Timer.stamp();
				var elapsed:Float = Math.abs(second - first);
				FlxG.elapsed = elapsed;
			}
		}
		catch (e:Dynamic)
		{
			var errMsg:String = 'Crash! Error: \n$e           ';
			Application.current.window.alert(errMsg, 'Crash Handler from main.State');
			Sys.exit(1);
		}
	}

	private function tryDestroy(event:Event)
	{
		if (event.type == Event.CLOSE)
		{
			destroy();
		}
	}

	public function update(elapsed:Float)
	{
	}

	public function destroy()
	{
		FlxG.stage.removeEventListener(Event.ENTER_FRAME, tryUpdate);
	}

	public function add(basic:DisplayObject)
	{
		FlxG.stage.stage.addChild(basic);
	}
}
