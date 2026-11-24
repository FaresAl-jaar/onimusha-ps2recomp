#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FF48
// Address: 0x21ff48 - 0x220164
void sub_0021FF48_0x21ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FF48_0x21ff48");
#endif

    switch (ctx->pc) {
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff94u: goto label_21ff94;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffb8u: goto label_21ffb8;
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffd8u: goto label_21ffd8;
        case 0x21ffe4u: goto label_21ffe4;
        case 0x21fff4u: goto label_21fff4;
        case 0x220000u: goto label_220000;
        case 0x22000cu: goto label_22000c;
        case 0x220018u: goto label_220018;
        case 0x220028u: goto label_220028;
        case 0x220058u: goto label_220058;
        case 0x220090u: goto label_220090;
        default: break;
    }

    ctx->pc = 0x21ff48u;

    // 0x21ff48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ff4c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x21ff50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ff54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ff54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ff58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff5c: 0x244509d0  addiu       $a1, $v0, 0x9D0
    ctx->pc = 0x21ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2512));
    // 0x21ff60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ff64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ff68: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x21FF68u;
    SET_GPR_U32(ctx, 31, 0x21FF70u);
    ctx->pc = 0x21FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF68u;
    // 0x21ff6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x21FF68u, 0x21FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF70u;
label_21ff70:
    // 0x21ff70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x21ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x21ff74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ff78: 0x24a50a18  addiu       $a1, $a1, 0xA18
    ctx->pc = 0x21ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2584));
    // 0x21ff7c: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x21FF7Cu;
    SET_GPR_U32(ctx, 31, 0x21FF84u);
    ctx->pc = 0x21FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF7Cu;
    // 0x21ff80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x21FF7Cu, 0x21FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF84u;
label_21ff84:
    // 0x21ff84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ff88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff8c: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x21FF8Cu;
    SET_GPR_U32(ctx, 31, 0x21FF94u);
    ctx->pc = 0x21FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF8Cu;
    // 0x21ff90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x21FF8Cu, 0x21FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF94u;
label_21ff94:
    // 0x21ff94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x21ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x21ff98: 0x24a50a78  addiu       $a1, $a1, 0xA78
    ctx->pc = 0x21ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2680));
    // 0x21ff9c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ffa0: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x21FFA0u;
    SET_GPR_U32(ctx, 31, 0x21FFA8u);
    ctx->pc = 0x21FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFA0u;
    // 0x21ffa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x21FFA0u, 0x21FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFA8u;
label_21ffa8:
    // 0x21ffa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ffacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffb0: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x21FFB0u;
    SET_GPR_U32(ctx, 31, 0x21FFB8u);
    ctx->pc = 0x21FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFB0u;
    // 0x21ffb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x21FFB0u, 0x21FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFB8u;
label_21ffb8:
    // 0x21ffb8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x21ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x21ffbc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21ffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ffc0: 0x24a50a98  addiu       $a1, $a1, 0xA98
    ctx->pc = 0x21ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2712));
    // 0x21ffc4: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x21FFC4u;
    SET_GPR_U32(ctx, 31, 0x21FFCCu);
    ctx->pc = 0x21FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFC4u;
    // 0x21ffc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x21FFC4u, 0x21FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFCCu;
label_21ffcc:
    // 0x21ffcc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x21ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x21ffd0: 0xc08806c  jal         func_2201B0
    ctx->pc = 0x21FFD0u;
    SET_GPR_U32(ctx, 31, 0x21FFD8u);
    ctx->pc = 0x21FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFD0u;
    // 0x21ffd4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201B0u, 0x21FFD0u, 0x21FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFD8u;
label_21ffd8:
    // 0x21ffd8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x21ffdc: 0xc08805a  jal         func_220168
    ctx->pc = 0x21FFDCu;
    SET_GPR_U32(ctx, 31, 0x21FFE4u);
    ctx->pc = 0x21FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFDCu;
    // 0x21ffe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x21FFDCu, 0x21FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE4u;
label_21ffe4:
    // 0x21ffe4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x21ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x21ffe8: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x21ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x21ffec: 0xc08805a  jal         func_220168
    ctx->pc = 0x21FFECu;
    SET_GPR_U32(ctx, 31, 0x21FFF4u);
    ctx->pc = 0x21FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFECu;
    // 0x21fff0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x21FFECu, 0x21FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFF4u;
label_21fff4:
    // 0x21fff4: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x21fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x21fff8: 0xc08805a  jal         func_220168
    ctx->pc = 0x21FFF8u;
    SET_GPR_U32(ctx, 31, 0x220000u);
    ctx->pc = 0x21FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFF8u;
    // 0x21fffc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x21FFF8u, 0x220000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220000u;
label_220000:
    // 0x220000: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x220000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x220004: 0xc08805a  jal         func_220168
    ctx->pc = 0x220004u;
    SET_GPR_U32(ctx, 31, 0x22000Cu);
    ctx->pc = 0x220008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220004u;
    // 0x220008: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x220004u, 0x22000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22000Cu;
label_22000c:
    // 0x22000c: 0x262400ec  addiu       $a0, $s1, 0xEC
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x220010: 0xc08805a  jal         func_220168
    ctx->pc = 0x220010u;
    SET_GPR_U32(ctx, 31, 0x220018u);
    ctx->pc = 0x220014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220010u;
    // 0x220014: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x220010u, 0x220018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220018u;
label_220018:
    // 0x220018: 0x26240118  addiu       $a0, $s1, 0x118
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x22001c: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x22001cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x220020: 0xc08805a  jal         func_220168
    ctx->pc = 0x220020u;
    SET_GPR_U32(ctx, 31, 0x220028u);
    ctx->pc = 0x220024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220020u;
    // 0x220024: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x220020u, 0x220028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220028u;
