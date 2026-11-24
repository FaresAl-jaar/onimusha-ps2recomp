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

// Function: sub_002D1EA0
// Address: 0x2d1ea0 - 0x2d2280
void sub_002D1EA0_0x2d1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1EA0_0x2d1ea0");
#endif

    switch (ctx->pc) {
        case 0x2d1ee4u: goto label_2d1ee4;
        case 0x2d1ef0u: goto label_2d1ef0;
        case 0x2d1f58u: goto label_2d1f58;
        case 0x2d1f70u: goto label_2d1f70;
        case 0x2d1f90u: goto label_2d1f90;
        case 0x2d1fa8u: goto label_2d1fa8;
        case 0x2d1fd8u: goto label_2d1fd8;
        case 0x2d1fe4u: goto label_2d1fe4;
        case 0x2d1ff4u: goto label_2d1ff4;
        case 0x2d2008u: goto label_2d2008;
        case 0x2d2014u: goto label_2d2014;
        case 0x2d2024u: goto label_2d2024;
        case 0x2d2038u: goto label_2d2038;
        case 0x2d2044u: goto label_2d2044;
        case 0x2d2054u: goto label_2d2054;
        case 0x2d20b8u: goto label_2d20b8;
        case 0x2d20c4u: goto label_2d20c4;
        case 0x2d20ecu: goto label_2d20ec;
        case 0x2d2104u: goto label_2d2104;
        case 0x2d2110u: goto label_2d2110;
        case 0x2d212cu: goto label_2d212c;
        case 0x2d2138u: goto label_2d2138;
        case 0x2d2148u: goto label_2d2148;
        case 0x2d215cu: goto label_2d215c;
        case 0x2d2168u: goto label_2d2168;
        case 0x2d2178u: goto label_2d2178;
        case 0x2d21d0u: goto label_2d21d0;
        case 0x2d21dcu: goto label_2d21dc;
        case 0x2d21fcu: goto label_2d21fc;
        case 0x2d2210u: goto label_2d2210;
        case 0x2d2234u: goto label_2d2234;
        default: break;
    }

    ctx->pc = 0x2d1ea0u;

    // 0x2d1ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d1ea4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d1ea8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d1ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d1eac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d1eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d1eb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d1eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d1eb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d1eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d1eb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d1eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d1ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1ec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1ecc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d1ed0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d1ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d1ed4: 0x146000de  bnez        $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x2D1ED4u;
    {
        const bool branch_taken_0x2d1ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1ED4u;
        // 0x2d1ed8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ed4) {
            ctx->pc = 0x2D2250u;
            goto label_2d2250;
        }
    }
    ctx->pc = 0x2D1EDCu;
    // 0x2d1edc: 0xc0b4434  jal         func_2D10D0
    ctx->pc = 0x2D1EDCu;
    SET_GPR_U32(ctx, 31, 0x2D1EE4u);
    ctx->pc = 0x2D10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D0u, 0x2D1EDCu, 0x2D1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EE4u;
label_2d1ee4:
    // 0x2d1ee4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d1ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ee8: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D1EE8u;
    SET_GPR_U32(ctx, 31, 0x2D1EF0u);
    ctx->pc = 0x2D1EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1EE8u;
    // 0x2d1eec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D1EE8u, 0x2D1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EF0u;
label_2d1ef0:
    // 0x2d1ef0: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x2d1ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d1ef4: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x2d1ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2d1ef8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1EF8u;
    {
        const bool branch_taken_0x2d1ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EF8u;
        // 0x2d1efc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ef8) {
            ctx->pc = 0x2D1F08u;
            goto label_2d1f08;
        }
    }
    ctx->pc = 0x2D1F00u;
    // 0x2d1f00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F00u;
    {
        const bool branch_taken_0x2d1f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F00u;
        // 0x2d1f04: 0x92820016  lbu         $v0, 0x16($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f00) {
            ctx->pc = 0x2D1F18u;
            goto label_2d1f18;
        }
    }
    ctx->pc = 0x2D1F08u;
label_2d1f08:
    // 0x2d1f08: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F08u;
    {
        const bool branch_taken_0x2d1f08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F08u;
        // 0x2d1f0c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f08) {
            ctx->pc = 0x2D1F18u;
            goto label_2d1f18;
        }
    }
    ctx->pc = 0x2D1F10u;
    // 0x2d1f10: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1F10u;
    {
        const bool branch_taken_0x2d1f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F10u;
        // 0x2d1f14: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f10) {
            ctx->pc = 0x2D1F18u;
            goto label_2d1f18;
        }
    }
    ctx->pc = 0x2D1F18u;
