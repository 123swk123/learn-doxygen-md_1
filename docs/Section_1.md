# Section 1

[TOC]

## Design-Diagram

Lets try some plant uml based architecture diagram here
@startuml{myimage.svg}
@startwire{myimage.svg}
' skinparam DefaultFontSize 20
' skinparam ArrowFontSize 20

* Host_App
	print("\n(test_sample.exe)")
--
move(150, 0)
* PCIe_Emulation
	* BRD
		print("\n(pcie-emu.ko)")
	--
	move(50, 0)
	* Proxy
		print("\n(proxy.exe)")
--
move(100, 0)
* Simulator_Model
	* Adapter [50x100]
		print("\nHost\nAdapter\nModel")
	--
	* Runtime_Model

Host_App <=> PCIe_Emulation : [[ pcie_mapping.html#lblResource0 /dev/rescource0 ]]
Host_App <=> PCIe_Emulation : [[ pcie_mapping.html#lblResource2 /dev/rescource2 ]]
Host_App <=> PCIe_Emulation : [[ pcie_mapping.html#lblResource4 /dev/rescource4 ]]
PCIe_Emulation.BRD <=> PCIe_Emulation.Proxy : BAR0
PCIe_Emulation.BRD <=> PCIe_Emulation.Proxy : BAR2
PCIe_Emulation.BRD <=> PCIe_Emulation.Proxy : BAR4

PCIe_Emulation(100%,50%) <-> Simulator_Model : TCP/IP
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
