package states;

import openfl.media.SoundChannel;
import openfl.net.URLRequest;
import haxe.extern.AsVar;
import openfl.media.Sound;
import main.FlxG;
import main.game.music.Song;
import main.game.music.MusicBeatState;
import main.game.music.Conductor;
import openfl.display.Sprite;
import main.State;

class TitleState extends MusicBeatState
{
	var SONG:SwagSong;

	var inst:Sound;
	var instchnl:SoundChannel;

	override function create()
	{
		super.create();
		
		SONG ??= Song.loadFromJson('dadbattle-hard','dadbattle');
		Conductor.changeBPM(SONG.bpm);
		trace(Conductor.crochet / 1000);
		FlxG.stage.stage.color = 0xFF000000;

		inst = new Sound();

		inst.load(new URLRequest('assets/music/${SONG.song.toLowerCase()}/Inst.ogg'));
		instchnl = inst.play(0);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

	    Conductor.songPosition = instchnl.position;
		
	
	}

	override function beatHit()
		{
			super.beatHit();
			trace(curBeat);
			
		
		}
}
