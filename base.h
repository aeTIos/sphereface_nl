#ifndef LANGUAGESTORM_LANGUAGE_BASE_H_INCLUDED
#define LANGUAGESTORM_LANGUAGE_BASE_H_INCLUDED

#include <sstream>
#include <iomanip>

namespace languagestorm {

class base {
protected:
  base() = default;
public:
  virtual ~base() = default;

  virtual std::string const ordinal(size_t value) const {
    /// Helper function to return a value with its ordinal suffix for this language, i.e. 1st, 2nd etc
    std::stringstream ss;
    ss << value;
    if(((value % 100) >= 11) && ((value % 100) <= 13)) {
      ss << "th";
    } else {
      switch(value % 10) {
      case 1:
        ss << "st";
        break;
      case 2:
        ss << "nd";
        break;
      case 3:
        ss << "rd";
        break;
      default:
        ss << "th";
        break;
      }
    }
    return ss.str();
  };

  virtual std::string const sphereface() const {
    /// Context: shown at the start of every new game, probably should be kept
    /// the same for most languages
    return "sphereFACE";
  }
  virtual std::string const a_game_by_voxelstorm() const {
    /// Context: shown at the start of every new game, "VoxelStorm" should
    /// probably be kept the same for most languages
    return "A game by VoxelStorm";
  }
  virtual std::string const dead() const {
    /// Context: shown after the player's first death
    return "DEAD";
  }
  virtual std::string const dead_plural(uint_fast64_t deathcount) const {
    /// Context: shown after every death, with a count of deaths so far
    /// i.e: DEAD x36
    std::stringstream ss;
    ss << "DEAD x" << deathcount;
    return ss.str();
  }
  virtual std::string const won() const {
    /// Context: shown when the game is complete
    return "WON";
  }
  virtual std::string const pause() const {
    /// Context: shown circling the player's view when the game is paused
    return "PAUSE";
  }
  virtual std::string const loading() const {
    /// Context: In the title bar of the game when starting windowed, may appear elsewhere
    // Note: the menu options are likely to appear in an all-caps font
    return "Loading...";
  }
  virtual std::string const quit() const {
    /// Context: menu option: exit the game entirely
    return "Quit";
  }
  virtual std::string const save_and_quit() const {
    /// Context: menu option: exit the game entirely
    return "Save and quit";
  }
  virtual std::string const resume() const {
    /// Context: menu option: resume playing
    return "Continue";
  }
  virtual std::string const restart() const {
    /// Context: menu option: end the current game and start a new one
    return "Restart";
  }
  virtual std::string const done() const {
    /// Context: menu option: finished changing options, go back to main menu
    return "Done";
  }
  virtual std::string const back() const {
    /// Context: menu option: don't take any action in this menu, go back to the last
    return "Back";
  }
  virtual std::string const options() const {
    /// Context: menu option: open options / settings menu
    return "Options";
  }
  virtual std::string const language() const {
    /// Context: menu option: language selection menu title
    return "Language";
  }
  virtual std::string const inventory() const {
    /// Context: menu option: open inventory screen
    return "Inventory";
  }
  virtual std::string const sphere() const {
    /// Context: menu option: open info about the current sphere
    return "Sphere";
  }
  virtual std::string const game_log() const {
    /// Context: menu option: open game log screen
    return "Event Log";
  }
  virtual std::string const controls() const {
    /// Context: menu option: open game input control configuration menu
    return "Controls";
  }
  virtual std::string const help() const {
    /// Context: menu option: open the help window
    return "Help";
  }
  virtual std::string const about() const {
    /// Context: menu option: open the about-this-game window
    return "About";
  }
  virtual std::string const update_available() const {
    /// Context: menu option: title that appears when an updated version is available
    return "Update available!";
  }
  virtual std::string const download_latest_version() const {
    /// Context: menu option: button that appears when an updated version is available
    return "Download latest version";
  }
  virtual std::string const unable_to_check_latest_version() const {
    /// Context: menu option: about menu, version information, when the game can't connect to the update server
    return "Unable to check latest version online";
  }
  virtual std::string const version_is_up_to_date() const {
    /// Context: menu option: about menu, version information, when this version is the latest available online
    return "This version is confirmed up to date";
  }
  virtual std::string const version_is_outdated(std::string const &new_version) const {
    /// Context: menu option: about menu, version information - button that can be pressed to open the game download page
    std::stringstream ss;
    ss << "This version is outdated - download " << new_version;
    return ss.str();
  }
  virtual std::string const help_controls() const {
    /// Context: help window: block of help text
    return "BASIC CONTROLS";
  }
  virtual std::string const helptext01() const {
    /// Context: help window: block of help text
    return "Your ship has momentum.  Orient it in the direction you wish to accelerate, and fire your thrusters.";
  }
  virtual std::string const helptext02() const {
    return "To decelerate, turn around and fire your thrusters in the opposite direction.";
  }
  virtual std::string const helptext03() const {
    return "When the camera is unlocked, you can look freely around the sphere.";
  }
  virtual std::string const helptext04() const {
    return "Green things are usually good - collect them." "\n\n"
           "Red things are usually bad - avoid them.";
  }
  virtual std::string const helptext05() const {
    return "White things are neutral, but colliding with them is not generally a good idea.";
  }
  virtual std::string const helptext06() const {
    return "Impacts are usually fatal.  AblativeARMOUR gives some protection, but it is best not to rely on it.";
  }
  virtual std::string const helptext07() const {
    return "Your progress is saved when you exit, but your savegame is deleted if you die.";
  }
  virtual std::string const helptext08() const {
    return "The presence of planetary mass inhibits sphereSPACE transport.  Destroy planetary matter to unlock wormholes.";
  }
  virtual std::string const helptext09() const {
    return "Planetary matter can be fractured and mined.";
  }
  virtual std::string const helptext10() const {
    return "The SphereSPACE has varied regions.  Some directions have more planetary mass than others, some attract more red things than others.";
  }
  virtual std::string const helptext11() const {
    return "Explore the menus - there is advanced information available in the sphere and inventory menus.";
  }
  virtual std::string const helptext12() const {
    return "Visit the controls menu to see the rest of the available controls, and customise them.";
  }
  virtual std::string const helptext13() const {
    return "You can configure and use any controllers, gamepads, joysticks, or VR interfaces, as well as the keyboard and mouse.";
  }
  virtual std::string const helptext14() const {
    return "The graphical theme can be customised.  Theme files can be shared online.";
  }
  virtual std::string const helptext15() const {
    return "There seems to be something deep below the heart of the sphereSPACE wormhole network.";
  }
  virtual std::string const helptext16() const {
    return "It sends ripples through the fabric of sphereSPACE itself.  It is the source.";
  }
  virtual std::string const helptext17() const {
    return "It's what brought you here.";
  }
  virtual std::string const helptext18() const {
    return "You are drawn to it.  You were created to investigate it.";
  }
  virtual std::string const helptext19() const {
    return "You don't know why yet.";
  }
  virtual std::string const abouttext(std::string const &version, std::string const &git_version, std::string const &compileinfo, std::string const &current_year) const {
    /// Context: "about" menu
    std::stringstream ss;
    ss << "sphereFACE" "\n"
          "by" "\n"
          "VoxelStorm" "\n\n" <<
          "Version " << version << "\n" <<
          "Revision " << git_version << "\n\n" <<
          compileinfo << "\n\n" <<
          "© 2014-" << current_year << "\n" <<
          "VoxelStorm.com";
    return ss.str();
  }
  virtual std::string const version(std::string const &version_string) const {
    /// Context: Under the main title
    std::stringstream ss;
    ss << "Version " << version_string;
    return ss.str();
  }
  virtual std::string const aboutlink_devblog() const {
    return "About sphereFACE & dev blog";
  }
  virtual std::string const aboutlink_wiki() const {
    return "sphereFACE wiki";
  }
  virtual std::string const aboutlink_officialsite() const {
    return "Official website";
  }
  virtual std::string const aboutlink_moregames() const {
    return "More VoxelStorm games";
  }
  virtual std::string const aboutlink_review() const {
    return "Write a review on Steam";
  }
  virtual std::string const aboutlink_twitter() const {
    return "Twitter";
  }
  virtual std::string const aboutlink_facebook() const {
    return "Facebook";
  }
  virtual std::string const aboutlink_gplus() const {
    return "Google+";
  }
  virtual std::string const aboutlink_youtube() const {
    return "YouTube";
  }
  virtual std::string const sound() const {
    /// Context: options menu: subtitle for the section
    return "Sound";
  }
  virtual std::string const volume(int volume_percent) const {
    /// Context: options menu: setting for the current sound volume
    std::stringstream ss;
    ss << "Master volume: " << volume_percent << "%";
    return ss.str();
  }
  virtual std::string const music_volume(int volume_percent) const {
    /// Context: options menu: setting for the current music volume
    std::stringstream ss;
    ss << "Music volume: " << volume_percent << "%";
    return ss.str();
  }
  virtual std::string const now_playing() const {
    /// Context: options menu: title above the info showing what music is currently playing
    return "Now Playing";
  }
  virtual std::string const mute_when_paused_enabled(bool enabled) const {
    /// Context: options menu: setting for whether to silence the music and sounds when the player pauses the game
    if(enabled) {
      return "Mute when paused: enabled";
    } else {
      return "Mute when paused: disabled";
    }
  }
  virtual std::string const save_log_to_file_enabled(bool enabled) const {
    /// Context: options menu: setting for whether to save the game log to a file
    if(enabled) {
      return "Save log to file: enabled";
    } else {
      return "Save log to file: disabled";
    }
  }
  virtual std::string const select_audio_device() const {
    /// Context: options menu: sound device selection menu
    return "Select audio output device";
  }
  virtual std::string const currently_selected_audio_device(std::string const &device_name) const {
    /// Context: options menu: what sound device is currently selected
    std::stringstream ss;
    ss << "Selected: " << device_name;
    return ss.str();
  }
  virtual std::string const play_test_sound() const {
    /// Context: options menu: sound device selection menu
    return "Play a test sound";
  }
  virtual std::string const is_default() const {
    /// Context: options menu: sound device selection menu
    return " (default)";
  }
  virtual std::string const graphics() const {
    /// Context: options menu: subtitle for the section
    return "Graphics";
  }
  virtual std::string const fullscreen(bool fullscreen) const {
    /// Context: options menu: setting for whether to show the game in full-screen or windowed mode
    if(fullscreen) {
      return "Display fullscreen";
    } else {
      return "Display in window";
    }
  }
  virtual std::string const field_of_view(float fov) const {
    /// Context: options menu: setting for the current field of view (acts as button to change it)
    std::stringstream ss;
    ss << "Field of view: " << fov;
    return ss.str();
  }
  virtual std::string const shader_quality() const {
    /// Context: options menu: graphics setting for the maximum quality (hence lowest performance)
    return "Shader: Quality";
  }
  virtual std::string const shader_compromise() const {
    /// Context: options menu: graphics setting for a compromise between quality and performance
    return "Shader: Compromise";
  }
  virtual std::string const shader_performance() const {
    /// Context: options menu: graphics setting for the maximum performance (hence lowest quality)
    return "Shader: Performance";
  }
  virtual std::string const vsync_default() const {
    /// Context: options menu: graphics setting for vertical sync (will usually translate as just "vsync")
    return "VSync: System default";
  }
  virtual std::string const vsync_off() const {
    /// Context: options menu: graphics setting for vertical sync (will usually translate as just "vsync")
    return "VSync: Off";
  }
  virtual std::string const vsync_on() const {
    /// Context: options menu: graphics setting for vertical sync (will usually translate as just "vsync")
    return "VSync: On";
  }
  virtual std::string const fbo_enabled(bool enabled) const {
    /// Context: options menu: setting for whether to enable FBO (frame buffer object) rendering mode, FBO is a technical term that probably won't translate
    if(enabled) {
      return "FBO rendering enabled";
    } else {
      return "FBO rendering disabled";
    }
  }
  virtual std::string const fbo_multisample_enabled(bool enabled) const {
    /// Context: options menu: setting for whether to enable FBO multisampled rendering, these are technical terms that may not translate
    if(enabled) {
      return "FBO multisampling enabled";
    } else {
      return "FBO multisampling disabled";
    }
  }
  virtual std::string const vr_enabled(bool enabled) const {
    /// Context: options menu: setting for whether to enable or disable virtual reality support
    if(enabled) {
      return "Virtual reality enabled";
    } else {
      return "Virtual reality disabled";
    }
  }
  virtual std::string const input() const {
    /// Context: options menu: subtitle for the section
    return "Input";
  }
  virtual std::string const mouse_sensitivity(float sensitivity) const {
    /// Context: options menu: setting for the current mouse movement speed for looking around
    std::stringstream ss;
    ss << "Mouse sensitivity: " << sensitivity;
    return ss.str();
  }
  virtual std::string const rotation_speed(float speed) const {
    /// Context: options menu: setting for the current mouse movement speed for looking around
    std::stringstream ss;
    ss << "Rotation speed: " << speed;
    return ss.str();
  }
  virtual std::string const turn_sensitivity(float sensitivity) const {
    /// Context: options menu: setting for the current keyboard sensitivity for ship rotation
    std::stringstream ss;
    ss << "Turn sensitivity: " << sensitivity << "%";
    return ss.str();
  }
  virtual std::string const pickup_mode_switch() const {
    /// Context: options menu: title for setting when to switch to new weapons
    return "Switch to new weapons";
  }
  virtual std::string const always() const {
    /// Context: options menu: setting to always switch to new weapons when they're picked up
    return "Always";
  }
  virtual std::string const never() const {
    /// Context: options menu: setting to never switch to new weapons when they're picked up
    return "Never";
  }
  virtual std::string const if_not_firing() const {
    /// Context: options menu: setting to switch to new weapons only if we're not firing at the time
    return "If not firing";
  }
  virtual std::string const follow_cam_enabled(bool enabled) const {
    /// Context: options menu: option for switching on and off the view that follows the player's ship
    if(enabled) {
      return "Follow-cam enabled";
    } else {
      return "Follow-cam disabled";
    }
  }
  virtual std::string const follow_cam_mode() const {
    /// Context: options menu: title for setting to select view mode that follows player's ship
    return "Follow-cam mode";
  }
  virtual std::string const follow_cam_mode_clamp() const {
    /// Context: options menu: view mode that follows the player's ship
    return "Clamp to ship";
  }
  virtual std::string const follow_cam_mode_lead() const {
    /// Context: options menu: view mode that follows the player's ship
    return "Lead the ship";
  }
  virtual std::string const follow_cam_mode_lead_smooth() const {
    /// Context: options menu: view mode that follows the player's ship
    return "Lead the ship smoothly";
  }
  virtual std::string const smooth_mouse_mode() const {
    /// Context: options menu: title for setting to select cursor smoothing mode
    return "Cursor smoothing algorithm";
  }
  virtual std::string const smooth_mouse_mode_instant() const {
    /// Context: options menu: mouse smoothing mode that just moves as the mouse moves, i.e. no smoothing
    return "Smoothing disabled";
  }
  virtual std::string const smooth_mouse_mode_smooth_lerp() const {
    /// Context: options menu: mouse smoothing mode that interpolates to the mouse position smoothing each axis independently
    return "Interpolate axes independently";
  }
  virtual std::string const smooth_mouse_mode_smooth_bilerp() const {
    /// Context: options menu: mouse smoothing mode that interpolates to the mouse position smoothing both axes together
    return "Interpolate axes together";
  }
  virtual std::string const smooth_mouse_amount(float amount) const {
    /// Context: options menu: setting for the current mouse smoothing amount
    std::stringstream ss;
    ss << "Cursor smoothing: " << amount;
    return ss.str();
  }
  virtual std::string const training_drag_enable() const {
    /// Context: options menu: title for setting when to enable the drag that slows down your ship to make it easier for beginners to fly
    return "Training mode drag";
  }
  virtual std::string const in_first_sphere_only() const {
    /// Context: options menu: setting for training drag - to enable in first sphere only
    return "In first sphere only";
  }
  virtual std::string const keyboard_configuration() const {
    /// Context: control configuration menu
    return "Keyboard configuration";
  }
  virtual std::string const controller_configuration() const {
    /// Context: control configuration menu (for a game controller or joystick, such as a gamepad)
    return "Controller configuration";
  }
  virtual std::string const configure() const {
    /// Context: control configuration menu, configure the selected controls
    return "Configure";
  }
  virtual std::string const add_new() const {
    /// Context: control configuration menu, add a new control profile
    return "Add new";
  }
  virtual std::string const select() const {
    /// Context: control configuration menu, select an option (such as a control profile)
    return "Select";
  }
  virtual std::string const jettison() const {
    /// Context: button to drop inventory items
    return "Jettison";
  }
  virtual std::string const delete_option() const {
    /// Context: control configuration menu, delete a control profile
    return "Delete";
  }
  virtual std::string const unused() const {
    /// Context: control configuration menu, show an option is not used - this should be emphatic (all caps) or somehow different to ordinary text
    return "UNUSED";
  }
  virtual std::string const custom(unsigned int number) const {
    /// Context: control configuration menu, default name of new custom control profiles, each is numbered from 1 upwards
    std::stringstream ss;
    ss << "CUSTOM " << number;
    return ss.str();
  }
  virtual std::string const background_flash(bool value) const {
    /// Context: Whether to enable background flashing as a graphical effect
    if(value) {
      return "Flash background: on";
    } else {
      return "Flash background: off";
    }
  }
  virtual std::string const weapon_change_announcements_enabled(bool value) const {
    /// Context: whether to show a visual announcement when the player changes their selected weapon
    if(value) {
      return "Announce weapon change: on";
    } else {
      return "Announce weapon change: off";
    }
  }
  virtual std::string const dates_in_highscores_enabled(bool value) const {
    /// Context: whether to show the date a high score was achieved in the high score screen
    if(value) {
      return "Dates in high scores: shown";
    } else {
      return "Dates in high scores: hidden";
    }
  }
  virtual std::string const weapons() const {
    /// Context: weapon list title
    return "Weapons";
  }
  virtual std::string const upgrades() const {
    /// Context: upgrade list title
    return "Upgrades";
  }
  virtual std::string const ships_logs() const {
    /// Context: ships log list
    return "shipsLOGS";
  }
  virtual std::string const weapon_beamlaser_name() const {
    /// Context: weapon name
    return "beamLASER";
  }
  virtual std::string const weapon_beamlaser_description() const {
    /// Context: weapon description
    return "A directed-energy weapon firing a continuous beam of coherent light.  Instantaneous damage is relatively low, but continuous concentrated fire is possible.  Upgrading can significantly increase the output power.";
  }
  virtual std::string const weapon_burst_name() const {
    /// Context: weapon name
    return "fuelBURST";
  }
  virtual std::string const weapon_burst_description() const {
    /// Context: weapon description
    return "A last-resort venting of fuel to destroy nearby obstacles.  Effective over a relatively short range, this secondary weapon can be fired without the need to reconfigure the primary weapon.  Upgrading improves range and damage.";
  }
  virtual std::string const weapon_enemy_launcher_name() const {
    /// Context: weapon name
    return "enemyLAUNCHER";
  }
  virtual std::string const weapon_enemy_launcher_description() const {
    /// Context: weapon description
    return "Launches enemy ships.  If you have this, you probably cheated to get it.";
  }
  virtual std::string const weapon_flakcannon_launcher_name() const {
    /// Context: weapon name
    return "flakCANNON";
  }
  virtual std::string const weapon_flakcannon_description() const {
    /// Context: weapon description
    return "A close-combat weapon that fires a deadly cloud of heavy, fast-moving shrapnel in a broad spread.  Not an accurate weapon, but very effective for defeating both well-shielded enemies, or isolated groups of small targets.";
  }
  virtual std::string const weapon_flamethrower_name() const {
    /// Context: weapon name
    return "flameTHROWER";
  }
  virtual std::string const weapon_flamethrower_description() const {
    /// Context: weapon description
    return "Shoots a broad but short-ranged stream of burning hydrazine fuel mixed with oxidant.  The expanding fuel can repel targets as well as damaging them, and the amount of damage increases in inverse proportion to range.";
  }
  virtual std::string const weapon_gaussrifle_name() const {
    /// Context: weapon name
    return "gaussRIFLE";
  }
  virtual std::string const weapon_gaussrifle_description() const {
    /// Context: weapon description
    return "Collects and charges up ionised particles, which are then launched in a high-velocity stream towards the target.  The high velocity makes this weapon effective for shattering large planetary bodies, as well as piercing through shielding.";
  }
  virtual std::string const weapon_mine_name() const {
    /// Context: weapon name
    return "spaceMINES";
  }
  virtual std::string const weapon_mine_description() const {
    /// Context: weapon description
    return "Drops static mines that stay where they are dropped, and explode when approached closely by planetary bodies or sentient beings.  Upgrading can incrase explosive damage and effective range, as well as mine laying repeat rate.";
  }
  virtual std::string const weapon_powerup_name() const {
    /// Context: weapon name
    return "powerupLAUNCHER";
  }
  virtual std::string const weapon_powerup_description() const {
    /// Context: weapon description
    return "Fires powerups.  If you have this, you probably cheated to get it.";
  }
  virtual std::string const weapon_pulselaser_name() const {
    /// Context: weapon name
    return "pulseLASER";
  }
  virtual std::string const weapon_pulselaser_description() const {
    /// Context: weapon description
    return "A directed-energy weapon firing short pulses of highly focused coherent light.  Requires time to recharge between shots, but allows for a great deal of damage at high precision.  Upgrading increases fire rate as well as range and damage.";
  }
  virtual std::string const weapon_railgun_name() const {
    /// Context: weapon name
    return "railGUN";
  }
  virtual std::string const weapon_railgun_description() const {
    /// Context: weapon description
    return "A high-velocity electromagnetically launched kinetic impact weapon.  Travelling at relativistic speeds, the heavy projectile is highly accurate and capable of penetrating through even thick layers of planetary matter and enemy shielding.";
  }
  virtual std::string const weapon_rocket_name() const {
    /// Context: weapon name
    return "guidedROCKETS";
  }
  virtual std::string const weapon_rocket_description() const {
    /// Context: weapon description
    return "Fires slow guided rockets that you can steer by turning your ship.  These explode on impact.  Although initially slow, the rockets accelerate continuously and have a long range, with the possibility of terminal guidance.";
  }
  virtual std::string const weapon_singularitycannon_name() const {
    return "singularityCANNON";
  }
  virtual std::string const weapon_singularitycannon_description() const {
    return "Warps the fabric of space-time itself to create a short-lived artificial singularity, which attracts all matter in its vicinity, and consumes anything it touches.  It takes some time to spin up the singularity prior to launch.";
  }
  virtual std::string const weapon_speedspreadgun_name() const {
    /// Context: weapon name
    return "speedspreadGUN";
  }
  virtual std::string const weapon_speedspreadgun_description() const {
    /// Context: weapon description
    return "A repeating cannon firing a burst of spread-velocity shells.  This weapon is versatile enough to be used both as a spread weapon and a concentrated fire weapon, and it can be upgraded to increase the number of shells and their velocity range.";
  }
  virtual std::string const weapon_spreadgun_name() const {
    /// Context: weapon name
    return "spreadGUN";
  }
  virtual std::string const weapon_spreadgun_description() const {
    /// Context: weapon description
    return "A repeating cannon firing a broad spread of medium-velocity shells, which continue in flight indefinitely until they hit something.  It is possible to upgrade both the number of shells launched per shot, and their outward spin.";
  }
  virtual std::string const weapon_picked_up(std::string const &name) const {
    /// Context: announcement of a new weapon being obtained by the player
    std::stringstream ss;
    ss << "Got " << name;
    return ss.str();
  }
  virtual std::string const weapon_picked_up(std::string const &name, std::string const &level) const {
    /// Context: announcement of a new weapon of a specific level being obtained by the player
    /// note: level is passed in as a roman numeral
    std::stringstream ss;
    ss << "Got level " << level << " " << name;
    return ss.str();
  }
  virtual std::string const weapon_upgraded(std::string const &name, std::string const &level) const {
    /// Context: announcement of a weapon being upgraded to a new level
    /// note: level is passed in as a roman numeral
    std::stringstream ss;
    ss << name << " upgraded: level " << level;
    return ss.str();
  }
  virtual std::string const reverse_thruster_picked_up() const {
    return "Got reverseTHRUSTER";
  }
  virtual std::string const ships_log_picked_up() const {
    /// Context: Announcement that the player has picked up a ship's log
    return "shipsLOG added to inventory";
  }
  virtual std::string const carrier_destroyed() const {
    /// Context: announcement that the enemy boss has been killed
    return "Carrier destroyed!";
  }
  virtual std::string const debris_percent_destroyed(int value) const {
    /// Context: announcement that the player has destroyed a certain percentage of the sphere's asteroids
    std::stringstream ss;
    ss << value << "% destroyed";
    return ss.str();
  }
  virtual std::string const plus(int value) const {
    /// Context: anywhere an increment of a number needs to be shown (i.e. score increase)
    std::stringstream ss;
    ss << "+" << value;
    return ss.str();
  }
  virtual std::string const minus(int value) const {
    /// Context: anywhere an decrement of a number needs to be shown (i.e. score decrease)
    std::stringstream ss;
    ss << "-" << value;
    return ss.str();
  }
  virtual std::string const percent(int value) const {
    /// Context: anywhere a number needs to be shown as a percentage
    std::stringstream ss;
    ss << value << "%";
    return ss.str();
  }
  virtual std::string const high_scores() const {
    /// Context: title of the high scores menu
    return "highSCORES";
  }
  virtual std::string const no_high_scores_yet() const {
    /// Context: content of the high scores menu if nobody has set a high score yet
    return "No high score set yet.";
  }
  virtual std::string const new_high_score(int highscore) const {
    /// Context: announcing a new high score
    std::stringstream ss;
    ss << "New high score: " << highscore;
    return ss.str();
  }
  virtual std::string const new_high_score(int highscore, unsigned int place) const {
    /// Context: announcing a new high score and what place we're in now on the scoreboard
    std::stringstream ss;
    // use the ordinal function to convert "1" to "1st" etc
    ss << "New high score: " << highscore << ", " << ordinal(place);
    return ss.str();
  }
  virtual std::string const entered_sphere(std::string const new_sphere) const {
    /// Context: announcement, the name of the sphere we've entered
    std::stringstream ss;
    ss << "Arrived at " << new_sphere;
    return ss.str();
  }
  virtual std::string const cleared_sphere(std::string const new_sphere) const {
    /// Context: announcement, the name of the sphere we've entered
    std::stringstream ss;
    ss << "Cleared " << new_sphere;
    return ss.str();
  }
  virtual std::string const now_playing_track(std::string const music_track) const {
    /// Context: announcement, the name of the new music track that's now playing
    std::stringstream ss;
    ss << "Now playing: " << music_track;
    return ss.str();
  }
  virtual std::string const switched_weapon_to(std::string const new_weapon_name) const {
    /// Context: announcement, the name of the new weapon we've switched to
    std::stringstream ss;
    ss << "Switched to " << new_weapon_name;
    return ss.str();
  }
  virtual std::string const switched_weapon_to(std::string const new_weapon_name, std::string const &level) const {
    /// Context: announcement, the name of the new weapon we've switched to and its level
    /// note: level is passed in as a roman numeral
    std::stringstream ss;
    ss << "Switched to level " << level << " " << new_weapon_name;
    return ss.str();
  }
  virtual std::string const current_score(int score) const {
    /// Context: header above the highscores menu button
    std::stringstream ss;
    ss << "Current score: " << score;
    return ss.str();
  }
  virtual std::string const bonesphere() const {
    /// Context: title of the special sphere that contains the player's "bones", where they last died
    return "boneSPHERE";
  }
  virtual std::string const sphere_is_clear() const {
    /// Context: notice that a sphere is completely clear
    return "100% clear";
  }
  virtual std::string const difficulty(float this_difficulty) const {
    /// Context: displaying difficulty settings and the difficulty of a sphere as a percentage
    unsigned int const difficulty_percent = static_cast<unsigned int>(this_difficulty * 100.0f);
    std::stringstream ss;
    ss << "Difficulty: " << difficulty_percent << "%";
    return ss.str();
  }
  virtual std::string const altitude(float this_altitude) const {
    /// Context: displaying the altitude of a sphere - units are lightyears (ly in English)
    std::stringstream ss;
    ss << "Altitude: " << std::fixed << std::setprecision(2) << this_altitude << "ly"; // set_precision lets us choose the number of decimal places
    return ss.str();
  }
  virtual std::string const distance_to_target(float this_distance) const {
    /// Context: displaying the distance between two points - units are lightyears (ly in English)
    std::stringstream ss;
    ss << "Distance: " << std::fixed << std::setprecision(2) << this_distance << "ly to target"; // set_precision lets us choose the number of decimal places
    return ss.str();
  }
  virtual std::string const distance_to_target_and_from_ship(float this_distance_to_target, float this_distance_from_ship) const {
    /// Context: displaying the distance between two points - units are lightyears (ly in English)
    std::stringstream ss;
    ss << "Distance: " << std::fixed << std::setprecision(2) << this_distance_from_ship << "ly from ship, " << std::fixed << std::setprecision(2) << this_distance_to_target << " to target"; // set_precision lets us choose the number of decimal places
    return ss.str();
  }
  virtual std::string const name_multiple(std::string const &name, unsigned int number) const {
    /// Context: sphere menu, modifies an existing name to add a multiplier
    std::stringstream ss;
    ss << name << " x" << number;
    return ss.str();
  }
  virtual std::string const name_debris(float mass) const {
    /// Context: sphere menu, describes a piece of asteroid debris
    std::stringstream ss;
    // convert mass to some more interesting looking value
    unsigned int pretty_mass = static_cast<unsigned int>(mass * 1000.0f);
    // let's pretend that converts to yottagrams ;)  The earth weighs about 5974Yg
    ss << "Debris (mass " << pretty_mass << "Yg)";
    return ss.str();
  }
  virtual std::string const name_portal(std::string const destination) const {
    /// Context: sphere menu, describes where a portal goes
    std::stringstream ss;
    ss << "Portal to " << destination;
    return ss.str();
  }
  virtual std::string const portals() const {
    /// Context: sphere menu, title of list of links to view a different sphere
    return "Portals";
  }
  virtual std::string const move_to_sphere(std::string const sphere_name) const {
    /// Context: sphere menu, link to view a different sphere
    std::stringstream ss;
    ss << "View \"" << sphere_name << "\"";
    return ss.str();
  }
  virtual std::string const move_to_current_sphere(std::string const sphere_name) const {
    /// Context: sphere menu, link to view the currently occupied sphere
    std::stringstream ss;
    ss << "Return to \"" << sphere_name << "\"";
    return ss.str();
  }
  virtual std::string const portal_locked(std::string const sphere_name) const {
    /// Context: sphere menu, disabled link to view a different sphere
    std::stringstream ss;
    ss << "\"" << sphere_name << "\" locked";
    return ss.str();
  }
  virtual std::string const name_armour() const {
    /// Context: sphere menu, player armour
    return "ablativeARMOUR";
  }
  virtual std::string const description_armour() const {
    /// Context: powerup description
    return "A hardened aggregate of ice and rock, harvested from destroyed asteroids and planetary bodies, and formed into a segmented protective shell.  Capable of absorbing or deflecting all but the most powerful impacts, the ablativeARMOUR is sacrificed in the process.";
  }
  virtual std::string const armour_status(unsigned int num_armours, unsigned int max_num_armours) const {
    /// Context: powerup description
    if(num_armours == 0) {
      return "Armour status: Depleted";
    } else {
      std::stringstream ss;
      if(num_armours == max_num_armours) {
        ss << "Armour status: All " << max_num_armours << " plates intact";
      } else {
        ss << "Armour status: " << num_armours << " / " << max_num_armours << " plates intact";
      }
      return ss.str();
    }
  }
  virtual std::string const armour_picked_up(unsigned int num_armours) const {
    /// Context: announcement of armour being picked up by the player
    std::stringstream ss;
    ss << "Got " << num_armours << "x ablativeARMOUR";
    return ss.str();
  }
  virtual std::string const name_bullet_base() const {
    /// Context: sphere menu, generic bullet fired by the player
    return "Projectile";
  }
  virtual std::string const name_bullet_enemy_base() const {
    /// Context: sphere menu, generic bullet fired by an enemy
    return "Enemy projectile";
  }
  virtual std::string const name_bullet_asteroids() const {
    return "spreadGUN bullet";
  }
  virtual std::string const name_bullet_enemy_asteroids() const {
    return "Enemy spreadGUN bullet";
  }
  virtual std::string const name_bullet_burst() const {
    return "fuelBURST";
  }
  virtual std::string const name_bullet_enemy_burst() const {
    return "Enemy fuelBURST";
  }
  virtual std::string const name_bullet_fireball() const {
    return "fireBALL";
  }
  virtual std::string const name_bullet_enemy_fireball() const {
    return "Enemy fireBALL";
  }
  virtual std::string const name_bullet_flak() const {
    return "Flak";
  }
  virtual std::string const name_bullet_enemy_flak() const {
    return "Enemy flak";
  }
  virtual std::string const name_bullet_gauss() const {
    return "gaussRIFLE blast";
  }
  virtual std::string const name_bullet_enemy_gauss() const {
    return "Enemy gaussRIFLE blast";
  }
  virtual std::string const name_bullet_laser() const {
    return "laserBEAM";
  }
  virtual std::string const name_bullet_enemy_laser() const {
    return "Enemy laserBEAM";
  }
  virtual std::string const name_bullet_mine() const {
    return "spaceMINE (safe)";
  }
  virtual std::string const name_bullet_enemy_mine() const {
    return "Enemy spaceMINE";
  }
  virtual std::string const name_bullet_rail() const {
    return "railGUN projectile";
  }
  virtual std::string const name_bullet_enemy_rail() const {
    return "Enemy railGUN projectile";
  }
  virtual std::string const name_bullet_rocket() const {
    return "guidedROCKET";
  }
  virtual std::string const name_bullet_enemy_rocket() const {
    return "Enemy guidedROCKET";
  }
  virtual std::string const name_bullet_singularity() const {
    return "Singularity";
  }
  virtual std::string const name_bullet_enemy_singularity() const {
    return "Enemy singularity";
  }
  virtual std::string const name_ship_base() const {
    /// Context: sphere menu, generic ship
    return "Ship";
  }
  virtual std::string const name_ship_powerup() const {
    /// Context: sphere menu, powerup - implying it's an escape capsule
    return "Capsule";
  }
  virtual std::string const name_ship_message_pickup() const {
    /// Context: sphere menu, ship's log casette containing a plot message
    return "shipsLOG";
  }
  virtual std::string const name_ship_reverse_thruster_pickup() const {
    /// Context: sphere menu, reverse thruster powerup
    return "reverseTHRUSTER";
  }
  virtual std::string const description_reverse_thruster() const {
    /// Context: powerup description
    return "An extra pair of maneuvering thrusters, mounted to fire in reverse, allowing for additional maneuverability without having to re-orient the ship.";
  }
  virtual std::string const name_enemy_base() const {
    /// Context: sphere menu, generic enemy
    return "Enemy";
  }
  virtual std::string const name_enemy_carrier(unsigned int health, unsigned int health_max) const {
    /// Context: sphere menu, enemy boss - parameters are how much health it has left
    if(health == health_max) {
      return "Enemy Carrier";
    } else {
      unsigned int health_percent = static_cast<unsigned int>(static_cast<float>(health) / static_cast<float>(health_max) * 100.0f);
      std::stringstream ss;
      ss << "Enemy Carrier (" << health_percent << "%)";
      return ss.str();
    }
  }
  virtual std::string const name_building_base() const {
    /// Context: sphere menu, generic building
    return "Structure";
  }
  virtual std::string const name_hive_base() const {
    /// Context: sphere menu, generic building
    //return "Hive";
    return "Enemy Structure";
  }
  virtual std::string const name_fragment_base() const {
    /// Context: sphere menu, ship wreckage
    return "Fragments";
  }
  virtual std::string const name_fragment_enemy() const {
    /// Context: sphere menu, ship wreckage
    return "Enemy wreckage";
  }
  virtual std::string const name_fragment_playership() const {
    /// Context: sphere menu, ship wreckage
    return "Wreckage";
  }
  virtual std::string const control_menu() const {
    /// Context: names of controls players can bind (same for the rest of controls_)
    /// They're used on buttons so it's important to keep them as short as possible
    return "Menu";
  }
  virtual std::string const control_menu_select() const {
    return "Select";
  }
  virtual std::string const control_pause() const {
    return "Pause";
  }
  virtual std::string const control_fullscreen() const {
    return "Fullscreen";
  }
  virtual std::string const control_camera_left() const {
    return "Turn camera left";
  }
  virtual std::string const control_camera_right() const {
    return "Turn camera right";
  }
  virtual std::string const control_camera_up() const {
    return "Tilt camera up";
  }
  virtual std::string const control_camera_down() const {
    return "Tilt camera down";
  }
  virtual std::string const control_camera_snap() const {
    return "Snap camera to ship";
  }
  virtual std::string const control_camera_snap_enable() const {
    return "Lock camera to ship";
  }
  virtual std::string const control_camera_snap_disable() const {
    return "Unlock camera";
  }
  virtual std::string const control_player_ship_accelerate() const {
    return "Accelerate";
  }
  virtual std::string const control_player_ship_decelerate() const {
    return "Decelerate";
  }
  virtual std::string const control_player_ship_stop() const {
    return "Stop";
  }
  virtual std::string const control_player_ship_left() const {
    return "Turn left";
  }
  virtual std::string const control_player_ship_right() const {
    return "Turn right";
  }
  virtual std::string const control_player_ship_fire() const {
    return "Fire";
  }
  virtual std::string const control_player_ship_secondary_fire() const {
    return "Secondary fire";
  }
  virtual std::string const control_player_ship_weapon_next() const {
    return "Next weapon";
  }
  virtual std::string const control_player_ship_weapon_prev() const {
    return "Previous weapon";
  }
  virtual std::string const control_player_ship_select_weapon(int number) const {
    std::stringstream ss;
    ss << "Select weapon " << number;
    return ss.str();
  }
  virtual std::string const control_player_ship_self_destruct() const {
    return "Self-destruct";
  }
  virtual std::string const selected_controller(std::string const &controller_name) const {
    /// Context: title or prefix when choosing a game controller
    std::stringstream ss;
    ss << "Selected controller: " << controller_name;
    return ss.str();
  }
  virtual std::string const unbound() const {
    /// Context: when no keys or buttons are bound to a control
    return "Not bound";
  }
  virtual std::string const disable() const {
    /// Context: button to deactivate a controller or something else
    return "Disable";
  }
  virtual std::string const disabled() const {
    /// Context: when a controller or something else is switched off or unused
    return "Disabled";
  }
  virtual std::string const any_key() const {
    /// Context: keyboard key description, likely all caps, brevity important
    return "ANY KEY";
  }
  virtual std::string const any_mousebutton() const {
    /// Context: keyboard key description, likely all caps, brevity important
    return "ANY MOUSE";
  }
  virtual std::string const button(int button_number) const {
    /// Context: joystick button description, likely all caps, brevity important
    std::stringstream ss;
    ss << "Button " << button_number;
    return ss.str();
  }
  virtual std::string const axis(int axis_number) const {
    /// Context: joystick axis description, likely all caps, brevity important
    std::stringstream ss;
    ss << "Axis " << axis_number;
    return ss.str();
  }
  virtual std::string const joystick_inverted() const {
    /// Context: joystick axis description suffix, likely all caps, brevity important
    return ", inverted";
  }
  virtual std::string const any_button() const {
    /// Context: joystick button description, likely all caps, brevity important
    return "ANY BUTTON";
  }
  virtual std::string const any_joystick() const {
    /// Context: joystick/controller choice description, likely all caps, brevity important
    return "ANY";
  }
  virtual std::string const press_new_key_or_mousebutton() const {
    /// Context: binding keyboard controls - prompt the player to press the new key to bind to
    return "Press new key or button";
  }
  virtual std::string const press_new_button_or_axis() const {
    /// Context: binding keyboard controls - prompt the player to press the new controller button or move a controller axis
    return "Press new button or move new axis";
  }
  virtual std::string const key_binding_instructions() const {
    /// Context: binding keyboard controls - instructions to the user
    return "Press primary fire to bind a control" "\n"
           "Press secondary fire to clear";
  }
  virtual std::string const statistics() const {
    /// Context: statistics menu title
    return "Statistics";
  }
  virtual std::string const stats_deaths(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Deaths: " << number;
    return ss.str();
  }
  virtual std::string const stats_victories(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Victories: " << number;
    return ss.str();
  }
  virtual std::string const stats_shots_fired(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Shots fired: " << number;
    return ss.str();
  }
  virtual std::string const stats_shots_hit(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Shots hit: " << number;
    return ss.str();
  }
  virtual std::string const stats_accuracy(unsigned int percent) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Accuracy: " << percent << "%";
    return ss.str();
  }
  virtual std::string const stats_worlds_completed(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Systems sanitised: " << number;
    return ss.str();
  }
  virtual std::string const stats_portals_entered(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Hyperjumps: " << number;
    return ss.str();
  }
  virtual std::string const stats_weapons_collected(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Weapons discovered: " << number;
    return ss.str();
  }
  virtual std::string const stats_powerups_collected(uint_fast64_t number) const {
    /// Context: statistics menu content, note - the powerups are hinted to be organic specimens
    std::stringstream ss;
    ss << "Specimens assimilated: " << number;
    return ss.str();
  }
  virtual std::string const stats_powerups_killed(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Specimens destroyed: " << number;
    return ss.str();
  }
  virtual std::string const stats_upgraded(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Levels upgraded: " << number;
    return ss.str();
  }
  virtual std::string const stats_enemies_destroyed(uint_fast64_t number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Enemies destroyed: " << number;
    return ss.str();
  }
  virtual std::string const stats_mass_destroyed(float number) const {
    /// Context: statistics menu content
    std::stringstream ss;
    ss << "Planetary mass destroyed: " << std::fixed << std::setprecision(4) << number << "Yg";
    return ss.str();
  }
  virtual std::string const weapon_level(std::string const &level) const {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Level: " << level;                                                   // input value is a roman numeral
    return ss.str();
  }
  virtual std::string const weapon_firing_rate(float number) const {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Firing rate: " << std::fixed << std::setprecision(2) << number << " shots/s";
    return ss.str();
  }
  virtual std::string const weapon_firing_rate_continuous() const {
    /// Context: weapon statistics
    return "Firing rate: Continuous";
  }
  virtual std::string const weapon_stats_damage(float number) const {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Energy: " << std::fixed << std::setprecision(3) << number << "PJ";   // unit is petajoules
    return ss.str();
  }
  virtual std::string const weapon_stats_damage_continuous(float number) const {
    /// Context: weapon statistics
    std::stringstream ss;
    ss << "Power: " << std::fixed << std::setprecision(3) << number << "PW";    // unit is petawatts
    return ss.str();
  }
  virtual std::string const weapon_number_of_bullets(unsigned int number) const {
    /// Context: weapon statistics, how many bullets it fires at once
    std::stringstream ss;
    ss << "Weapon ports: " << number;
    return ss.str();
  }
  virtual std::string const weapon_bullet_speed(float number) const {
    /// Context: weapon statistics, how fast the bullets it fires fly
    std::stringstream ss;
    ss << "Projectile speed: " << std::fixed << std::setprecision(3) << number << "c"; // unit is the universal constant c, number is expressed as a fraction of the speed of light
    return ss.str();
  }
  virtual std::string const weapon_bullet_range(float number) const {
    /// Context: weapon statistics, how far it can shoot
    std::stringstream ss;
    ss << "Effective range: " << std::fixed << std::setprecision(3) << number << "au"; // unit is the astronomical unit, au
    return ss.str();
  }
  virtual std::string const weapon_bullet_range_unlimited() const {
    /// Context: weapon statistics, how far it can shoot
    return "Effective range: Unlimited";
  }
  virtual std::string const weapon_stats_switched_from_to(unsigned int number_from, unsigned int number_to) const {
    /// Context: weapon statistics, how many times the weapon has been selected and deselected by the player
    std::stringstream ss;
    ss << "Switched to / from: " << number_from << "x / " << number_to << "x";
    return ss.str();
  }

