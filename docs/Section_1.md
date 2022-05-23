# Section 1

[TOC]

## Design-Diagram

Lets try some plant uml based architecture diagram here
@startuml{myimage.svg}
@startwire{myimage.svg}
move(0, 20)
* Host_App
	print("\n(test_sample.exe)")
--
move(120, 0)
* PCIe_Emulation #LightGrey
	* BRD #White
		print("\n(pcie-emu.ko)")
	--
	move(50, 0)
	* Proxy #White
		print("\n(proxy.exe)")
--
move(70, 0)
* Simulator_Model
	* Adapter [50x100]
		print("\nHost\nAdapter\nModel")
	--
	* Runtime_Model [100x100]
		move(5,0)
		* M1 [25x25]
		* M2 [25x25]
		--
		* M3 [25x25]
		* M4 [25x25]

Host_App(100%,15%) <=> PCIe_Emulation.BRD : [[ pcie_mapping.html#lblResource0 /dev/rescource0 ]]
Host_App <=> PCIe_Emulation.BRD : [[ pcie_mapping.html#lblResource2 /dev/rescource2 ]]
Host_App <=> PCIe_Emulation.BRD : [[ pcie_mapping.html#lblResource4 /dev/rescource4 ]]

PCIe_Emulation.BRD(100%,20%) <=> PCIe_Emulation.Proxy : BAR0
PCIe_Emulation.BRD <=> PCIe_Emulation.Proxy : BAR2
PCIe_Emulation.BRD <=> PCIe_Emulation.Proxy : BAR4

PCIe_Emulation.Proxy(100%,50%) <-> Simulator_Model : TCP\n  IP
Simulator_Model.Adapter(100%,50%) <-> Simulator_Model.Runtime_Model
@endwire
@enduml

This manual is divided in the following sections:
- \subpage part1
- \subpage advanced "Advanced usage"

<!-- these are 2 sub pages which are rendered separately -->
\page part1 Part1

This page is called Part 1.

Now you can proceed to the \ref advanced "advanced section".

\page advanced Advanced Usage
This page is for advanced users.

Make sure you have first read \ref part1 "The Part 1".

<!-- these section rendered under sub page Advance usage -->
## Some Details

for details see @ref define.h

### Use of MIN macro {#lbl_useofmin}
use the macro @ref MIN(a,b) to compute minimum of two values 

[Main Page](#mainpage)

\page pcie_mapping PCIe Mapping
## BAR 0 mapping {#lblResource0}
|    BAR     | Address Offset | Mapped Address | Mapped Size |
| ---------- | :------------: | :------------: | :---------: |
| Resource 0 |  0x1000_0000   |  0x8000_0000   |    1 MB     |

## BAR 2 mapping {#lblResource2}
|    BAR     | Address Offset | Mapped Address | Mapped Size |
| ---------- | :------------: | :------------: | :---------: |
| Resource 2 |  0x1000_0000   |  0x8000_0000   |    4 MB     |

## BAR 4 mapping {#lblResource4}
|    BAR     | Address Offset | Mapped Address | Mapped Size |
| ---------- | :------------: | :------------: | :---------: |
| Resource 4 |  0x1000_0000   |  0x8000_0000   |   128 MB    |

