package states;

import main.game.music.MusicBeatState;
import main.game.music.Conductor;
import openfl.display.Sprite;
import main.State;

class TitleState extends MusicBeatState
{
	var sprite:Sprite = new Sprite();

	override function create()
	{
		super.create();
		trace(Conductor.crochet);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	
	}
}