label_2d1f18:
    // 0x2d1f18: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2d1f18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d1f1c: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x2d1f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x2d1f20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F20u;
    {
        const bool branch_taken_0x2d1f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f20) {
            ctx->pc = 0x2D1F30u;
            goto label_2d1f30;
        }
    }
    ctx->pc = 0x2D1F28u;
    // 0x2d1f28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F28u;
    {
        const bool branch_taken_0x2d1f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F28u;
        // 0x2d1f2c: 0x92820017  lbu         $v0, 0x17($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f28) {
            ctx->pc = 0x2D1F40u;
            goto label_2d1f40;
        }
    }
    ctx->pc = 0x2D1F30u;
label_2d1f30:
    // 0x2d1f30: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F30u;
    {
        const bool branch_taken_0x2d1f30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F30u;
        // 0x2d1f34: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f30) {
            ctx->pc = 0x2D1F40u;
            goto label_2d1f40;
        }
    }
    ctx->pc = 0x2D1F38u;
    // 0x2d1f38: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1F38u;
    {
        const bool branch_taken_0x2d1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F38u;
        // 0x2d1f3c: 0x92620002  lbu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f38) {
            ctx->pc = 0x2D1F40u;
            goto label_2d1f40;
        }
    }
    ctx->pc = 0x2D1F40u;
label_2d1f40:
    // 0x2d1f40: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2d1f40u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d1f44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d1f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F48u;
    {
        const bool branch_taken_0x2d1f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F48u;
        // 0x2d1f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f48) {
            ctx->pc = 0x2D1F60u;
            goto label_2d1f60;
        }
    }
    ctx->pc = 0x2D1F50u;
    // 0x2d1f50: 0xc0b43c8  jal         func_2D0F20
    ctx->pc = 0x2D1F50u;
    SET_GPR_U32(ctx, 31, 0x2D1F58u);
    ctx->pc = 0x2D1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F50u;
    // 0x2d1f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F20u, 0x2D1F50u, 0x2D1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F58u;
label_2d1f58:
    // 0x2d1f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1F58u;
    {
        const bool branch_taken_0x2d1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F58u;
        // 0x2d1f5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f58) {
            ctx->pc = 0x2D1F78u;
            goto label_2d1f78;
        }
    }
    ctx->pc = 0x2D1F60u;
label_2d1f60:
    // 0x2d1f60: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F60u;
    {
        const bool branch_taken_0x2d1f60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f60) {
            ctx->pc = 0x2D1F78u;
            goto label_2d1f78;
        }
    }
    ctx->pc = 0x2D1F68u;
    // 0x2d1f68: 0xc0b43b4  jal         func_2D0ED0
    ctx->pc = 0x2D1F68u;
    SET_GPR_U32(ctx, 31, 0x2D1F70u);
    ctx->pc = 0x2D1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F68u;
    // 0x2d1f6c: 0x92a429d0  lbu         $a0, 0x29D0($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0ED0u, 0x2D1F68u, 0x2D1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F70u;
label_2d1f70:
    // 0x2d1f70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f74: 0x0  nop
    ctx->pc = 0x2d1f74u;
    // NOP
label_2d1f78:
    // 0x2d1f78: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d1f7c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2d1f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2d1f80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F80u;
    {
        const bool branch_taken_0x2d1f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F80u;
        // 0x2d1f84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f80) {
            ctx->pc = 0x2D1F98u;
            goto label_2d1f98;
        }
    }
    ctx->pc = 0x2D1F88u;
    // 0x2d1f88: 0xc0b43c8  jal         func_2D0F20
    ctx->pc = 0x2D1F88u;
    SET_GPR_U32(ctx, 31, 0x2D1F90u);
    ctx->pc = 0x2D0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F20u, 0x2D1F88u, 0x2D1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F90u;
label_2d1f90:
    // 0x2d1f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1F90u;
    {
        const bool branch_taken_0x2d1f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F90u;
        // 0x2d1f94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f90) {
            ctx->pc = 0x2D1FB0u;
            goto label_2d1fb0;
        }
    }
    ctx->pc = 0x2D1F98u;