label_220028:
    // 0x220028: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x220028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x22002c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220030: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x220030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    // 0x220034: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x220034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x220038: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x220038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x22003c: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x22003cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x220040: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x220040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x220044: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x220044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x220048: 0xfe220158  sd          $v0, 0x158($s1)
    ctx->pc = 0x220048u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 344), GPR_U64(ctx, 2));
    // 0x22004c: 0xfe220150  sd          $v0, 0x150($s1)
    ctx->pc = 0x22004cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 2));
    // 0x220050: 0x262201e8  addiu       $v0, $s1, 0x1E8
    ctx->pc = 0x220050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x220054: 0x0  nop
    ctx->pc = 0x220054u;
    // NOP
label_220058:
    // 0x220058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22005c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22005cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220060: 0x0  nop
    ctx->pc = 0x220060u;
    // NOP
    // 0x220064: 0x0  nop
    ctx->pc = 0x220064u;
    // NOP
    // 0x220068: 0x0  nop
    ctx->pc = 0x220068u;
    // NOP
    // 0x22006c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22006Cu;
    {
        const bool branch_taken_0x22006c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x220070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22006Cu;
        // 0x220070: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22006c) {
            ctx->pc = 0x220058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220058;
        }
    }
    ctx->pc = 0x220074u;
    // 0x220074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220078: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x220078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x22007c: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x22007cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
    // 0x220080: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x220084: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x220084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x220088: 0xae2201ec  sw          $v0, 0x1EC($s1)
    ctx->pc = 0x220088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 2));
    // 0x22008c: 0x2482026c  addiu       $v0, $a0, 0x26C
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
label_220090:
    // 0x220090: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x220090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x220094: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x220094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x220098: 0x0  nop
    ctx->pc = 0x220098u;
    // NOP
    // 0x22009c: 0x0  nop
    ctx->pc = 0x22009cu;
    // NOP
    // 0x2200a0: 0x0  nop
    ctx->pc = 0x2200a0u;
    // NOP
    // 0x2200a4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2200A4u;
    {
        const bool branch_taken_0x2200a4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2200A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200A4u;
        // 0x2200a8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200a4) {
            ctx->pc = 0x220090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220090;
        }
    }
    ctx->pc = 0x2200ACu;
    // 0x2200ac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2200acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2200b0: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x2200b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
    // 0x2200b4: 0xae2702cc  sw          $a3, 0x2CC($s1)
    ctx->pc = 0x2200b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 7));
    // 0x2200b8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2200b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x2200bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2200c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2200c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2200c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2200c8: 0x8e2802a8  lw          $t0, 0x2A8($s1)
    ctx->pc = 0x2200c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2200cc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2200d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2200d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2200d4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2200d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2200d8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2200dc: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x2200dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x2200e0: 0xae2602a0  sw          $a2, 0x2A0($s1)
    ctx->pc = 0x2200e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 6));
    // 0x2200e4: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x2200e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x2200e8: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x2200e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x2200ec: 0xae2502e0  sw          $a1, 0x2E0($s1)
    ctx->pc = 0x2200ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 5));
    // 0x2200f0: 0xae2402bc  sw          $a0, 0x2BC($s1)
    ctx->pc = 0x2200f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 4));
    // 0x2200f4: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x2200f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
    // 0x2200f8: 0xae2802d0  sw          $t0, 0x2D0($s1)
    ctx->pc = 0x2200f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 8));
    // 0x2200fc: 0xae2005b8  sw          $zero, 0x5B8($s1)
    ctx->pc = 0x2200fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 0));
    // 0x220100: 0xae2702e4  sw          $a3, 0x2E4($s1)
    ctx->pc = 0x220100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 7));
    // 0x220104: 0xae22027c  sw          $v0, 0x27C($s1)
    ctx->pc = 0x220104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
    // 0x220108: 0xae250280  sw          $a1, 0x280($s1)
    ctx->pc = 0x220108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 5));
    // 0x22010c: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x22010cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
    // 0x220110: 0xae250288  sw          $a1, 0x288($s1)
    ctx->pc = 0x220110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 5));
    // 0x220114: 0xae27028c  sw          $a3, 0x28C($s1)
    ctx->pc = 0x220114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 7));
    // 0x220118: 0xae250290  sw          $a1, 0x290($s1)
    ctx->pc = 0x220118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 5));
    // 0x22011c: 0xae220294  sw          $v0, 0x294($s1)
    ctx->pc = 0x22011cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
    // 0x220120: 0xae260298  sw          $a2, 0x298($s1)
    ctx->pc = 0x220120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 6));
    // 0x220124: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x220124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
    // 0x220128: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x220128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x22012c: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x22012cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
    // 0x220130: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x220130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x220134: 0xae2502b8  sw          $a1, 0x2B8($s1)
    ctx->pc = 0x220134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 5));
    // 0x220138: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x220138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
    // 0x22013c: 0xae2002c4  sw          $zero, 0x2C4($s1)
    ctx->pc = 0x22013cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
    // 0x220140: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x220140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
    // 0x220144: 0xae2002e8  sw          $zero, 0x2E8($s1)
    ctx->pc = 0x220144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 0));
    // 0x220148: 0xae2005b0  sw          $zero, 0x5B0($s1)
    ctx->pc = 0x220148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 0));
    // 0x22014c: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x22014cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    // 0x220150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22015c: 0x3e00008  jr          $ra
    ctx->pc = 0x22015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22015Cu;
        // 0x220160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220164u;
}
