package;

import states.TitleState;
import main.game.FlxGame;
import main.FlxG;
import openfl.display.FPS;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		FlxG.stage = this;
		addChild(new FlxGame(new TitleState(),60));
		addChild(new FPS(10,10,0xFFFFFF));
	
		
	}
}
