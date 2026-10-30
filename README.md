# Bomberman World — Kotte Blast

**Student:** Marius-Raul Filipiuc

## How to play

- **Controls:** WASD/arrows to move, Space for bomb, R to restart after a round, Q/Escape to quit.
- **Objective and rules:** kill all 4 enemies to win. You die from a blast or an enemy. If both happen in the same frame you lose. The blue pickup gives +1 blast range (max 6). You can have 3 bombs at once, bombs set off other bombs, and you have a 5 second shield at the start of each round (player is white).
- **Configurations / demo setup:** default is the small map. Run with `--stress` for the big 200 x 120 map.

## Features and validation

| Feature | Check, observed result, and expected behaviour |
| --- | --- |
| 1. Feature Name : Player damage and death | I stood on my bomb and walked into an enemy: both killed me once. Walking close to an enemy without touching it did not. Worked as expected. |
| 2. Feature Name : Round states and objective | I killed all 4 enemies and got "YOU WIN", and lost another round to my own bomb. After both, input did nothing and enemies stopped. Worked as expected. |
| 3. Feature Name : Safe restart | I died with a bomb still ticking and pressed R: the bomb was gone and nothing exploded. Restarting after win and loss several times gave the same map each time. |
| 4. Feature Name : Solid bombs with owner escape | I could walk off my bomb but not back onto it, and could walk over the tile after it exploded. Pressing Space twice on one tile placed only one bomb. |
| 5. Feature Name : Blast-range pickup | Walking past the pickup did nothing; walking over it raised the range from 3 to 4 once. A bomb placed before the pickup still exploded with range 3. |
| 6. Extension Name : Multiple bombs per owner | I could place 3 bombs but not a 4th. After they exploded I could place 3 again. |
| 7. Extension Name : Chain reactions | One bomb's blast set off a second bomb early, and the second bomb did not explode again later. |
| 8. Extension Name : Shield / temporary invulnerability | With the shield on I survived my own bomb. After the shield ended, the same test killed me. |

**Known issues:** On the big map, enemies in the top row can't move because they overlap the wall (also in the original code). The orange blast only hurts at the moment the bomb explodes.

## Sources and assistance

Built on the course's Kotte code, raylib and cpp_prngs (licences in `vendor/`).

I used Claude to suggest some code changes and help with compiler errors. I wrote the changes into the project myself and did the tests above myself.