label_2d1f98:
    // 0x2d1f98: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F98u;
    {
        const bool branch_taken_0x2d1f98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f98) {
            ctx->pc = 0x2D1FB0u;
            goto label_2d1fb0;
        }
    }
    ctx->pc = 0x2D1FA0u;
    // 0x2d1fa0: 0xc0b43b4  jal         func_2D0ED0
    ctx->pc = 0x2D1FA0u;
    SET_GPR_U32(ctx, 31, 0x2D1FA8u);
    ctx->pc = 0x2D1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FA0u;
    // 0x2d1fa4: 0x926429d0  lbu         $a0, 0x29D0($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0ED0u, 0x2D1FA0u, 0x2D1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FA8u;
label_2d1fa8:
    // 0x2d1fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fac: 0x0  nop
    ctx->pc = 0x2d1facu;
    // NOP
label_2d1fb0:
    // 0x2d1fb0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d1fb4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d1fb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1FB8u;
    {
        const bool branch_taken_0x2d1fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FB8u;
        // 0x2d1fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fb8) {
            ctx->pc = 0x2D1FC4u;
            goto label_2d1fc4;
        }
    }
    ctx->pc = 0x2D1FC0u;
    // 0x2d1fc0: 0x92820019  lbu         $v0, 0x19($s4)
    ctx->pc = 0x2d1fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
label_2d1fc4:
    // 0x2d1fc4: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D1FC4u;
    {
        const bool branch_taken_0x2d1fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FC4u;
        // 0x2d1fc8: 0x305e00ff  andi        $fp, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fc4) {
            ctx->pc = 0x2D2118u;
            goto label_2d2118;
        }
    }
    ctx->pc = 0x2D1FCCu;
    // 0x2d1fcc: 0x96360000  lhu         $s6, 0x0($s1)
    ctx->pc = 0x2d1fccu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1fd0: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D1FD0u;
    SET_GPR_U32(ctx, 31, 0x2D1FD8u);
    ctx->pc = 0x2D1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FD0u;
    // 0x2d1fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D1FD0u, 0x2D1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FD8u;
label_2d1fd8:
    // 0x2d1fd8: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x2d1fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2d1fdc: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D1FDCu;
    SET_GPR_U32(ctx, 31, 0x2D1FE4u);
    ctx->pc = 0x2D1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FDCu;
    // 0x2d1fe0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D1FDCu, 0x2D1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FE4u;
label_2d1fe4:
    // 0x2d1fe4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fec: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D1FECu;
    SET_GPR_U32(ctx, 31, 0x2D1FF4u);
    ctx->pc = 0x2D1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FECu;
    // 0x2d1ff0: 0xae82007c  sw          $v0, 0x7C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D1FECu, 0x2D1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FF4u;
label_2d1ff4:
    // 0x2d1ff4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1ff8: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x2d1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    // 0x2d1ffc: 0x96360006  lhu         $s6, 0x6($s1)
    ctx->pc = 0x2d1ffcu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d2000: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D2000u;
    SET_GPR_U32(ctx, 31, 0x2D2008u);
    ctx->pc = 0x2D2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2000u;
    // 0x2d2004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D2000u, 0x2D2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2008u;
label_2d2008:
    // 0x2d2008: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x2d2008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2d200c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D200Cu;
    SET_GPR_U32(ctx, 31, 0x2D2014u);
    ctx->pc = 0x2D2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D200Cu;
    // 0x2d2010: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D200Cu, 0x2D2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2014u;
label_2d2014:
    // 0x2d2014: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d201c: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D201Cu;
    SET_GPR_U32(ctx, 31, 0x2D2024u);
    ctx->pc = 0x2D2020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D201Cu;
    // 0x2d2020: 0xae82008c  sw          $v0, 0x8C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D201Cu, 0x2D2024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2024u;
label_2d2024:
    // 0x2d2024: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2028: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x2d2028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
    // 0x2d202c: 0x9636000a  lhu         $s6, 0xA($s1)
    ctx->pc = 0x2d202cu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2d2030: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x2D2030u;
    SET_GPR_U32(ctx, 31, 0x2D2038u);
    ctx->pc = 0x2D2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2030u;
    // 0x2d2034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x2D2030u, 0x2D2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2038u;
label_2d2038:
    // 0x2d2038: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x2d2038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2d203c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D203Cu;
    SET_GPR_U32(ctx, 31, 0x2D2044u);
    ctx->pc = 0x2D2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D203Cu;
    // 0x2d2040: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D203Cu, 0x2D2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2044u;
