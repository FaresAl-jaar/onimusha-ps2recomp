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

// Function: sub_001189B0
// Address: 0x1189b0 - 0x118b04
void sub_001189B0_0x1189b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001189B0_0x1189b0");
#endif

    switch (ctx->pc) {
        case 0x118a0cu: goto label_118a0c;
        case 0x118a20u: goto label_118a20;
        case 0x118a48u: goto label_118a48;
        case 0x118a60u: goto label_118a60;
        case 0x118a80u: goto label_118a80;
        case 0x118ab8u: goto label_118ab8;
        case 0x118ac0u: goto label_118ac0;
        case 0x118ac8u: goto label_118ac8;
        case 0x118ad0u: goto label_118ad0;
        case 0x118ae0u: goto label_118ae0;
        default: break;
    }

    ctx->pc = 0x1189b0u;

    // 0x1189b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1189b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1189b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1189b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1189b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1189b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1189bc: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1189bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1189c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1189c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1189c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1189c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1189c8: 0x26514148  addiu       $s1, $s2, 0x4148
    ctx->pc = 0x1189c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16712));
    // 0x1189cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1189ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1189d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1189d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1189d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1189d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x404150u));
    // 0x1189d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1189D8u;
    {
        const bool branch_taken_0x1189d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189d8) {
            ctx->pc = 0x1189ECu;
            goto label_1189ec;
        }
    }
    ctx->pc = 0x1189E0u;
    // 0x1189e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1189e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1189e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1189E4u;
    {
        const bool branch_taken_0x1189e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189E4u;
        // 0x1189e8: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189e4) {
            ctx->pc = 0x118AE4u;
            goto label_118ae4;
        }
    }
    ctx->pc = 0x1189ECu;
label_1189ec:
    // 0x1189ec: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x1189ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x1189f0: 0xfe404148  sd          $zero, 0x4148($s2)
    ctx->pc = 0x1189f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16712), GPR_U64(ctx, 0));
    // 0x1189f4: 0x26701b40  addiu       $s0, $s3, 0x1B40
    ctx->pc = 0x1189f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 6976));
    // 0x1189f8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1189f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1189fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1189fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a04: 0xc049590  jal         func_125640
    ctx->pc = 0x118A04u;
    SET_GPR_U32(ctx, 31, 0x118A0Cu);
    ctx->pc = 0x118A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A04u;
    // 0x118a08: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x118A04u, 0x118A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A0Cu;
label_118a0c:
    // 0x118a0c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x118a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x118a10: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x118a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x118a14: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x118a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x118a18: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x118a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x118a1c: 0x0  nop
    ctx->pc = 0x118a1cu;
    // NOP
label_118a20:
    // 0x118a20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118a28: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x118a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x118a2c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x118a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x118a30: 0x0  nop
    ctx->pc = 0x118a30u;
    // NOP
    // 0x118a34: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118A34u;
    {
        const bool branch_taken_0x118a34 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x118a34) {
            ctx->pc = 0x118A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118a20;
        }
    }
    ctx->pc = 0x118A3Cu;
    // 0x118a3c: 0x26621b40  addiu       $v0, $s3, 0x1B40
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6976));
    // 0x118a40: 0xc046720  jal         func_119C80
    ctx->pc = 0x118A40u;
    SET_GPR_U32(ctx, 31, 0x118A48u);
    ctx->pc = 0x118A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A40u;
    // 0x118a44: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C80u, 0x118A40u, 0x118A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A48u;
label_118a48:
    // 0x118a48: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x118a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x118a4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x118a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x118a50: 0x24a58f50  addiu       $a1, $a1, -0x70B0
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
    // 0x118a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a58: 0xc043734  jal         func_10DCD0
    ctx->pc = 0x118A58u;
    SET_GPR_U32(ctx, 31, 0x118A60u);
    ctx->pc = 0x118A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A58u;
    // 0x118a5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD0u, 0x118A58u, 0x118A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A60u;
label_118a60:
    // 0x118a60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a64: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118A64u;
    {
        const bool branch_taken_0x118a64 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x118a64) {
            ctx->pc = 0x118A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118A64u;
            // 0x118a68: 0x26424148  addiu       $v0, $s2, 0x4148 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16712));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118A78u;
            goto label_118a78;
        }
    }
    ctx->pc = 0x118A6Cu;
    // 0x118a6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118a70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x118A70u;
    {
        const bool branch_taken_0x118a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A70u;
        // 0x118a74: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a70) {
            ctx->pc = 0x118AE4u;
            goto label_118ae4;
        }
    }
    ctx->pc = 0x118A78u;
label_118a78:
    // 0x118a78: 0xc046028  jal         func_1180A0
    ctx->pc = 0x118A78u;
    SET_GPR_U32(ctx, 31, 0x118A80u);
    ctx->pc = 0x118A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A78u;
    // 0x118a7c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x118A78u, 0x118A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A80u;
label_118a80:
    // 0x118a80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x118a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x118a84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a88: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x118a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x118a8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118a90: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x118a90u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x118a94: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x118a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x118a98: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x118a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x118a9c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x118a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x118aa0: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x118aa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x118aa4: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x118aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x118aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118AA8u;
    {
        const bool branch_taken_0x118aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AA8u;
        // 0x118aac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118aa8) {
            ctx->pc = 0x118AC0u;
            goto label_118ac0;
        }
    }
    ctx->pc = 0x118AB0u;
    // 0x118ab0: 0xc046260  jal         func_118980
    ctx->pc = 0x118AB0u;
    SET_GPR_U32(ctx, 31, 0x118AB8u);
    ctx->pc = 0x118AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AB0u;
    // 0x118ab4: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118980u, 0x118AB0u, 0x118AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AB8u;
label_118ab8:
    // 0x118ab8: 0xc046268  jal         func_1189A0
    ctx->pc = 0x118AB8u;
    SET_GPR_U32(ctx, 31, 0x118AC0u);
    ctx->pc = 0x118ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AB8u;
    // 0x118abc: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A0u, 0x118AB8u, 0x118AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AC0u;
label_118ac0:
    // 0x118ac0: 0xc046264  jal         func_118990
    ctx->pc = 0x118AC0u;
    SET_GPR_U32(ctx, 31, 0x118AC8u);
    ctx->pc = 0x118AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AC0u;
    // 0x118ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x118AC0u, 0x118AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AC8u;
label_118ac8:
    // 0x118ac8: 0xc043aca  jal         func_10EB28
    ctx->pc = 0x118AC8u;
    SET_GPR_U32(ctx, 31, 0x118AD0u);
    ctx->pc = 0x118ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AC8u;
    // 0x118acc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB28u, 0x118AC8u, 0x118AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AD0u;
label_118ad0:
    // 0x118ad0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118AD0u;
    {
        const bool branch_taken_0x118ad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AD0u;
        // 0x118ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ad0) {
            ctx->pc = 0x118AE4u;
            goto label_118ae4;
        }
    }
    ctx->pc = 0x118AD8u;
    // 0x118ad8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x118AD8u;
    SET_GPR_U32(ctx, 31, 0x118AE0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x118AD8u, 0x118AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AE0u;
label_118ae0:
    // 0x118ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118ae4:
    // 0x118ae4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118ae8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118ae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118aec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118af0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118af4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118afc: 0x3e00008  jr          $ra
    ctx->pc = 0x118AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AFCu;
        // 0x118b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B04u;
}
