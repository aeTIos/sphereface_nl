#ifndef LANGUAGESTORM_LANGUAGE_NL_H_INCLUDED
#define LANGUAGESTORM_LANGUAGE_NL_H_INCLUDED

#include "base.h"

namespace languagestorm {

/// NOTE: methods are not declared final to allow for sublocales (e.g. nl_BE)
class nl final : public base {
public:
  nl() = default;
  virtual ~nl() = default;

  virtual std::string const of_enemy(std::string const &subject) const {
    /// Helper function to add that `subject` belongs to the enemy
    std::stringstream ss;
    ss << subject << " van vijand";
    return ss.str();
  }

  virtual std::string const ordinal(size_t value) const override {
    /// Helper function to return a value with its ordinal suffix for this language, i.e. 1st, 2nd etc
    std::stringstream ss;
    ss << value << "e";
    return ss.str();
  };

  virtual std::string const sphereface() const override {
    /// Context: shown at the start of every new game, probably should be kept
    /// the same for most languages
    return "sphereFACE";
  }
  virtual std::string const a_game_by_voxelstorm() const override {
    /// Context: shown at the start of every new game, "VoxelStorm" should
    /// probably be kept the same for most languages
    return "Een spel van VoxelStorm";
  }
  virtual std::string const dead() const override {
    /// Context: shown after the player's first death
    return "DOOD";
  }
  virtual std::string const dead_plural(uint_fast64_t deathcount) const override {
    /// Context: shown after every death, with a count of deaths so far
    /// i.e: DEAD x36
    std::stringstream ss;
    ss << "DOOD x" << deathcount;
    return ss.str();;
  }
  virtual std::string const won() const override {
    /// Context: shown when the game is complete
    return "GEWONNEN";
  }
  virtual std::string const pause() const override {
    /// Context: shown circling the player's view when the game is paused
    return "PAUZE";
  }
  ///////////////////////////////// Revision 2 /////////////////////////////////
  virtual std::string const loading() const override {
    /// Context: In the title bar of the game when starting windowed, may appear elsewhere
    // Note: the menu options are likely to appear in an all-caps font
    return "Laden...";
  }
  virtual std::string const quit() const override {
    /// Context: menu option: exit the game entirely
    return "Afsluiten";
  }
  virtual std::string const save_and_quit() const override {
    /// Context: menu option: exit the game entirely
    return "Opslaan en afsluiten";
  }
  virtual std::string const resume() const override {
    /// Context: menu option: resume playing
    return "Doorgaan";
  }
  virtual std::string const restart() const override {
    /// Context: menu option: end the current game and start a new one
    return "Herstarten";
  }
  virtual std::string const done() const override {
    /// Context: menu option: finished changing options, go back to main menu
    return "Klaar";
    /// "Afronden" might be better in this context -- aeTIos
  }
  virtual std::string const back() const override {
    /// Context: menu option: don't take any action in this menu, go back to the last
    return "Terug";
  }
  virtual std::string const options() const override {
    /// Context: menu option: open options / settings menu
    return "Opties";
  }
  virtual std::string const inventory() const override {
    /// Context: menu option: open inventory screen
    return "Inventaris";
  }
  virtual std::string const sphere() const override {
    /// Context: menu option: open info about the current sphere
    return "Bol";
  }
  virtual std::string const controls() const override {
    /// Context: menu option: open game input control configuration menu
    return "Besturing";
  }
  virtual std::string const help() const override {
    /// Context: menu option: open the help window
    return "Help";
  }
  virtual std::string const about() const override {
    /// Context: menu option: open the about-this-game window
    return "Over";
  }
  // TODO: please translate:
  /*
  virtual std::string const helptext1() const override {
    /// Context: help window: block of help text
    return "BASIC CONTROLS";
  }
  virtual std::string const helptext2() const override {
    /// Context: help window: block of help text
    // TODO - please refer to base.h
  }
  virtual std::string const helptext3() const override {
    /// Context: help window: block of help text
    // TODO - please refer to base.h
  }
  virtual std::string const helptext4() const override {
    /// Context: help window: block of help text
    // TODO - please refer to base.h
  }
  virtual std::string const abouttext(std::string const &version, std::string const &git_version, std::string const &compileinfo, std::string const &current_year) const override {
    std::stringstream ss;
    ss << "sphereFACE" "\n"
          "by" "\n"
          "VoxelStorm" "\n\n" <<
          "Version " << version << "\n" <<
          "Revision " << git_version << "\n\n" <<
          compileinfo << "\n\n" <<
          "(C) 2014-" << current_year << "\n" <<
          "VoxelStorm.com";
    return ss.str();
  }
  virtual std::string const aboutlink_devblog() const override {
    return "About sphereFACE & dev blog";
  }
  virtual std::string const aboutlink_wiki() const override {
    return "sphereFACE wiki";
  }
  virtual std::string const aboutlink_officialsite() const override {
    return "Official website";
  }
  virtual std::string const aboutlink_moregames() const override {
    return "More VoxelStorm games";
  }
  virtual std::string const aboutlink_review() const override {
    return "Write a review on Steam";
  }
  virtual std::string const aboutlink_twitter() const override {
    return "Twitter";
  }
  virtual std::string const aboutlink_facebook() const override {
    return "Facebook";
  }
  virtual std::string const aboutlink_gplus() const override {
    return "Google+";
  }
  virtual std::string const aboutlink_youtube() const override {
    return "YouTube";
  }
  */
  virtual std::string const sound() const override {
    /// Context: options menu: subtitle for the section
    return "Geluid";
  }
  virtual std::string const volume(int volume_percent) const override {
    /// Context: options menu: setting for the current sound volume
    std::stringstream ss;
    ss << "Hoofdvolume: " << volume_percent << "%";
    return ss.str();
  }
  virtual std::string const music_volume(int volume_percent) const override {
    /// Context: options menu: setting for the current music volume
    std::stringstream ss;
    ss << "Muziekvolume: " << volume_percent << "%";
    return ss.str();
  }
  virtual std::string const now_playing() const override {
    /// Context: options menu: title above the info showing what music is currently playing
    return "Je hoort nu";
  }
  virtual std::string const graphics() const override {
    /// Context: options menu: subtitle for the section
    return "Graphics";
  }
  virtual std::string const fullscreen(bool fullscreen) const override {
    /// Context: options menu: setting for whether to show the game in full-screen or windowed mode
    if(fullscreen) {
      return "Op volledig scherm weergeven";
    } else {
      return "In venster weergeven";
    }
  }
  virtual std::string const field_of_view(float fov) const override {
    /// Context: options menu: setting for the current field of view (acts as button to change it)
    std::stringstream ss;
    ss << "Gezichtsveld: " << fov;
    return ss.str();
  }
  virtual std::string const shader_quality() const override {
    /// Context: options menu: graphics setting for the maximum quality (hence lowest performance)
    return "Shader: Kwaliteit";
  }
  virtual std::string const shader_compromise() const override {
    /// Context: options menu: graphics setting for a compromise between quality and performance
    return "Shader: Compromis";
  }
  virtual std::string const shader_performance() const override {
    /// Context: options menu: graphics setting for the maximum performance (hence lowest quality)
    return "Shader: Prestatie";
  }
  virtual std::string const fbo_enabled(bool enabled) const override {
    /// Context: options menu: setting for whether to enable FBO (frame buffer object) rendering mode, FBO is a technical term that probably won't translate
    if(enabled) {
      return "FBO rendering aan";
    } else {
      return "FBO rendering uit";
    }
  }
  virtual std::string const fbo_multisample_enabled(bool enabled) const override {
    /// Context: options menu: setting for whether to enable FBO multisampled rendering, these are technical terms that may not translate
    if(enabled) {
      return "FBO multisampling aan";
    } else {
      return "FBO multisampling uit";
    }
  }
  virtual std::string const vr_enabled(bool enabled) const override {
    /// Context: options menu: setting for whether to enable or disable virtual reality support
    if(enabled) {
      return "Virtual reality aan";
    } else {
      return "Virtual reality uit";
    }
  }
  virtual std::string const input() const override {
    /// Context: options menu: subtitle for the section
    return "Input";
  }
  virtual std::string const mouse_sensitivity(float sensitivity) const override {
    /// Context: options menu: setting for the current mouse movement speed for looking around
    std::stringstream ss;
    ss << "Muisgevoeligheid: " << sensitivity;
    return ss.str();
  }
  virtual std::string const rotation_speed(float speed) const override {
    /// Context: options menu: setting for the current mouse movement speed for looking around
    std::stringstream ss;
    ss << "Draaisnelheid: " << speed;
    return ss.str();
  }
  virtual std::string const turn_sensitivity(float sensitivity) const override {
    /// Context: options menu: setting for the current keyboard sensitivity for ship rotation
    std::stringstream ss;
    ss << "Draaigevoeligheid: " << sensitivity << "%";
    return ss.str();
  }
  virtual std::string const pickup_mode_switch() const override {
    /// Context: options menu: title for setting when to switch to new weapons
    return "Naar nieuwe wapens schakelen";
  }
  virtual std::string const always() const override {
    /// Context: options menu: setting to always switch to new weapons when they're picked up
    return "Altijd";
  }
  virtual std::string const never() const override {
    /// Context: options menu: setting to never switch to new weapons when they're picked up
    return "Nooit";
  }
  virtual std::string const if_not_firing() const override {
    /// Context: options menu: setting to switch to new weapons only if we're not firing at the time
    return "Tenzij je vuurt";
  }
  virtual std::string const follow_cam_enabled(bool enabled) const override {
    /// Context: options menu: option for switching on and off the view that follows the player's ship
    if(enabled) {
      return "Volgcamera aan";
    } else {
      return "Volgcamera uit";
    }
  }
  virtual std::string const follow_cam_mode() const override {
    /// Context: options menu: title for setting to select view mode that follows player's ship
    return "Volgcameramodus";
  }
  virtual std::string const follow_cam_mode_clamp() const override {
    /// Context: options menu: view mode that follows the player's ship
    return "Vast aan schip";
  }
  virtual std::string const follow_cam_mode_lead() const override {
    /// Context: options menu: view mode that follows the player's ship
    return "Voor het schip";
  }
  virtual std::string const follow_cam_mode_lead_smooth() const override {
    /// Context: options menu: view mode that follows the player's ship
    return "Vloeiend voor het schip";
  }
  virtual std::string const smooth_mouse_mode() const override {
    /// Context: options menu: title for setting to select cursor smoothing mode
    return "Afvlakalgoritme muis";
  }
  virtual std::string const smooth_mouse_mode_instant() const override {
    /// Context: options menu: mouse smoothing mode that just moves as the mouse moves, i.e. no smoothing
    return "Afvlakking uit";
  }
  virtual std::string const smooth_mouse_mode_smooth_lerp() const override {
    /// Context: options menu: mouse smoothing mode that interpolates to the mouse position smoothing each axis independently
    return "Interpoleer assen onafhankelijk";
  }
  virtual std::string const smooth_mouse_mode_smooth_bilerp() const override {
    /// Context: options menu: mouse smoothing mode that interpolates to the mouse position smoothing both axes together
    return "Interpoleer assen samen";
  }
  virtual std::string const smooth_mouse_amount(float amount) const override {
    /// Context: options menu: setting for the current mouse smoothing amount
    std::stringstream ss;
    ss << "Muisafvlakking: " << amount;
    return ss.str();
  }
  virtual std::string const training_drag_enable() const override {
    /// Context: options menu: title for setting when to enable the drag that slows down your ship to make it easier for beginners to fly
    return "Afremmen in trainingsmodus";
  }
  virtual std::string const in_first_sphere_only() const override {
    /// Context: options menu: setting for training drag - to enable in first sphere only
    return "Alleen in de eerste bol";
  }
  virtual std::string const keyboard_configuration() const override {
    /// Context: control configuration menu
    return "Toetsenbordinstellingen";
  }
  virtual std::string const controller_configuration() const override {
    /// Context: control configuration menu (for a game controller or joystick, such as a gamepad)
    return "Controllerinstellingen";
  }
  virtual std::string const configure() const override {
    /// Context: control configuration menu, configure the selected controls
    return "Instellen";
  }
  virtual std::string const add_new() const override {
    /// Context: control configuration menu, add a new control profile
    return "Toevoegen";
  }
  virtual std::string const select() const override {
    /// Context: control configuration menu, select an option (such as a control profile)
    return "Selecteren";
  }
  virtual std::string const jettison() const override {
    /// Context: button to drop inventory items
    return "Lozen";
  }
  virtual std::string const delete_option() const override {
    /// Context: control configuration menu, delete a control profile
    return "Verwijderen";
  }
  virtual std::string const unused() const override {
    /// Context: control configuration menu, show an option is not used - this should be emphatic (all caps) or somehow different to ordinary text
    return "ONGEBRUIKT";
  }
  virtual std::string const custom(unsigned int number) const override {
    /// Context: control configuration menu, default name of new custom control profiles, each is numbered from 1 upwards
    std::stringstream ss;
    ss << "AANGEPAST " << number;
    return ss.str();
  }
  virtual std::string const background_flash(bool value) const override {
    if(value) {
      return "Achtergrond flikkeren: aan";
    } else {
      return "Achtergrond flikkeren: uit";
    }
  }
  virtual std::string const weapon_change_announcements_enabled(bool value) const override {
    /// Context: whether to show a visual announcement when the player changes their selected weapon
    if(value) {
      return "Wapens schakelen aankondigen: aan";
    } else {
      return "Wapens schakelen aankondigen: uit";
    }
  }
  virtual std::string const dates_in_highscores_enabled(bool value) const override {
    /// Context: whether to show the date a high score was achieved in the high score screen
    if(value) {
      return "Datums in topscores: tonen";
    } else {
      return "Datums in topscores: verbergen";
    }
  }
  virtual std::string const weapons() const override {
    /// Context: weapon list title
    return "Wapens";
  }
  virtual std::string const upgrades() const override {
    /// Context: upgrade list title
    return "Upgrades";
  }
  virtual std::string const ships_logs() const override {
    /// Context: ships log list
    return "scheepsJOURNAALS";
  }
  virtual std::string const weapon_beamlaser_name() const override {
    /// Context: weapon name
    return "straalLASER";
  }
  // TODO: Please check these are all up to date with those in base.h
  virtual std::string const weapon_beamlaser_description() const override {
    /// Context: weapon description
    return "Vuurt een continue straal van gefocust licht op het doelwit af. Richt relatief weinig schade aan, maar dit wordt gecompenseerd door de mogelijkheid om continu gericht te vuren. Upgraden kan de vuurkracht significant vergroten.";
  }
  virtual std::string const weapon_burst_name() const override {
    /// Context: weapon name
    return "brandstofBOM";
  }
  virtual std::string const weapon_burst_description() const override {
    /// Context: weapon description
    return "Dit laatste redmiddel loost brandstof en ontsteekt het vervolgens, resulterend in een explosie. Dit tweede wapen heeft niet zo'n groot bereik, maar kan gebruikt worden zonder het primaire wapen te hoeven schakelen. Upgraden verhoogt het bereik en de schade.";
  }
  virtual std::string const weapon_enemy_launcher_name() const override {
    /// Context: weapon name
    return "vijandWERPER";
  }
  virtual std::string const weapon_enemy_launcher_description() const override {
    /// Context: weapon description
    return "Werpt vijandige schepen. Als je dit hebt, heb je er waarschijnlijk voor valsgespeeld.";
  }
  virtual std::string const weapon_flakcannon_launcher_name() const override {
    /// Context: weapon name
    return "afweerGESCHUT";
  }
  virtual std::string const weapon_flakcannon_description() const override {
    /// Context: weapon description
    return "Een korteafstandswapen dat een dodelijke wolk scherven in brede spreiding afvuurt. Niet erg precies, wel erg effectief tegen zowel goed bepantserde vijanden als afzonderlijke groepen kleine doelen.";
  }
  virtual std::string const weapon_flamethrower_name() const override {
    /// Context: weapon name
    return "vlammenWERPER";
  }
  virtual std::string const weapon_flamethrower_description() const override {
    /// Context: weapon description
    return "Schiet een brede maar korte stroom van brandstof en oxidator, resulterend in een vuurstraal. De uitzettende brandstof kan doelen zowel afstoten als beschadigen, en de hoeveelheid schade neemt omgekeerd evenredig toe met de afstand.";
  }
  virtual std::string const weapon_gaussrifle_name() const override {
    /// Context: weapon name
    return "gaussGEWEER";
  }
  virtual std::string const weapon_gaussrifle_description() const override {
    /// Context: weapon description
    return "Verzamelt en laadt geioniseerde deeltjes, die in een stroom met hoge snelheid naar het doel worden gelanceerd. De hoge snelheid maakt dit wapen effectief om zowel grote hemellichamen te verbrijzelen als bepantsering te doordringen.";
  }
  virtual std::string const weapon_mine_name() const override {
    /// Context: weapon name
    return "ruimteMIJNEN";
  }
  virtual std::string const weapon_mine_description() const override {
    /// Context: weapon description
    return "Laat stilstaande mijnen achter die exploderen als ze van dichtbij worden benaderd door hemellichamen of wezens met waarnemingsvermogen. Upgraden kan zowel de legsnelheid als de explosieve kracht en het effectieve bereik vergroten.";
  }
  virtual std::string const weapon_powerup_name() const override {
    /// Context: weapon name
    return "powerupWERPER";
  }
  virtual std::string const weapon_powerup_description() const override {
    /// Context: weapon description
    return "Werpt powerups.  Als je dit hebt, heb je er waarschijnlijk voor valsgespeeld.";
  }
  virtual std::string const weapon_pulselaser_name() const override {
    /// Context: weapon name
    return "pulsLASER";
  }
  virtual std::string const weapon_pulselaser_description() const override {
    /// Context: weapon description
    return "Een richtenergiewapen dat korte pulsen van zeer gefocust samenhangend licht afvuurt. Heeft tijd nodig om op te laden tussen schoten, maar biedt een grote hoeveelheid schade met hoge precisie. Upgraden verhoogt zowel de vuursnelheid als het bereik en de schade.";
  }
  virtual std::string const weapon_railgun_name() const override {
    /// Context: weapon name
    return "railGUN";
  }
  virtual std::string const weapon_railgun_description() const override {
    /// Context: weapon description
    return "Een electromagnetisch met hoge snelheid gelanceerd kinetisch inslagwapen. Dit zware projectiel beweegt zich met relativistische snelheden, is zeer accuraat en kan zelfs dikke lagen planetaire materie en vijandspantsers doordringen.";
  }
  virtual std::string const weapon_rocket_name() const override {
    /// Context: weapon name
    return "geleideRAKETTEN";
  }
  virtual std::string const weapon_rocket_description() const override {
    /// Context: weapon description
    return "Vuurt langzame geleide rakketten af die je kunt sturen door je schip te draaien. Deze raketten exploderen bij aanraking. Hoewel ze in het begin langzaam zijn, versnellen ze continu en hebben ze een groot bereik, met de mogelijkheid tot eindbesturing.";
  }
  virtual std::string const weapon_singularitycannon_name() const override {
    return "singulariteitsKANON";
  }
  virtual std::string const weapon_singularitycannon_description() const override {
    return "Vervormt tijd en ruimte zelf om voor korte tijd een kleine kunstmatige singulariteit te maken. Deze singulariteit trekt alle materie in de buurt aan, en vernietigt alles wat ermee in aanraking komt. De singulariteit heeft even nodig om op te warmen voor hij afgevuurd wordt.";
  }
  virtual std::string const weapon_speedspreadgun_name() const override {
    /// Context: weapon name
    return "snelheidsbreedteWAPEN";
  }
  virtual std::string const weapon_speedspreadgun_description() const override {
    /// Context: weapon description
    return "Een automatisch kanon dat een  van granaten met verschillende snelheid afvuurt. Dit wapen is veelzijdig genoeg om als zowel breedtewapen en geconcentreerd wapen te gebruiken, en kan worden geupgraded om de hoeveelheid granaten en het snelheidsbereik te vergroten.";
  }
  virtual std::string const weapon_spreadgun_name() const override {
    /// Context: weapon name
    return "breedteWAPEN";
  }
  virtual std::string const weapon_spreadgun_description() const override {
    /// Context: weapon description
    return "Een automatisch kanon dat een waaier aan granaten met middelmatige snelheid afvuurt, die blijven rondvliegen tot ze wat raken. Je kunt zowel de hoeveelheid granaten per schot als hun snelheid upgraden.";
  }
  virtual std::string const weapon_picked_up(std::string const &name) const override {
    /// Context: announcement of a new weapon being obtained by the player
    std::stringstream ss;
    ss << name << " opgepakt";
    return ss.str();
  }
  virtual std::string const weapon_picked_up(std::string const &name, std::string const &level) const override {
    /// Context: announcement of a new weapon of a specific level being obtained by the player
    /// note: level is passed in as a roman numeral
    std::stringstream ss;
    ss << "Level " << level << " " << name << " opgepakt";
    return ss.str();
  }
  virtual std::string const weapon_upgraded(std::string const &name, std::string const &level) const override {
    /// Context: announcement of a weapon being upgraded to a new level
    /// note: level is passed in as a roman numeral
    std::stringstream ss;
    ss << name << " geupgraded: level " << level;
    return ss.str();
  }
  // TODO: please update:
  virtual std::string const reverse_thruster_picked_up() const override {
    return "retroRAKET opgepakt";
  }
  // TODO:
  /*
  virtual std::string const ships_log_picked_up() const override {
    /// Context: Announcement that the player has picked up a ship's log
    return "shipsLOG added to inventory";
  }
  */
  virtual std::string const carrier_destroyed() const override {
    /// Context: announcement that the enemy boss has been killed
    return "Moederschip vernietigd!";
  }
  virtual std::string const debris_percent_destroyed(int value) const override {
    /// Context: announcement that the player has destroyed a certain percentage of the sphere's asteroids
    std::stringstream ss;
    ss << value << "% vernietigd";
    return ss.str();
  }
  virtual std::string const plus(int value) const override {
    /// Context: anywhere an increment of a number needs to be shown (i.e. score increase)
    std::stringstream ss;
    ss << "+" << value;
    return ss.str();
  }
  virtual std::string const minus(int value) const override {
    /// Context: anywhere an decrement of a number needs to be shown (i.e. score decrease)
    std::stringstream ss;
    ss << "-" << value;
    return ss.str();
  }
  virtual std::string const percent(int value) const override {
    /// Context: anywhere a number needs to be shown as a percentage
    std::stringstream ss;
    ss << value << "%";
    return ss.str();
  }
  virtual std::string const high_scores() const override {
    /// Context: title of the high scores menu
    return "topSCORES";
  }
  virtual std::string const no_high_scores_yet() const override {
    /// Context: content of the high scores menu if nobody has set a high score yet
    return "Nog geen topscore geregistreerd.";
  }
  virtual std::string const new_high_score(int highscore) const override {
    /// Context: announcing a new high score
    std::stringstream ss;
    ss << "Nieuwe topscore: " << highscore;
    return ss.str();
  }
  virtual std::string const new_high_score(int highscore, unsigned int place) const override {
    /// Context: announcing a new high score and what place we're in now on the scoreboard
    std::stringstream ss;
    // use the ordinal function to convert "1" to "1st" etc
    ss << "Nieuwe topscore: " << highscore << ", " << ordinal(place);
    return ss.str();
  }
  virtual std::string const entered_sphere(std::string const new_sphere) const override {
    /// Context: announcement, the name of the sphere we've entered
    std::stringstream ss;
    ss << "Aangekomen bij " << new_sphere;
    return ss.str();
  }
  virtual std::string const now_playing(std::string const music_track) const override {
    /// Context: announcement, the name of the new music track that's now playing
    std::stringstream ss;
    ss << "Je hoort nu: " << music_track;
    return ss.str();
  }
  virtual std::string const switched_weapon_to(std::string const new_weapon_name) const override {
    /// Context: announcement, the name of the new weapon we've switched to
    std::stringstream ss;
    ss << "Omgeschakeld naar " << new_weapon_name;
    return ss.str();
  }
  virtual std::string const switched_weapon_to(std::string const new_weapon_name, std::string const &level) const override {
    /// Context: announcement, the name of the new weapon we've switched to and its level
    /// note: level is passed in as a roman numeral
    std::stringstream ss;
    ss << switched_weapon_to(new_weapon_name) << " van level " << level;
    return ss.str();
  }
  virtual std::string const current_score(int score) const override {
    /// Context: header above the highscores menu button
    std::stringstream ss;
    ss << "Huidige score: " << score;
    return ss.str();
  }
  virtual std::string const bonesphere() const override {
    /// Context: title of the special sphere that contains the player's "bones", where they last died
    return "bottenBOL";
  }
  virtual std::string const sphere_is_clear() const override {
    /// Context: notice that a sphere is completely clear
    return "100% klaar";
  }
  virtual std::string const difficulty(float this_difficulty) const override {
    /// Context: displaying difficulty settings and the difficulty of a sphere as a percentage
    unsigned int const difficulty_percent = static_cast<unsigned int>(this_difficulty * 100.0f);
    std::stringstream ss;
    ss << "Moeilijkheidspercentage: " << difficulty_percent << "%";
    return ss.str();
  }
  virtual std::string const altitude(float this_altitude) const override {
    /// Context: displaying the altitude of a sphere - units are lightyears (ly in English)
    std::stringstream ss;
    ss << "Hoogte: " << std::fixed << std::setprecision(2) << this_altitude << "lj"; // set_precision lets us choose the number of decimal places
    return ss.str();
  }
  virtual std::string const distance_to_target(float this_distance) const override {
    /// Context: displaying the distance between two points - units are lightyears (ly in English)
    std::stringstream ss;
    ss << "Afstand: " << std::fixed << std::setprecision(2) << this_distance << "lj tot doel"; // set_precision lets us choose the number of decimal places
    return ss.str();
  }
  virtual std::string const distance_to_target_and_from_ship(float this_distance_to_target, float this_distance_from_ship) const override {
    /// Context: displaying the distance between two points - units are lightyears (ly in English)
    std::stringstream ss;
    ss << "Afstand: " << std::fixed << std::setprecision(2) << this_distance_from_ship << "lj van schip, " << std::fixed << std::setprecision(2) << this_distance_to_target << " tot doel"; // set_precision lets us choose the number of decimal places
    return ss.str();
  }
  virtual std::string const name_multiple(std::string const &name, unsigned int number) const override {
    /// Context: sphere menu, modifies an existing name to add a multiplier
    std::stringstream ss;
    ss << name << " x" << number;
    return ss.str();
  }
  virtual std::string const name_debris(float mass) const override {
    /// Context: sphere menu, describes a piece of asteroid debris
    std::stringstream ss;
    // convert mass to some more interesting looking value
    unsigned int pretty_mass = static_cast<unsigned int>(mass * 1000.0f);
    // let's pretend that converts to yottagrams ;)  The earth weighs about 5974Yg
    ss << "Puin (massa " << pretty_mass << "Yg)";
    return ss.str();
  }
  virtual std::string const name_portal(std::string const destination) const override {
    /// Context: sphere menu, describes where a portal goes
    std::stringstream ss;
    ss << "Doorgang naar " << destination;
    return ss.str();
  }
  virtual std::string const portals() const override {
    /// Context: sphere menu, title of list of links to view a different sphere
    return "Doorgangen";
  }
  virtual std::string const move_to_sphere(std::string const sphere_name) const override {
    /// Context: sphere menu, link to view a different sphere
    std::stringstream ss;
    ss << "Bekijk \"" << sphere_name << "\"";
    return ss.str();
  }
  virtual std::string const move_to_current_sphere(std::string const sphere_name) const override {
    /// Context: sphere menu, link to view the currently occupied sphere
    std::stringstream ss;
    ss << "Ga terug naar \"" << sphere_name << "\"";
    return ss.str();
  }
  virtual std::string const portal_locked(std::string const sphere_name) const override {
    /// Context: sphere menu, disabled link to view a different sphere
    std::stringstream ss;
    ss << "\"" << sphere_name << "\" vergrendeld";
    return ss.str();
  }
  virtual std::string const name_armour() const override {
    /// Context: sphere menu, player armour
    return "afbraakSCHILD";
  }
  virtual std::string const description_armour() const override {
    /// Context: powerup description
    return "Een geharde mix van rots, puin en metalen, afkomstig van vernietigde asteroiden en hemellichamen, omgevormd tot beschermende pantserplaten. Kan alles behalve de meest krachtige aanvallen weerstaan of terugkaatsen. Dit gaat ten koste van het afbraakSCHILD.";
  }
  virtual std::string const armour_status(unsigned int num_armours, unsigned int max_num_armours) const override {
    /// Context: powerup description
    if(num_armours == 0) {
      return "Schildstatus: uitgeput";
    } else {
      std::stringstream ss;
      if(num_armours == max_num_armours) {
        ss << "Schildstatus: Alle " << max_num_armours << " platen intact";
      } else {
        ss << "Schildstatus: " << num_armours << " / " << max_num_armours << " platen intact";
      }
      return ss.str();
    }
  }
  virtual std::string const armour_picked_up(unsigned int num_armours) const override {
    /// Context: announcement of armour being picked up by the player
    std::stringstream ss;
    ss << num_armours << "x afbraakSCHILD opgepakt";
    return ss.str();
  }
  virtual std::string const name_bullet_base() const override {
    /// Context: sphere menu, generic bullet fired by the player
    return "Projectiel";
  }
  virtual std::string const name_bullet_enemy_base() const override {
    /// Context: sphere menu, generic bullet fired by an enemy
    return of_enemy(name_bullet_base());
  }
  virtual std::string const name_bullet_asteroids() const override {
    std::stringstream ss;
    ss << weapon_spreadgun_name() << "-kogel";
    return ss.str();
  }
  virtual std::string const name_bullet_enemy_asteroids() const override {
    return of_enemy(name_bullet_asteroids());
  }
  virtual std::string const name_bullet_burst() const override {
    return weapon_burst_name();
  }
  virtual std::string const name_bullet_enemy_burst() const override {
    return of_enemy(name_bullet_burst());
  }
  virtual std::string const name_bullet_fireball() const override {
    return "vuurBAL";
  }
  virtual std::string const name_bullet_enemy_fireball() const override {
    return of_enemy(name_bullet_fireball());
  }
  virtual std::string const name_bullet_flak() const override {
    return "Scherf";
  }
  virtual std::string const name_bullet_enemy_flak() const override {
    return of_enemy(name_bullet_flak());
  }
  virtual std::string const name_bullet_gauss() const override {
    std::stringstream ss;
    ss << weapon_gaussrifle_name() << "-stoot";
    return ss.str();
  }
  virtual std::string const name_bullet_enemy_gauss() const override {
    return of_enemy(name_bullet_gauss());
  }
  virtual std::string const name_bullet_laser() const override {
    return "laserSTRAAL";
  }
  virtual std::string const name_bullet_enemy_laser() const override {
    return of_enemy(name_bullet_laser());
  }
  virtual std::string const name_bullet_mine() const override {
    std::stringstream ss;
    ss << weapon_mine_name() << " (veilig)";
    return ss.str();
  }
  virtual std::string const name_bullet_enemy_mine() const override {
    return of_enemy(weapon_mine_name());
  }
  virtual std::string const name_bullet_rail() const override {
    std::stringstream ss;
    ss << weapon_railgun_name() << "-projectiel";
    return ss.str();
  }
  virtual std::string const name_bullet_enemy_rail() const override {
    return of_enemy(name_bullet_rail());
  }
  virtual std::string const name_bullet_rocket() const override {
    return "geleideRAKET";
  }
  virtual std::string const name_bullet_enemy_rocket() const override {
    return of_enemy(name_bullet_rocket());
  }
  virtual std::string const name_bullet_singularity() const override {
    return "Singulariteit";
  }
  virtual std::string const name_bullet_enemy_singularity() const override {
    return of_enemy(name_bullet_singularity());
  }
  virtual std::string const name_ship_base() const override {
    /// Context: sphere menu, generic ship
    return "Schip";
  }
  virtual std::string const name_ship_powerup() const override {
    /// Context: sphere menu, powerup - implying it's an escape capsule
    return "Capsule";
  }
  virtual std::string const name_ship_message_pickup() const override {
    /// Context: sphere menu, ship's log casette containing a plot message
    return "scheepsJOURNAAL";
  }
  virtual std::string const name_ship_reverse_thruster_pickup() const override {
    /// Context: sphere menu, reverse thruster powerup
    return "retroRAKET";
  }
  virtual std::string const description_reverse_thruster() const override {
    /// Context: powerup description
    return "Een extra paar motoren, zo gemonteerd dat ze achteruit vuren. Geeft extra bewegingsvrijheid zonder het schip om te hoeven draaien.";
  }
  virtual std::string const name_enemy_base() const override {
    /// Context: sphere menu, generic enemy
    return "Vijand";
  }
  virtual std::string const name_enemy_carrier(unsigned int health, unsigned int health_max) const override {
    /// Context: sphere menu, enemy boss - parameters are how much health it has left
    if(health == health_max) {
      return "Vijandelijk moederschip";
    } else {
      unsigned int health_percent = static_cast<unsigned int>(static_cast<float>(health) / static_cast<float>(health_max) * 100.0f);
      std::stringstream ss;
      ss << "Vijandelijk moederschip (" << health_percent << "%)";
      return ss.str();
    }
  }
  virtual std::string const name_building_base() const override {
    /// Context: sphere menu, generic building
    return "Structuur";
  }
  virtual std::string const name_hive_base() const override {
    /// Context: sphere menu, generic building
    //return "Hive";
    return "Vijandelijke structuur";
  }
  virtual std::string const name_fragment_base() const override {
    /// Context: sphere menu, ship wreckage
    return "Puin";
  }
  virtual std::string const name_fragment_enemy() const override {
    /// Context: sphere menu, ship wreckage
    return "Vijandelijk wrak";
  }
  virtual std::string const name_fragment_playership() const override {
    /// Context: sphere menu, ship wreckage
    return "Wrak";
  }
  virtual std::string const control_menu() const override {
    /// Context: names of controls players can bind (same for the rest of controls_)
    /// They're used on buttons so it's important to keep them as short as possible
    return "Menu";
  }
  virtual std::string const control_menu_select() const override {
    return "Selecteer";
  }
  virtual std::string const control_pause() const override {
    return "Pauze";
  }
  virtual std::string const control_fullscreen() const override {
    return "Volledig scherm";
  }
  virtual std::string const control_camera_left() const override {
    return "Draai camera links";
  }
  virtual std::string const control_camera_right() const override {
    return "Draai camera rechts";
  }
  virtual std::string const control_camera_up() const override {
    return "Kantel camera omhoog";
  }
  virtual std::string const control_camera_down() const override {
    return "Kantel camera omlaag";
  }
  virtual std::string const control_camera_snap() const override {
    return "Schip volgen met camera";
  }
  virtual std::string const control_camera_snap_enable() const override {
    return "Camera vastmaken aan schip";
  }
  virtual std::string const control_camera_snap_disable() const override {
    return "Camera losmaken";
  }
  virtual std::string const control_player_ship_accelerate() const override {
    return "Versnellen";
  }
  virtual std::string const control_player_ship_decelerate() const override {
    return "Afremmen";
  }
  virtual std::string const control_player_ship_stop() const override {
    return "Stop";
  }
  virtual std::string const control_player_ship_left() const override {
    return "Draai naar links";
  }
  virtual std::string const control_player_ship_right() const override {
    return "Draai naar rechts";
  }
  virtual std::string const control_player_ship_fire() const override {
    return "Vuren (primair)";
  }
  virtual std::string const control_player_ship_secondary_fire() const override {
    return "Vuren (secundair)";
  }
  virtual std::string const control_player_ship_weapon_next() const override {
    return "Volgend wapen";
  }
  virtual std::string const control_player_ship_weapon_prev() const override {
    return "Vorig wapen";
  }
  virtual std::string const control_player_ship_select_weapon(int number) const override {
    std::stringstream ss;
    ss << "Selecteer wapen " << number;
    return ss.str();
  }
  virtual std::string const control_player_ship_self_destruct() const override {
    return "Zelfvernietigen";
  }
  virtual std::string const selected_controller(std::string const &controller_name) const override {
    /// Context: title or prefix when choosing a game controller
    std::stringstream ss;
    ss << "Geselecteerde controller: " << controller_name;
    return ss.str();
  }
  virtual std::string const unbound() const override {
    /// Context: when no keys or buttons are bound to a control
    return "Ongebruikt";
  }
  virtual std::string const disable() const override {
    /// Context: button to deactivate a controller or something else
    return "Uitschakelen";
  }
  virtual std::string const disabled() const override {
    /// Context: when a controller or something else is switched off or unused
    return "Uitgeschakeld";
  }
  virtual std::string const any_key() const override {
    /// Context: keyboard key description, likely all caps, brevity important
    return "WILLEK. TOETS";
  }
  virtual std::string const any_mousebutton() const override {
    /// Context: keyboard key description, likely all caps, brevity important
    return "WILLEK. MUIS";
  }
  virtual std::string const button(int button_number) const override {
    /// Context: joystick button description, likely all caps, brevity important
    std::stringstream ss;
    ss << "Knop " << button_number;
    return ss.str();
  }
  virtual std::string const axis(int axis_number) const override {
    /// Context: joystick axis description, likely all caps, brevity important
    std::stringstream ss;
    ss << "As " << axis_number;
    return ss.str();
  }
  virtual std::string const joystick_inverted() const override {
    /// Context: joystick axis description suffix, likely all caps, brevity important
    return ", omgekeerd";
  }
  virtual std::string const any_button() const override {
    /// Context: joystick button description, likely all caps, brevity important
    return "WILLEK. KNOP";
  }
  virtual std::string const any_joystick() const override {
    /// Context: joystick/controller choice description, likely all caps, brevity important
    return "WILLEK.";
  }
  virtual std::string const press_new_key_or_mousebutton() const override {
    /// Context: binding keyboard controls - prompt the player to press the new key to bind to
    return "Nieuwe toets of muisknop indrukken";
  }
  virtual std::string const press_new_button_or_axis() const override {
    /// Context: binding keyboard controls - prompt the player to press the new controller button or move a controller axis
    return "Nieuwe knop indrukken of nieuwe as bewegen";
  }
  virtual std::string const key_binding_instructions() const override {
    /// Context: binding keyboard controls - instructions to the user
    return "Gebruik primair vuren om in te stellen" "\n"
           "Gebruik secundair vuren om te wissen";
  }
  virtual std::string const statistics() const override {
    /// Context: statistics menu title
    return "Statistieken";
  }
  virtual std::string const stats_deaths(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Gestorven: " << number;
    return ss.str();
  }
  virtual std::string const stats_victories(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Overwinningen: " << number;
    return ss.str();
  }
  virtual std::string const stats_shots_fired(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Schoten gelost: " << number;
    return ss.str();
  }
  virtual std::string const stats_shots_hit(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Treffers: " << number;
    return ss.str();
  }
  virtual std::string const stats_accuracy(unsigned int percent) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Nauwkeurigheid: " << percent << "%";
    return ss.str();
  }
  virtual std::string const stats_worlds_completed(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Bollen gesaneerd: " << number;
    return ss.str();
  }
  virtual std::string const stats_portals_entered(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Doorgangen gebruikt: " << number;
    return ss.str();
  }
  virtual std::string const stats_weapons_collected(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Wapens gevonden: " << number;
    return ss.str();
  }
  virtual std::string const stats_powerups_collected(uint_fast64_t number) const override {
    /// Context: statistics menu content, note - the powerups are hinted to be organic specimens
    std::stringstream ss;
    ss << "Monsters verzameld: " << number;
    return ss.str();
  }
  virtual std::string const stats_powerups_killed(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Monsters vernietigd: " << number;
    return ss.str();
  }
  virtual std::string const stats_upgraded(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Levels geupgrade: " << number;
    return ss.str();
  }
  virtual std::string const stats_enemies_destroyed(uint_fast64_t number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Vijanden vernietigd: " << number;
    return ss.str();
  }
  virtual std::string const stats_mass_destroyed(float number) const override {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Planetaire massa vernietigd: " << std::fixed << std::setprecision(4) << number << "Yg";
    return ss.str();
  }
  virtual std::string const weapon_level(std::string const &level) const override {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Level: " << level;                                                   // input value is a roman numeral
    return ss.str();
  }
  virtual std::string const weapon_firing_rate(float number) const override {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Vuursnelheid: " << std::fixed << std::setprecision(2) << number << " shots/s";
    return ss.str();
  }
  virtual std::string const weapon_firing_rate_continuous() const override {
    /// Context: weapon statistics
    return "Vuursnelheid: continu";
  }
  virtual std::string const weapon_stats_damage(float number) const override {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Energie: " << std::fixed << std::setprecision(3) << number << "PJ";  // unit is petajoules
    return ss.str();
  }
  virtual std::string const weapon_stats_damage_continuous(float number) const override {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Vermogen: " << std::fixed << std::setprecision(3) << number << "PW"; // unit is petawatts
    return ss.str();
  }
  virtual std::string const weapon_number_of_bullets(unsigned int number) const override {
    /// Context: weapon statistics, how many bullets it fires at once
    std::stringstream ss;
    ss << "Wapenpoorten: " << number;
    return ss.str();
  }
  virtual std::string const weapon_bullet_speed(float number) const override {
    /// Context: weapon statistics, how fast the bullets it fires fly
    std::stringstream ss;
    ss << "Projectielsnelheid: " << std::fixed << std::setprecision(3) << number << "c"; // unit is the universal constant c, number is expressed as a fraction of the speed of light
    return ss.str();
  }
  virtual std::string const weapon_bullet_range(float number) const override {
    /// Context: weapon statistics, how far it can shoot
    std::stringstream ss;
    ss << "Effectief bereik: " << std::fixed << std::setprecision(3) << number << "au"; // unit is the astronomical unit, au
    return ss.str();
  }
  virtual std::string const weapon_bullet_range_unlimited() const override {
    /// Context: weapon statistics, how far it can shoot
    return "Effectief bereik: onbeperkt";
  }
  virtual std::string const weapon_stats_switched_from_to(unsigned int number_from, unsigned int number_to) const override {
    /// Context: weapon statistics, how many times the weapon has been selected and deselected by the player
    std::stringstream ss;
    ss << "Omgeschakeld naar / van: " << number_from << "x / " << number_to << "x";
    return ss.str();
  }
  