label_2d2044:
    // 0x2d2044: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d204c: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x2D204Cu;
    SET_GPR_U32(ctx, 31, 0x2D2054u);
    ctx->pc = 0x2D2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D204Cu;
    // 0x2d2050: 0xae82009c  sw          $v0, 0x9C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x2D204Cu, 0x2D2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2054u;
label_2d2054:
    // 0x2d2054: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d205c: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x2d205cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x2d2060: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x2d2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2d2064: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2d2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d2068: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2068u;
    {
        const bool branch_taken_0x2d2068 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2068u;
        // 0x2d206c: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2068) {
            ctx->pc = 0x2D20A0u;
            goto label_2d20a0;
        }
    }
    ctx->pc = 0x2D2070u;
    // 0x2d2070: 0x92a3065c  lbu         $v1, 0x65C($s5)
    ctx->pc = 0x2d2070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1628)));
    // 0x2d2074: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x2d2074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x2d2078: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2078u;
    {
        const bool branch_taken_0x2d2078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2078u;
        // 0x2d207c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2078) {
            ctx->pc = 0x2D2090u;
            goto label_2d2090;
        }
    }
    ctx->pc = 0x2D2080u;
    // 0x2d2080: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x2d2080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2d2084: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2084u;
    {
        const bool branch_taken_0x2d2084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2084) {
            ctx->pc = 0x2D2090u;
            goto label_2d2090;
        }
    }
    ctx->pc = 0x2D208Cu;
    // 0x2d208c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2090:
    // 0x2d2090: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2090u;
    {
        const bool branch_taken_0x2d2090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2090) {
            ctx->pc = 0x2D20A0u;
            goto label_2d20a0;
        }
    }
    ctx->pc = 0x2D2098u;
    // 0x2d2098: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2d2098u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d209c: 0x0  nop
    ctx->pc = 0x2d209cu;
    // NOP
label_2d20a0:
    // 0x2d20a0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D20A0u;
    {
        const bool branch_taken_0x2d20a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20A0u;
        // 0x2d20a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20a0) {
            ctx->pc = 0x2D20ACu;
            goto label_2d20ac;
        }
    }
    ctx->pc = 0x2D20A8u;
    // 0x2d20a8: 0x96a22aca  lhu         $v0, 0x2ACA($s5)
    ctx->pc = 0x2d20a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10954)));
label_2d20ac:
    // 0x2d20ac: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x2d20acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x2d20b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d20b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20b4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2d20b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d20b8:
    // 0x2d20b8: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x2d20b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2d20bc: 0xc0d2798  jal         func_349E60
    ctx->pc = 0x2D20BCu;
    SET_GPR_U32(ctx, 31, 0x2D20C4u);
    ctx->pc = 0x2D20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D20BCu;
    // 0x2d20c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E60u, 0x2D20BCu, 0x2D20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20C4u;
label_2d20c4:
    // 0x2d20c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d20c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d20c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2d20c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2d20cc: 0xaea200ac  sw          $v0, 0xAC($s5)
    ctx->pc = 0x2d20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 172), GPR_U32(ctx, 2));
    // 0x2d20d0: 0x2ec20003  sltiu       $v0, $s6, 0x3
    ctx->pc = 0x2d20d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d20d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D20D4u;
    {
        const bool branch_taken_0x2d20d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20D4u;
        // 0x2d20d8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20d4) {
            ctx->pc = 0x2D20B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d20b8;
        }
    }
    ctx->pc = 0x2D20DCu;
    // 0x2d20dc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D20DCu;
    {
        const bool branch_taken_0x2d20dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20DCu;
        // 0x2d20e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20dc) {
            ctx->pc = 0x2D20F8u;
            goto label_2d20f8;
        }
    }
    ctx->pc = 0x2D20E4u;
    // 0x2d20e4: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2D20E4u;
    SET_GPR_U32(ctx, 31, 0x2D20ECu);
    ctx->pc = 0x2D20E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D20E4u;
    // 0x2d20e8: 0x96240058  lhu         $a0, 0x58($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2D20E4u, 0x2D20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20ECu;
label_2d20ec:
    // 0x2d20ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D20ECu;
    {
        const bool branch_taken_0x2d20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20ec) {
            ctx->pc = 0x2D20F8u;
            goto label_2d20f8;
        }
    }
    ctx->pc = 0x2D20F4u;
    // 0x2d20f4: 0x90550010  lbu         $s5, 0x10($v0)
    ctx->pc = 0x2d20f4u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_2d20f8:
    // 0x2d20f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d20f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20fc: 0xc0b48a0  jal         func_2D2280
    ctx->pc = 0x2D20FCu;
    SET_GPR_U32(ctx, 31, 0x2D2104u);
    ctx->pc = 0x2D2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D20FCu;
    // 0x2d2100: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2280u, 0x2D20FCu, 0x2D2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2104u;