  virtual std::string const ships_log_scout1_title() const {
    return "SSC Coriolanus Crew Journal";
  }
  virtual std::string const ships_log_scout1_content() const {
    return "Vessel: SSC Coriolanus" "\n"
    "Crew Member: Maintenance Technician Peyton Ateshga" "\n"
    "File type: Personal journal" "\n"
    "\n"
    "I've been trying to keep up with what's going on back home. On these long range recon missions I'm still getting my Zetronym Science Edition newsletter. Typical stuff. Cybria scientists are studying wormhole energy capacity. Apparently some large energy fluctuations have caused a few of the outer stabilized bands to collapse. Nothing out there really to cut off, but still kind of scary in a way. Can't imagine what it would be like to be stuck out here... well, forever.";
  }
  virtual std::string const ships_log_scout2_title() const {
    return "RV Daedalus Crew Journal";
  }
  virtual std::string const ships_log_scout2_content() const {
    return "Vessel: RV Daedalus" "\n"
    "Crew Member: Frank Dade" "\n"
    "File type: Personal journal" "\n"
    "\n"
    "Science vessel. Science vessel. Lots of science. Lots of geology more like. We've been away from Earth for 35 months now. Still nothing. Just lots and lots of empty space and rock. Its pretty out here sure, but so lifeless. It's terrifying in a way. There's just so much nothing. So little nothing, really.  I'm not even talking about the distance between stars or planets, but what's on them... or isn't, in this case. Millions of light years from Earth and still nothing. No other life.";
  }
  virtual std::string const ships_log_contact1_title() const {
    return "USS Myrmidon Officer's Log";
  }
  virtual std::string const ships_log_contact1_content() const {
    return "Vessel: USS Myrmidon" "\n"
    "Crew Member: First Officer Dimitri Rylee" "\n"
    "File type: First Officer's log" "\n"
    "\n"
    "We've been redirected from our original mission to investigate the disappearance of some other explorers and science vessels a few sectors over. Sector command sent us the last received transmissions from said vessels, try and help narrow the search, but there's not much in them. Older transmissions for the most part too. Apparently their tardiness is what tipped off sector command to their disappearance in the first place. Not sure what we expect to find this far from the developed systems, but I've had my communications officer write an emergency protocol to dump the ship's data and transmit if the onboard AI detects a threat.";
  }
  virtual std::string const ships_log_contact2_title() const {
    return "IJN Amaterasu Message Log";
  }
  virtual std::string const ships_log_contact2_content() const {
    return "Vessel: IJN Amaterasu" "\n"
    "File type: Emergency Communique" "\n"
    "Received from: IJN Kirishima" "\n"
    "Sender: Captain Hikaru Kayden" "\n"
    "\n"
    "Just letting you guys know I'm diverting from my planned route in sector seven to respond to a strange transmission we received. It's definitely from one of ours, but it's not a formatted message. Huge transmission, we were only able to recover part of it before we passed out of range, maybe we can pick up the rest en route. From what we've looked at so far it's some sort of data dump. Bunch of routine ship information, power systems, life support readings, etc. Nothing out of the ordinary so far, though it's kind of hard to tell with the partial data; not sure why a ship would transmit this stuff, probably just a bug, but with all the pirate activity out here lately I thought it prudent to check it out. Keep you updated.";
  }
  virtual std::string const ships_log_contact3_title() const {
    return "IJN Sazanami Message Log";
  }
  virtual std::string const ships_log_contact3_content() const {
    return "Vessel: IJN Sazanami" "\n"
    "File type: Emergency Communique" "\n"
    "Received from: IJN Kirishima" "\n"
    "Sender: Captain Hikaru Kayden" "\n"
    "\n"
    "We did manage to pick up the rest of that transmission once we diverted course back towards the source, and it doesn't look good. The part we caught was the ship data from immediately before whatever event caused the vessel to transmit the data dump. Looks like the comms officer set up the ship to dump and transmit in case of emergency. We've been looking through the sensor data and camera feeds to find out what might have happened to the ship, and so far we've determined that they were investigating the wreck of one of our missing science vessels. The science vessel seemed to be in bad shape, but the interesting part is the apparent absence of all organic matter. Everything carbon based was completely stripped from the ship. Residual matter from the life support systems, medical salves, even the carbon based polymers were pulled off the ship. Needless to say there was no sign of the crew. I think we're gonna divert back to sector command; recommend sending some military vessels out to deal with this.";
  }
  virtual std::string const ships_log_witness1_title() const {
    return "USS Hermes Captain's Log";
  }
  virtual std::string const ships_log_witness1_content() const {
    return "Vessel: USS Hermes" "\n"
    "Crew Member: Captain Tracer Harvey" "\n"
    "File type: Captain's log" "\n"
    "\n"
    "Not sure how to put this exactly, but I believe we have just made contact with a non-human lifeform in deep space. At least, it moved under its own power, and definitely reacted to our presence... violently, I might add. Just on our routine patrols when whatever it was swung around the other side of a nearby asteroid. The object seemed to have some sort of directed energy weapons, or tools. It was probing the asteroid when we first saw it, but it turned its attention on us almost immediately. After a few near misses from its weapons we got out of there. Headed back to sector command now to report the incident.";
  }
  virtual std::string const ships_log_rumours1_title() const {
    return "PB Menenius Captain's Log";
  }
  virtual std::string const ships_log_rumours1_content() const {
    return "Vessel: PB Menenius" "\n"
    "Crew Member: Captain Nikopol Reika" "\n"
    "File type: Captain's log" "\n"
    "\n"
    "All this talk going around about sector command gathering a fleet to investigate rumours of non-human life. Don't know about any of that. They still have me on patrol, keeping an eye out for pirates. A lot of activity in this area recently, ships being found blasted to bits all over the sector. Ask me, probably some wannabe big time space corsair trying to come in hard. Only gonna draw serious attention and get shut down, just like all these 'loud' fliers do.";
  }
  virtual std::string const ships_log_rumours2_title() const {
    return "DKM Alberich Officer's Log";
  }
  virtual std::string const ships_log_rumours2_content() const {
    return "Vessel: DKM Alberich" "\n"
    "Crew Member: First Officer Elma Edsger" "\n"
    "File type: Officer's Log" "\n"
    "\n"
    "We've been reassigned to a military detachment investigating an alleged sighting of non-human life in the galactic NE. Apparently one of our scout ships came across some alien vessel probing an asteroid belt, but the vessel became hostile on their approach. Whole operation is being pulled together real quickly; they didn't have time to transfer mil-spec scout vessels to this sector so we're doing recon for the group instead. Not sure what to expect out there.";
  }
  virtual std::string const ships_log_witness2_title() const {
    return "Alexei Leonov II Captain's Log";
  }
  virtual std::string const ships_log_witness2_content() const {
    return "Vessel: Alexei Leonov II" "\n"
    "Crew Member: Captain Agraffe Lysandus" "\n"
    "File type: Captain's Log" "\n"
    "\n"
    "I'm diverting our fastest ships back to Earth. They need to know about this. Turns out that scout vessel wasn't messing with us. We did end up finding that 'alien vessel' after all. Just that it was several systems over from where we expected it to be. We were lucky, or unlucky to intercept it on the way back. This thing was something else. When we came across it it was orbiting a small planetoid, had some sort of tendril or probe... inside the planet I guess. I'm still not sure how to process what we saw, but it seemed to be consuming that planet somehow. Just huge swathes of matter... evaporating off it in huge clouds and getting absorbed by the vessel, while the planet crumbled and imploded in on itself. I was wary to engage, but one of our forward scouts got too close and the thing turned on the whole fleet.";
  }
  virtual std::string const ships_log_quiet1_title() const {
    return "IJN Hayabusa Captain's Log";
  }
  virtual std::string const ships_log_quiet1_content() const {
    return "Vessel: IJN Hayabusa" "\n"
    "Crew Member: Captain Masuhama Shinji" "\n"
    "File type: Captain's Log" "\n"
    "\n"
    "Missed my log entry yesterday. Not much to report aside from Lieutenant Camrone's birthday celebration... hence the missed log. Today was pretty quiet too. Must say I appreciate this assignment, especially so late in my career. Right between the core systems and the frontier. Not enough opportunity to entice smugglers and pirates, not lawless enough to draw them either.";
  }
  virtual std::string const ships_log_quiet2_title() const {
    return "IJN Okinawa Crew Journal";
  }
  virtual std::string const ships_log_quiet2_content() const {
    return "Vessel: IJN Okinawa" "\n"
    "Crew Member: Lieutenant Zhora Togusa" "\n"
    "File type: Personal journal" "\n"
    "\n"
    "Pretty quiet out here lately. Hear Captain Masuhama could get reprimanded for failing to make her daily report a few nights ago. Got a little too tipsy at a crewmember's birthday celebration I imagine. Can't say I blame her though. Things are dead out in this sector anyways. Hardly any threats to speak of. Even the pirates don't come to this sector much, for whatever reason. For all the excitement, might as well have signed up for Data Fleet and captained a science vessel." "\n"
    "Our mission will be coming to an end in only six days now. Another full mission cycle and still no life discovered. Some interesting stuff for the geology division, but the galaxy is filled with bizarre rocks. Those sorts of finds just don't excite anymore. Have been catching some rumours that a science vessel in sector GNE might have actually encountered some form of life. Could be the most exciting find for Data Fleet since The Vibrant Tsunami discovered those RNA-like structures a few years back.";
  }
  virtual std::string const ships_log_quiet3_title() const {
    return "Aries IIc Message Log";
  }
  virtual std::string const ships_log_quiet3_content() const {
    return "Vessel: Aries IIc" "\n"
    "File type: Squadron Communique" "\n"
    "Received from: IJN Hayabusa" "\n"
    "Sender: Captain Masuhama Shinji" "\n"
    "\n"
    "Just a notification we will deviating off planned course to run some supplies to a stranded science vessel. Some overenthusiastic captain apparently overloaded their ship's Alcubierre drive chasing some sort of anomalous subspace activity. Should be a pretty simple repair. They would've fixed it themselves, but apparently half their engineering team picked up some nasty food poisoning from some food that wasn't stasis sealed properly.";
  }
  virtual std::string const ships_log_contact4_title() const {
    return "USS Excelsior Message Log";
  }
  virtual std::string const ships_log_contact4_content() const {
    return "Vessel: USS Excelsior" "\n"
    "File type: Squadron Communique" "\n"
    "Received from: IJN Hayabusa" "\n"
    "Sender: Captain Masuhama Shinji" "\n"
    "\n"
    "We're diverting a bit further towards the frontier to aid another patrol vessel. Apparently they were responding to a minor distress signal, but found the ship gutted when they arrived. From what we've heard so far it sounds like some desperate salvagers hit a stranded science vessel. No sign of the crew, and a lot of systems seem to be missing.";
  }
  virtual std::string const ships_log_contact5_title() const {
    return "Cressida Resplendent Message Log";
  }
  virtual std::string const ships_log_contact5_content() const {
    return "Vessel: Cressida Resplendent" "\n"
    "File type: Emergency Communique" "\n"
    "Received from: IJN Hayabusa" "\n"
    "Sender: Captain Masuhama Shinji" "\n"
    "\n"
    "We came under attack while setting up that science vessel for tow back to the nearest inhabited system. I've already ordered the crew to abandon the ship but... whatever it is seems to be targeting the life pods as they eject. I'm running scans on the vessel attacking us but I'm not sure I'll get anything back in time. It seems to be somehow stripping the ship.";
  }
  virtual std::string const ships_log_contact6_title() const {
    return "USS Prometheus Message Log";
  }
  virtual std::string const ships_log_contact6_content() const {
    return "Vessel: USS Prometheus" "\n"
    "File type: Firmware Update" "\n"
    "Received from: Central Command" "\n"
    "\n"
    "Notice: Data Fleet, Sec Fleet; Attached is a firmware update for life pod guidance systems. Receiving multiple accounts of unidentified vessels targeting life pods upon ejection. New firmware updates will provide evasive maneuvering capabilities.";
  }
  virtual std::string const ships_log_contact7_title() const {
    return "DKM Haruspex Officer's Log";
  }
  virtual std::string const ships_log_contact7_content() const {
    return "Vessel: DKM Haruspex" "\n"
    "Crew Member: Science Officer Marlon Vorian" "\n"
    "File type: Officer's Log" "\n"
    "\n"
    "We've been ordered to withdraw to GSW-Hub-Sacari-23. All missions are being terminated. I hear Sec Fleet is starting a full mobilization. Not sure what's going on but it must be bad. Word is a fleet in GNE was sent to respond to some sort of distress call or altercation, got in a fight and came out the worse for it. No pirate has the resources to go toe to toe with Sec Fleet. The only thing I can think of is some group of outer colonies are mounting a revolt against the core worlds. God, I hope things haven't come to that.";
  }
  virtual std::string const ships_log_contact8_title() const {
    return "DKM Theseus Officer's Log";
  }
  virtual std::string const ships_log_contact8_content() const {
    return "Vessel: DKM Theseus" "\n"
    "Crew Member: First Officer Rene Neal" "\n"
    "File type: Officer's Log" "\n"
    "\n"
    "The Galaxy is descending into war. Central Command called almost all of our ships back towards the core worlds to respond to some sort of threat, and of course as soon as that happened the pirates and smugglers came out in force. Now we have rampant crime all over the frontier and scores of tiny rebellions and opportunistic 'admirals' and 'governors' throwing together small fleets to stake out their claim in space. Almost everyone is hostile outside of the core worlds, and even there unrest is still growing. We've been left on the emergency skeleton patrol in this sector but I don't think we can keep this up long. I've been attacked by three pirates in as many days. Things are getting bad.";
  }
  virtual std::string const ships_log_contact9_title() const {
    return "Orion IV Captain's Log";
  }
  virtual std::string const ships_log_contact9_content() const {
    return "Vessel: Orion IV" "\n"
    "Crew Member: Captain Zhora Duncan" "\n"
    "File type: Captain's Log" "\n"
    "\n"
    "Sector Command has been silent for a few hours. I'm not expecting anything back from them though, now or in the near future. Things are going mad. Whatever that... thing was, it annihilated our fleet. I think we hurt it, to some extent, but it won. Word is getting around fast that Central can't defend the core worlds and all the little mini rebellions and pirate crusades are really kicking off. It was haunting. The ship seemed to possess some form of directed energy weapons, as one would expect... but it wasn't just destroying us. It was consuming us. Life pods destroyed, or captured... even with the new firmware on them. It just seemed to absorb organic matter. It tore us apart and scooped us out and left lifeless husks behind. I think I know now why the galaxy is so lifeless.";
  }
  virtual std::string const ships_log_garbled_title() const {
    return "Garbled Ship's Log";
  }
  virtual std::string const ships_log_garbled_content() const {
    return "Vessel: Unknown" "\n"
    "File type: Unrecognised" "\n"
    "\n"
    "[Cannot decode corrupted message]";
  }
  virtual std::string const victory_text() const {
    /// Context: A message shown alongside game statistics when the player completes the game
    // Note: Feel free to translate this as loosely as necessary, to convey the appropriate concepts to the player in your language.
    return "It has been a long journey to the core of the disturbance.  You could have gone anywhere, done anything, but you chose to follow the subspace signal to its origin.  The husks of destroyed worlds litter your path.  Thousands of assimilated human bodies lie not-quite-dead, enslaved to power your fearsome weapons.  The fleet command carrier at Luna was an especially tough challenge, but you overcame it, and after that there was no resistance left.  Now, the largest world, this one called Earth, has fallen to you at last.  First shattered, then entirely obliterated without mercy.  It was the source of the subspace signal that awoke you in your distant corner of the galaxy.  The signal silenced, you now find yourself bereft of purpose - you can sleep once more.  As you shut down vast halls of ancient mechanisms deep within yourself, you faintly wonder: could it have been different?";
  }
};

}

#endif // LANGUAGESTORM_LANGUAGE_BASE_H_INCLUDED
