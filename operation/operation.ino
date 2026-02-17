// Have power going to the hand, should be off when not in use
#define HAND A2
// The Speaker for you lose, scoring, and welcome
#define SPEAKER A3
// Show the Stop playing signal
#define LED D2
// connects hand to ground
#define BOARD D3

/*
 * The State of the game
 */
enum GameState {
    /*
     * Nothing Happening
     */
    Idle,
    /*
     * Prepare game for play
     */
    Setup,
    /*
     * User is playing the game
     */
    Playing,
    /*
     * Player loses
     */
    Lose,
}

/*
 * Universal state of program
 */
struct State {
  GameState state;
} operation; // initial global state

/*
 * Set up the program to know what pins are used for
 */
void setup() {
  PinMode(HAND, OUTPUT);
  PinMode(SPEAKER, OUTPUT);
  PinMode(LED, OUTPUT);
  PinMode(BOARD, INPUT);
  operation.playing = GameState.Idle;
}

/*
 * Main loop to do stuff
 */
void loop() {}