  virtual std::string const ships_log_scout1_title() const {
    return "SSC Coriolanus Bemanningsrapport";
  }
  virtual std::string const ships_log_scout1_content() const override{
    return "Schip: SSC Coriolanus" "\n"
    "Bemanningslid: Peyton Ateshga, onderhoudstechnicus" "\n"
    "Bestandstype: Persoonlijk dagboek" "\n"
    "\n"
    "Ik probeer een beetje bij te houden wat er allemaal aan het thuisfront gebeurt. Op deze lange verkenningsmissies krijg ik gelukkig nog steeds mijn exemplaar van het Zetronym Wetenschapsjournaal. Volgens mij gaat alles wel zo'n beetje zijn gangetje. Onderzoekers van het Cybria-instituut bestuderen de energiecapaciteit van wormholes. Het schijnt dat een gedeelte van de voorheen toch best stabiele buitenbanden is ingezakt, naar men zegt vanwege 'enkele grote energiefluctutaties'. Gelukkig is er daar weinig wat buitengesloten kan raken, maar ik vind het nog steeds een beetje een eng idee. Ik kan me niet voorstellen hoe het moet zijn om daar vast te zitten... nou ja, voor altijd.";
  }
  virtual std::string const ships_log_scout2_title() const override{
    return "RV Daedalus Bemanningsrapport";
  }
  virtual std::string const ships_log_scout2_content() const override{
    return "Schip: RV Daedalus" "\n"
    "Bemanningslid: Frank Dade" "\n"
    "Bestandstype: Persoonlijk dagboek" "\n"
    "\n"
    "Onderzoeksschip. Onderzoeksschip. Veel onderzoek. Of liever gezegd veel geologie. 35 maanden is het al geleden dat we de aarde achter ons lieten. Nog steeds helemaal niks. Alleen maar verschrikkelijk veel lege ruimte. En rotsen. Ja, het is wel mooi, zeker weten. Maar zo dood. Het is bijna angstaanjagend. Er is gewoon zoveel niets. Zo weinig niets, misschien? Ik bedoel niet eens de enorme afstanden tussen sterren of planeten, maar meer wat er te vinden is... of in dit geval, niet is. Miljoenen lichtjaren van de aarde verwijderd en nog steeds niets. Geen ander leven.";
  }
  virtual std::string const ships_log_contact1_title() const override{
    return "USS Myrmidon Officierslogboek";
  }
  virtual std::string const ships_log_contact1_content() const override{
    return "Schip: USS Myrmidon" "\n"
    "Bemanningslid: Dimitri Rylee, Eerste Officier" "\n"
    "Bestandstype: Officierslogboek" "\n"
    "\n"
    "Onze originele missie is opgeschort vanwege het verdwijnen van een aantal andere verkennings- en onderzoeksschepen, een aantal sectoren verderop. Het sectorcommando heeft ons de opdracht gegeven de verdwijning te onderzoeken, en ons tevens de laatste transmissies gegeven. Helaas heb ik er weinig aan: oude transmissies met weinig informatie. In eerste instantie had het sectorcommando de verdwijning ook niet opgemerkt omdat de transmissies zo laat aankwamen. Geen idee wat we daar kunnen verwachten, zo ver van alle ontwikkelde systemen vandaan, maar voor de zekerheid heb ik mijn communicatieofficier een noodprotocol laten opstellen om alle data aan boord van het schip te versturen als de boord-AI een bedreiging detecteert.";
  }
  virtual std::string const ships_log_contact2_title() const override{
    return "IJN Amaterasu Berichtenlogboek";
  }
  virtual std::string const ships_log_contact2_content() const override{
    return "Schip: IJN Amaretasu" "\n"
    "Bestandstype: Calamiteitsbericht" "\n"
    "Ontvangen van: IJN Kirishima" "\n"
    "Afzender: Kapitein Hikaru Kayden" "\n"
    "\n"
    "Ik wilde even laten weten dat ik de geplande route even laat voor wat het is om te reageren op een vreemd bericht dat we doorkregen. We weten zeker dat de afzender een van ons is, maar het bestand was lastig te lezen. Erg groot ook, we konden maar een deel ontvangen voordat we weer buiten bereik waren. Hopelijk kunnen we de rest van het bericht onderweg ontvangen. Voor zover we kunnen zien is het een soort data dump: een heleboel sensorinformatie, energiesystemen, zuurstof, motorstatus, enzovoort. Tot nu toe niet echt iets bijzonders, maar omdat we niet het hele bericht hebben kunnen we dat lastig met zekerheid zeggen. Wel raar dat de gegevens zomaar verstuurd worden; waaarschijnlijk simpelweg een bug, maar met al de piratenactiviteit hier in de buurt de laatste tijd neem ik liever het zekere voor het onzekere, dus ik ga even kijken. Ik laat 't je weten.";
  }
  virtual std::string const ships_log_contact3_title() const {
    return "IJN Sazanami Berichtenlogboek";
  }
  virtual std::string const ships_log_contact3_content() const {
  return "Schip: IJN Sazanami" "\n"
  "Bestandstype: Calamiteitsbericht" "\n"
  "Ontvangen van: IJN Kirishima" "\n"
  "Afzender: Kaptitein Hikaru Kayden" "\n"
  "\n"
  "Nadat we onze koers hebben verlegd konden we gelukkig een groot deel van het bericht ontvangen. Ziet er niet zo rooskleurig uit: het lijkt erop dat de communicatieofficier een noodprotocol had ingesteld waardoor in noodgevallen alle data van het schip verstuurd zou worden. Wij hebben dus de sensordata van net voor de noodtransmissie opgepikt, en zijn nu aan het onderzoeken of we een aanwijzing kunnen vinden voor wat er met precies gebeurd is. Tot nu toe lijkt het erop dat ze een wrak van een van onze verdwenen onderzoeksschepen aan het onderzoeken waren. Het schip was in slechte staat, maar het vreemde was dat er blijkbaar helemaal geen organisch materiaal aan boord was. Alles wat ook maar koolstof bevatte was foetsie. Voedselvoorraden, brandstof, zelfs de op koolstof gebaseerde plastics aan boord was verdwenen. Het hoeft niet gezegd te worden dat er van de bemanning geen spoor was. Ik denk dat we onze koers gaan verleggen naar het Sectorcommando; deze zaak moet door een paar militaire schepen worden opgepakt.";
  }
  virtual std::string const ships_log_witness1_title() const {
    
 
};

}

#endif // LANGUAGESTORM_LANGUAGE_NL_H_INCLUDED