label_2d2104:
    // 0x2d2104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2108: 0xc0d2760  jal         func_349D80
    ctx->pc = 0x2D2108u;
    SET_GPR_U32(ctx, 31, 0x2D2110u);
    ctx->pc = 0x2D210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2108u;
    // 0x2d210c: 0xa2820045  sb          $v0, 0x45($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 69), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D80u, 0x2D2108u, 0x2D2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2110u;
label_2d2110:
    // 0x2d2110: 0xa28200d4  sb          $v0, 0xD4($s4)
    ctx->pc = 0x2d2110u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 212), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d2114: 0x0  nop
    ctx->pc = 0x2d2114u;
    // NOP
label_2d2118:
    // 0x2d2118: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D2118u;
    {
        const bool branch_taken_0x2d2118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2118) {
            ctx->pc = 0x2D2200u;
            goto label_2d2200;
        }
    }
    ctx->pc = 0x2D2120u;
    // 0x2d2120: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x2d2120u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2124: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D2124u;
    SET_GPR_U32(ctx, 31, 0x2D212Cu);
    ctx->pc = 0x2D2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2124u;
    // 0x2d2128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D2124u, 0x2D212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D212Cu;
label_2d212c:
    // 0x2d212c: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x2d212cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2d2130: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D2130u;
    SET_GPR_U32(ctx, 31, 0x2D2138u);
    ctx->pc = 0x2D2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2130u;
    // 0x2d2134: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D2130u, 0x2D2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2138u;
label_2d2138:
    // 0x2d2138: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d213c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2140: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D2140u;
    SET_GPR_U32(ctx, 31, 0x2D2148u);
    ctx->pc = 0x2D2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2140u;
    // 0x2d2144: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D2140u, 0x2D2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2148u;
label_2d2148:
    // 0x2d2148: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d214c: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x2d214cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x2d2150: 0x96110006  lhu         $s1, 0x6($s0)
    ctx->pc = 0x2d2150u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2d2154: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D2154u;
    SET_GPR_U32(ctx, 31, 0x2D215Cu);
    ctx->pc = 0x2D2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2154u;
    // 0x2d2158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D2154u, 0x2D215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D215Cu;
label_2d215c:
    // 0x2d215c: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x2d215cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2d2160: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D2160u;
    SET_GPR_U32(ctx, 31, 0x2D2168u);
    ctx->pc = 0x2D2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2160u;
    // 0x2d2164: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D2160u, 0x2D2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2168u;
label_2d2168:
    // 0x2d2168: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d216c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2170: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D2170u;
    SET_GPR_U32(ctx, 31, 0x2D2178u);
    ctx->pc = 0x2D2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2170u;
    // 0x2d2174: 0xae820090  sw          $v0, 0x90($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D2170u, 0x2D2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2178u;
label_2d2178:
    // 0x2d2178: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d217c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d217cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2180: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2180u;
    {
        const bool branch_taken_0x2d2180 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2180u;
        // 0x2d2184: 0xae820098  sw          $v0, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2180) {
            ctx->pc = 0x2D21B8u;
            goto label_2d21b8;
        }
    }
    ctx->pc = 0x2D2188u;
    // 0x2d2188: 0x9263065c  lbu         $v1, 0x65C($s3)
    ctx->pc = 0x2d2188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1628)));
    // 0x2d218c: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x2d218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x2d2190: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2190u;
    {
        const bool branch_taken_0x2d2190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2190u;
        // 0x2d2194: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2190) {
            ctx->pc = 0x2D21A8u;
            goto label_2d21a8;
        }
    }
    ctx->pc = 0x2D2198u;
    // 0x2d2198: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x2d2198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2d219c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D219Cu;
    {
        const bool branch_taken_0x2d219c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d219c) {
            ctx->pc = 0x2D21A8u;
            goto label_2d21a8;
        }
    }
    ctx->pc = 0x2D21A4u;
    // 0x2d21a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d21a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d21a8:
    // 0x2d21a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D21A8u;
    {
        const bool branch_taken_0x2d21a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21a8) {
            ctx->pc = 0x2D21B8u;
            goto label_2d21b8;
        }
    }
    ctx->pc = 0x2D21B0u;
    // 0x2d21b0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2d21b0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d21b4: 0x0  nop
    ctx->pc = 0x2d21b4u;
    // NOP
label_2d21b8:
    // 0x2d21b8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D21B8u;
    {
        const bool branch_taken_0x2d21b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B8u;
        // 0x2d21bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21b8) {
            ctx->pc = 0x2D21C4u;
            goto label_2d21c4;
        }
    }
    ctx->pc = 0x2D21C0u;
    // 0x2d21c0: 0x96622aca  lhu         $v0, 0x2ACA($s3)
    ctx->pc = 0x2d21c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10954)));
label_2d21c4:
    // 0x2d21c4: 0xae8200c8  sw          $v0, 0xC8($s4)
    ctx->pc = 0x2d21c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 2));
    // 0x2d21c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d21c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21cc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2d21ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d21d0:
    // 0x2d21d0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2d21d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2d21d4: 0xc0d2798  jal         func_349E60
    ctx->pc = 0x2D21D4u;
    SET_GPR_U32(ctx, 31, 0x2D21DCu);
    ctx->pc = 0x2D21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21D4u;
    // 0x2d21d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E60u, 0x2D21D4u, 0x2D21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21DCu;
label_2d21dc:
    // 0x2d21dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d21dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d21e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d21e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d21e4: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x2d21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x2d21e8: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2d21e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d21ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D21ECu;
    {
        const bool branch_taken_0x2d21ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21ECu;
        // 0x2d21f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21ec) {
            ctx->pc = 0x2D21D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d21d0;
        }
    }
    ctx->pc = 0x2D21F4u;
    // 0x2d21f4: 0xc0d2760  jal         func_349D80
    ctx->pc = 0x2D21F4u;
    SET_GPR_U32(ctx, 31, 0x2D21FCu);
    ctx->pc = 0x2D21F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21F4u;
    // 0x2d21f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D80u, 0x2D21F4u, 0x2D21FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21FCu;
label_2d21fc:
    // 0x2d21fc: 0xa28200d5  sb          $v0, 0xD5($s4)
    ctx->pc = 0x2d21fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 213), (uint8_t)GPR_U32(ctx, 2));
label_2d2200:
    // 0x2d2200: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x2d2200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2d2204: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d2204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d2208: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D2208u;
    SET_GPR_U32(ctx, 31, 0x2D2210u);
    ctx->pc = 0x2D220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2208u;
    // 0x2d220c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D2208u, 0x2D2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2210u;
label_2d2210:
    // 0x2d2210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2214: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2214u;
    {
        const bool branch_taken_0x2d2214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2214) {
            ctx->pc = 0x2D2240u;
            goto label_2d2240;
        }
    }
    ctx->pc = 0x2D221Cu;
    // 0x2d221c: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2d221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2d2220: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2220u;
    {
        const bool branch_taken_0x2d2220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2220) {
            ctx->pc = 0x2D2240u;
            goto label_2d2240;
        }
    }
    ctx->pc = 0x2D2228u;
    // 0x2d2228: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d2228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d222c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D222Cu;
    SET_GPR_U32(ctx, 31, 0x2D2234u);
    ctx->pc = 0x2D2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D222Cu;
    // 0x2d2230: 0xae8200cc  sw          $v0, 0xCC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D222Cu, 0x2D2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2234u;
label_2d2234:
    // 0x2d2234: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d2234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d2238: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x2d2238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
    // 0x2d223c: 0x0  nop
    ctx->pc = 0x2d223cu;
    // NOP
label_2d2240:
    // 0x2d2240: 0xa2920014  sb          $s2, 0x14($s4)
    ctx->pc = 0x2d2240u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d2244: 0xa2970015  sb          $s7, 0x15($s4)
    ctx->pc = 0x2d2244u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21), (uint8_t)GPR_U32(ctx, 23));
    // 0x2d2248: 0xa29e0018  sb          $fp, 0x18($s4)
    ctx->pc = 0x2d2248u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 30));
    // 0x2d224c: 0x0  nop
    ctx->pc = 0x2d224cu;
    // NOP
label_2d2250:
    // 0x2d2250: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d2250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d2254: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d2254u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2258: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d2258u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d225c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d225cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2260: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d2260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2264: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d2264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d2268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d226c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d226cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2278: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2278u;
        // 0x2d227c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2280u;
}
