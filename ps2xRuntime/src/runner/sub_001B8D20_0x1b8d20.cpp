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

// Function: sub_001B8D20
// Address: 0x1b8d20 - 0x1ba288
void sub_001B8D20_0x1b8d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8D20_0x1b8d20");
#endif

    switch (ctx->pc) {
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fd8u: goto label_1b8fd8;
        case 0x1b8fe8u: goto label_1b8fe8;
        case 0x1b8ff8u: goto label_1b8ff8;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b906cu: goto label_1b906c;
        case 0x1b9078u: goto label_1b9078;
        case 0x1b9084u: goto label_1b9084;
        case 0x1b9090u: goto label_1b9090;
        case 0x1b90a4u: goto label_1b90a4;
        case 0x1b910cu: goto label_1b910c;
        case 0x1b9174u: goto label_1b9174;
        case 0x1b9238u: goto label_1b9238;
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b9370u: goto label_1b9370;
        case 0x1b938cu: goto label_1b938c;
        case 0x1b93b0u: goto label_1b93b0;
        case 0x1b93d4u: goto label_1b93d4;
        case 0x1b9418u: goto label_1b9418;
        case 0x1b9420u: goto label_1b9420;
        case 0x1b944cu: goto label_1b944c;
        case 0x1b945cu: goto label_1b945c;
        case 0x1b946cu: goto label_1b946c;
        case 0x1b9478u: goto label_1b9478;
        case 0x1b94c8u: goto label_1b94c8;
        case 0x1b94dcu: goto label_1b94dc;
        case 0x1b9500u: goto label_1b9500;
        case 0x1b9514u: goto label_1b9514;
        case 0x1b952cu: goto label_1b952c;
        case 0x1b9564u: goto label_1b9564;
        case 0x1b956cu: goto label_1b956c;
        case 0x1b9584u: goto label_1b9584;
        case 0x1b95a0u: goto label_1b95a0;
        case 0x1b95bcu: goto label_1b95bc;
        case 0x1b95fcu: goto label_1b95fc;
        case 0x1b9604u: goto label_1b9604;
        case 0x1b9630u: goto label_1b9630;
        case 0x1b9640u: goto label_1b9640;
        case 0x1b9650u: goto label_1b9650;
        case 0x1b9658u: goto label_1b9658;
        case 0x1b96a8u: goto label_1b96a8;
        case 0x1b96bcu: goto label_1b96bc;
        case 0x1b96e0u: goto label_1b96e0;
        case 0x1b96f4u: goto label_1b96f4;
        case 0x1b970cu: goto label_1b970c;
        case 0x1b9740u: goto label_1b9740;
        case 0x1b9748u: goto label_1b9748;
        case 0x1b9760u: goto label_1b9760;
        case 0x1b977cu: goto label_1b977c;
        case 0x1b9798u: goto label_1b9798;
        case 0x1b97d8u: goto label_1b97d8;
        case 0x1b97e0u: goto label_1b97e0;
        case 0x1b980cu: goto label_1b980c;
        case 0x1b981cu: goto label_1b981c;
        case 0x1b982cu: goto label_1b982c;
        case 0x1b9838u: goto label_1b9838;
        case 0x1b9888u: goto label_1b9888;
        case 0x1b989cu: goto label_1b989c;
        case 0x1b98c0u: goto label_1b98c0;
        case 0x1b98d4u: goto label_1b98d4;
        case 0x1b98ecu: goto label_1b98ec;
        case 0x1b9920u: goto label_1b9920;
        case 0x1b9994u: goto label_1b9994;
        case 0x1b99e8u: goto label_1b99e8;
        case 0x1b99f0u: goto label_1b99f0;
        case 0x1b9a28u: goto label_1b9a28;
        case 0x1b9a30u: goto label_1b9a30;
        case 0x1b9a48u: goto label_1b9a48;
        case 0x1b9a64u: goto label_1b9a64;
        case 0x1b9a80u: goto label_1b9a80;
        case 0x1b9ac0u: goto label_1b9ac0;
        case 0x1b9ad0u: goto label_1b9ad0;
        case 0x1b9aecu: goto label_1b9aec;
        case 0x1b9afcu: goto label_1b9afc;
        case 0x1b9b10u: goto label_1b9b10;
        case 0x1b9b48u: goto label_1b9b48;
        case 0x1b9b84u: goto label_1b9b84;
        case 0x1b9bd4u: goto label_1b9bd4;
        case 0x1b9bf4u: goto label_1b9bf4;
        case 0x1b9c00u: goto label_1b9c00;
        case 0x1b9c10u: goto label_1b9c10;
        case 0x1b9ce0u: goto label_1b9ce0;
        case 0x1b9d38u: goto label_1b9d38;
        case 0x1b9d68u: goto label_1b9d68;
        case 0x1b9d94u: goto label_1b9d94;
        case 0x1b9da4u: goto label_1b9da4;
        case 0x1b9db0u: goto label_1b9db0;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9ef0u: goto label_1b9ef0;
        case 0x1b9f1cu: goto label_1b9f1c;
        case 0x1b9f90u: goto label_1b9f90;
        case 0x1b9fa0u: goto label_1b9fa0;
        case 0x1b9fccu: goto label_1b9fcc;
        case 0x1ba06cu: goto label_1ba06c;
        case 0x1ba110u: goto label_1ba110;
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba244u: goto label_1ba244;
        case 0x1ba250u: goto label_1ba250;
        default: break;
    }

    ctx->pc = 0x1b8d20u;

    // 0x1b8d20: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1b8d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b8d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b8d2c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b8d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b8d30: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b8d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1b8d34: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b8d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1b8d38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1b8d3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b8d40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b8d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b8d44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b8d48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b8d4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b8d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b8d54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b8d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d60: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b8d60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b8d64: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B8D64u;
    SET_GPR_U32(ctx, 31, 0x1B8D6Cu);
    ctx->pc = 0x1B8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D64u;
    // 0x1b8d68: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B8D64u, 0x1B8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D6Cu;
label_1b8d6c:
    // 0x1b8d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d70: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b8d74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8d78: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b8d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b8d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b8d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d80: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b8d84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8D84u;
    SET_GPR_U32(ctx, 31, 0x1B8D8Cu);
    ctx->pc = 0x1B8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D84u;
    // 0x1b8d88: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8D84u, 0x1B8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D8Cu;
label_1b8d8c:
    // 0x1b8d8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d90: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b8d94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8D94u;
    SET_GPR_U32(ctx, 31, 0x1B8D9Cu);
    ctx->pc = 0x1B8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D94u;
    // 0x1b8d98: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8D94u, 0x1B8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D9Cu;
label_1b8d9c:
    // 0x1b8d9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b8d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8da0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b8da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b8da4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8DA4u;
    SET_GPR_U32(ctx, 31, 0x1B8DACu);
    ctx->pc = 0x1B8DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DA4u;
    // 0x1b8da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8DA4u, 0x1B8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DACu;
label_1b8dac:
    // 0x1b8dac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8db0: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1b8db4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b8db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8dbc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b8dc0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8DC0u;
    SET_GPR_U32(ctx, 31, 0x1B8DC8u);
    ctx->pc = 0x1B8DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DC0u;
    // 0x1b8dc4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8DC0u, 0x1B8DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DC8u;
label_1b8dc8:
    // 0x1b8dc8: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b8dcc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8DCCu;
    {
        const bool branch_taken_0x1b8dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DCCu;
        // 0x1b8dd0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dcc) {
            ctx->pc = 0x1B8DF0u;
            goto label_1b8df0;
        }
    }
    ctx->pc = 0x1B8DD4u;
label_1b8dd4:
    // 0x1b8dd4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b8dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8dd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b8ddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b8de0: 0x0  nop
    ctx->pc = 0x1b8de0u;
    // NOP
    // 0x1b8de4: 0x0  nop
    ctx->pc = 0x1b8de4u;
    // NOP
    // 0x1b8de8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B8DE8u;
    {
        const bool branch_taken_0x1b8de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8de8) {
            ctx->pc = 0x1B8DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8dd4;
        }
    }
    ctx->pc = 0x1B8DF0u;
label_1b8df0:
    // 0x1b8df0: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x1b8df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1b8df4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8df8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8dfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8DFCu;
    {
        const bool branch_taken_0x1b8dfc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B8E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DFCu;
        // 0x1b8e00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dfc) {
            ctx->pc = 0x1B8E10u;
            goto label_1b8e10;
        }
    }
    ctx->pc = 0x1B8E04u;
    // 0x1b8e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8E08u;
    {
        const bool branch_taken_0x1b8e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E08u;
        // 0x1b8e0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e08) {
            ctx->pc = 0x1B8E28u;
            goto label_1b8e28;
        }
    }
    ctx->pc = 0x1B8E10u;
label_1b8e10:
    // 0x1b8e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8e14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b8e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e1c: 0x0  nop
    ctx->pc = 0x1b8e1cu;
    // NOP
    // 0x1b8e20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8e24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8e28:
    // 0x1b8e28: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x1b8e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x1b8e2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8e30: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1b8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1b8e34: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1b8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b8e38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b8e3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8e40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8E40u;
    {
        const bool branch_taken_0x1b8e40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E40u;
        // 0x1b8e44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e40) {
            ctx->pc = 0x1B8E54u;
            goto label_1b8e54;
        }
    }
    ctx->pc = 0x1B8E48u;
    // 0x1b8e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8E4Cu;
    {
        const bool branch_taken_0x1b8e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E4Cu;
        // 0x1b8e50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e4c) {
            ctx->pc = 0x1B8E6Cu;
            goto label_1b8e6c;
        }
    }
    ctx->pc = 0x1B8E54u;
label_1b8e54:
    // 0x1b8e54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8e58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b8e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e60: 0x0  nop
    ctx->pc = 0x1b8e60u;
    // NOP
    // 0x1b8e64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8e68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8e6c:
    // 0x1b8e6c: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x1b8e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x1b8e70: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8e74: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1b8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1b8e78: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1b8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1b8e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b8e80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8e84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8E84u;
    {
        const bool branch_taken_0x1b8e84 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E84u;
        // 0x1b8e88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e84) {
            ctx->pc = 0x1B8E98u;
            goto label_1b8e98;
        }
    }
    ctx->pc = 0x1B8E8Cu;
    // 0x1b8e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8E90u;
    {
        const bool branch_taken_0x1b8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E90u;
        // 0x1b8e94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e90) {
            ctx->pc = 0x1B8EB0u;
            goto label_1b8eb0;
        }
    }
    ctx->pc = 0x1B8E98u;
label_1b8e98:
    // 0x1b8e98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8e9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b8e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8ea4: 0x0  nop
    ctx->pc = 0x1b8ea4u;
    // NOP
    // 0x1b8ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8eac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8eb0:
    // 0x1b8eb0: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x1b8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b8eb4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b8eb8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8EB8u;
    {
        const bool branch_taken_0x1b8eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EB8u;
        // 0x1b8ebc: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8eb8) {
            ctx->pc = 0x1B8EDCu;
            goto label_1b8edc;
        }
    }
    ctx->pc = 0x1B8EC0u;
label_1b8ec0:
    // 0x1b8ec0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b8ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b8ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b8ecc: 0x0  nop
    ctx->pc = 0x1b8eccu;
    // NOP
    // 0x1b8ed0: 0x0  nop
    ctx->pc = 0x1b8ed0u;
    // NOP
    // 0x1b8ed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B8ED4u;
    {
        const bool branch_taken_0x1b8ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ed4) {
            ctx->pc = 0x1B8EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8ec0;
        }
    }
    ctx->pc = 0x1B8EDCu;
label_1b8edc:
    // 0x1b8edc: 0x9243001c  lbu         $v1, 0x1C($s2)
    ctx->pc = 0x1b8edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1b8ee0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8ee4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8ee8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8EE8u;
    {
        const bool branch_taken_0x1b8ee8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ee8) {
            ctx->pc = 0x1B8EFCu;
            goto label_1b8efc;
        }
    }
    ctx->pc = 0x1B8EF0u;
    // 0x1b8ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8ef4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8EF4u;
    {
        const bool branch_taken_0x1b8ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EF4u;
        // 0x1b8ef8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ef4) {
            ctx->pc = 0x1B8F14u;
            goto label_1b8f14;
        }
    }
    ctx->pc = 0x1B8EFCu;
label_1b8efc:
    // 0x1b8efc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8f00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b8f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f08: 0x0  nop
    ctx->pc = 0x1b8f08u;
    // NOP
    // 0x1b8f0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8f10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8f14:
    // 0x1b8f14: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x1b8f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1b8f18: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8f1c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1b8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1b8f20: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1b8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1b8f24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b8f28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8f2c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F2Cu;
    {
        const bool branch_taken_0x1b8f2c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F2Cu;
        // 0x1b8f30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f2c) {
            ctx->pc = 0x1B8F40u;
            goto label_1b8f40;
        }
    }
    ctx->pc = 0x1B8F34u;
    // 0x1b8f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8F38u;
    {
        const bool branch_taken_0x1b8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F38u;
        // 0x1b8f3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f38) {
            ctx->pc = 0x1B8F58u;
            goto label_1b8f58;
        }
    }
    ctx->pc = 0x1B8F40u;
label_1b8f40:
    // 0x1b8f40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8f44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b8f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f4c: 0x0  nop
    ctx->pc = 0x1b8f4cu;
    // NOP
    // 0x1b8f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8f54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8f58:
    // 0x1b8f58: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x1b8f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x1b8f5c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b8f60: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1b8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1b8f64: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1b8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1b8f68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b8f6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8f70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F70u;
    {
        const bool branch_taken_0x1b8f70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F70u;
        // 0x1b8f74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f70) {
            ctx->pc = 0x1B8F84u;
            goto label_1b8f84;
        }
    }
    ctx->pc = 0x1B8F78u;
    // 0x1b8f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8F7Cu;
    {
        const bool branch_taken_0x1b8f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F7Cu;
        // 0x1b8f80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f7c) {
            ctx->pc = 0x1B8F9Cu;
            goto label_1b8f9c;
        }
    }
    ctx->pc = 0x1B8F84u;
label_1b8f84:
    // 0x1b8f84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8f88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b8f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f90: 0x0  nop
    ctx->pc = 0x1b8f90u;
    // NOP
    // 0x1b8f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8f98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b8f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b8f9c:
    // 0x1b8f9c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1b8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1b8fa0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1b8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b8fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8fa8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b8fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fac: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1B8FACu;
    SET_GPR_U32(ctx, 31, 0x1B8FB4u);
    ctx->pc = 0x1B8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FACu;
    // 0x1b8fb0: 0xe7a001f8  swc1        $f0, 0x1F8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1B8FACu, 0x1B8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FB4u;
label_1b8fb4:
    // 0x1b8fb4: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1b8fb8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b8fbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8fc0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1B8FC0u;
    SET_GPR_U32(ctx, 31, 0x1B8FC8u);
    ctx->pc = 0x1B8FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FC0u;
    // 0x1b8fc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1B8FC0u, 0x1B8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FC8u;
label_1b8fc8:
    // 0x1b8fc8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1b8fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b8fcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b8fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fd0: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1B8FD0u;
    SET_GPR_U32(ctx, 31, 0x1B8FD8u);
    ctx->pc = 0x1B8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FD0u;
    // 0x1b8fd4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1B8FD0u, 0x1B8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FD8u;
label_1b8fd8:
    // 0x1b8fd8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1b8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b8fdc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b8fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fe0: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1B8FE0u;
    SET_GPR_U32(ctx, 31, 0x1B8FE8u);
    ctx->pc = 0x1B8FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FE0u;
    // 0x1b8fe4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1B8FE0u, 0x1B8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FE8u;
label_1b8fe8:
    // 0x1b8fe8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1b8fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b8fec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b8fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ff0: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1B8FF0u;
    SET_GPR_U32(ctx, 31, 0x1B8FF8u);
    ctx->pc = 0x1B8FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FF0u;
    // 0x1b8ff4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1B8FF0u, 0x1B8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF8u;
label_1b8ff8:
    // 0x1b8ff8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1b8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b8ffc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b8ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9000: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1B9000u;
    SET_GPR_U32(ctx, 31, 0x1B9008u);
    ctx->pc = 0x1B9004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9000u;
    // 0x1b9004: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1B9000u, 0x1B9008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9008u;
label_1b9008:
    // 0x1b9008: 0xc7a50200  lwc1        $f5, 0x200($sp)
    ctx->pc = 0x1b9008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b900c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9010: 0xc7a40204  lwc1        $f4, 0x204($sp)
    ctx->pc = 0x1b9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9014: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1b9014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1b9018: 0xc7a30208  lwc1        $f3, 0x208($sp)
    ctx->pc = 0x1b9018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b901c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1b901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b9020: 0xc7a201f0  lwc1        $f2, 0x1F0($sp)
    ctx->pc = 0x1b9020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9024: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1b9024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b9028: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1b9028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b902c: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x1b902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9030: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x1b9030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9034: 0x46053143  div.s       $f5, $f6, $f5
    ctx->pc = 0x1b9034u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[6], ctx->f[5]); }
    // 0x1b9038: 0x46043103  div.s       $f4, $f6, $f4
    ctx->pc = 0x1b9038u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[6], ctx->f[4]); }
    // 0x1b903c: 0x460330c3  div.s       $f3, $f6, $f3
    ctx->pc = 0x1b903cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[6], ctx->f[3]); }
    // 0x1b9040: 0x46023083  div.s       $f2, $f6, $f2
    ctx->pc = 0x1b9040u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[6], ctx->f[2]); }
    // 0x1b9044: 0x46013043  div.s       $f1, $f6, $f1
    ctx->pc = 0x1b9044u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x1b9048: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x1b9048u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x1b904c: 0xe7a50200  swc1        $f5, 0x200($sp)
    ctx->pc = 0x1b904cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x1b9050: 0xe7a40204  swc1        $f4, 0x204($sp)
    ctx->pc = 0x1b9050u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x1b9054: 0xe7a30208  swc1        $f3, 0x208($sp)
    ctx->pc = 0x1b9054u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x1b9058: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x1b9058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1b905c: 0x0  nop
    ctx->pc = 0x1b905cu;
    // NOP
    // 0x1b9060: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x1b9060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x1b9064: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1B9064u;
    SET_GPR_U32(ctx, 31, 0x1B906Cu);
    ctx->pc = 0x1B9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9064u;
    // 0x1b9068: 0xe7a001f8  swc1        $f0, 0x1F8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1B9064u, 0x1B906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B906Cu;
label_1b906c:
    // 0x1b906c: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x1b906cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x1b9070: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1B9070u;
    {
        const bool branch_taken_0x1b9070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9070u;
        // 0x1b9074: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9070) {
            ctx->pc = 0x1B9218u;
            goto label_1b9218;
        }
    }
    ctx->pc = 0x1B9078u;
label_1b9078:
    // 0x1b9078: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x1b9078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1b907c: 0xc07051c  jal         func_1C1470
    ctx->pc = 0x1B907Cu;
    SET_GPR_U32(ctx, 31, 0x1B9084u);
    ctx->pc = 0x1B9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B907Cu;
    // 0x1b9080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1470u, 0x1B907Cu, 0x1B9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9084u;
label_1b9084:
    // 0x1b9084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9088: 0xc070550  jal         func_1C1540
    ctx->pc = 0x1B9088u;
    SET_GPR_U32(ctx, 31, 0x1B9090u);
    ctx->pc = 0x1B908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9088u;
    // 0x1b908c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1540u, 0x1B9088u, 0x1B9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9090u;
label_1b9090:
    // 0x1b9090: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b9090u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9094: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x1b9094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9098: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b9098u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b909c: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x1B909Cu;
    SET_GPR_U32(ctx, 31, 0x1B90A4u);
    ctx->pc = 0x1B90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B909Cu;
    // 0x1b90a0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x1B909Cu, 0x1B90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B90A4u;
label_1b90a4:
    // 0x1b90a4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b90a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1b90ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b90acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b90b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b90b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b90b4: 0x0  nop
    ctx->pc = 0x1b90b4u;
    // NOP
    // 0x1b90b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b90b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b90bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b90bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b90c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B90C0u;
    {
        const bool branch_taken_0x1b90c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b90c0) {
            ctx->pc = 0x1B90D8u;
            goto label_1b90d8;
        }
    }
    ctx->pc = 0x1B90C8u;
    // 0x1b90c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b90c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b90cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b90ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b90d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B90D0u;
    {
        const bool branch_taken_0x1b90d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B90D0u;
        // 0x1b90d4: 0xc7a001e4  lwc1        $f0, 0x1E4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90d0) {
            ctx->pc = 0x1B90F4u;
            goto label_1b90f4;
        }
    }
    ctx->pc = 0x1B90D8u;
label_1b90d8:
    // 0x1b90d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b90d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b90dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b90e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b90e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b90e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b90e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b90e8: 0x0  nop
    ctx->pc = 0x1b90e8u;
    // NOP
    // 0x1b90ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b90ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b90f0: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1b90f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b90f4:
    // 0x1b90f4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1b90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1b90f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b90f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b90fc: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b9100: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1b9100u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b9104: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x1B9104u;
    SET_GPR_U32(ctx, 31, 0x1B910Cu);
    ctx->pc = 0x1B9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9104u;
    // 0x1b9108: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x1B9104u, 0x1B910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B910Cu;
label_1b910c:
    // 0x1b910c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b9110: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1b9114: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b911c: 0x0  nop
    ctx->pc = 0x1b911cu;
    // NOP
    // 0x1b9120: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b9120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b9124: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9128: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9128u;
    {
        const bool branch_taken_0x1b9128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9128) {
            ctx->pc = 0x1B9140u;
            goto label_1b9140;
        }
    }
    ctx->pc = 0x1B9130u;
    // 0x1b9130: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b9134: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b9134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b9138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9138u;
    {
        const bool branch_taken_0x1b9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9138u;
        // 0x1b913c: 0xc7a001e8  lwc1        $f0, 0x1E8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9138) {
            ctx->pc = 0x1B915Cu;
            goto label_1b915c;
        }
    }
    ctx->pc = 0x1B9140u;
label_1b9140:
    // 0x1b9140: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9144: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b9144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b9148: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b914c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b914cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b9150: 0x0  nop
    ctx->pc = 0x1b9150u;
    // NOP
    // 0x1b9154: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b9154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9158: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1b9158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b915c:
    // 0x1b915c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1b915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1b9160: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b9160u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b9164: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b9164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b9168: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1b9168u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b916c: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x1B916Cu;
    SET_GPR_U32(ctx, 31, 0x1B9174u);
    ctx->pc = 0x1B9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B916Cu;
    // 0x1b9170: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x1B916Cu, 0x1B9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9174u;
label_1b9174:
    // 0x1b9174: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b9178: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b9178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1b917c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b917cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9184: 0x0  nop
    ctx->pc = 0x1b9184u;
    // NOP
    // 0x1b9188: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b9188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b918c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b918cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9190u;
    {
        const bool branch_taken_0x1b9190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9190) {
            ctx->pc = 0x1B91A8u;
            goto label_1b91a8;
        }
    }
    ctx->pc = 0x1B9198u;
    // 0x1b9198: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b919c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b919cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b91a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B91A0u;
    {
        const bool branch_taken_0x1b91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91A0u;
        // 0x1b91a4: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91a0) {
            ctx->pc = 0x1B91C4u;
            goto label_1b91c4;
        }
    }
    ctx->pc = 0x1B91A8u;
label_1b91a8:
    // 0x1b91a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b91a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b91ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b91acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b91b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b91b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b91b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b91b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b91b8: 0x0  nop
    ctx->pc = 0x1b91b8u;
    // NOP
    // 0x1b91bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b91bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b91c0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1b91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1b91c4:
    // 0x1b91c4: 0x2e210081  sltiu       $at, $s1, 0x81
    ctx->pc = 0x1b91c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1b91c8: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b91cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B91CCu;
    {
        const bool branch_taken_0x1b91cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91CCu;
        // 0x1b91d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91cc) {
            ctx->pc = 0x1B91D8u;
            goto label_1b91d8;
        }
    }
    ctx->pc = 0x1B91D4u;
    // 0x1b91d4: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1b91d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b91d8:
    // 0x1b91d8: 0x2e010081  sltiu       $at, $s0, 0x81
    ctx->pc = 0x1b91d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1b91dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B91DCu;
    {
        const bool branch_taken_0x1b91dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b91dc) {
            ctx->pc = 0x1B91E8u;
            goto label_1b91e8;
        }
    }
    ctx->pc = 0x1B91E4u;
    // 0x1b91e4: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b91e8:
    // 0x1b91e8: 0x2c410081  sltiu       $at, $v0, 0x81
    ctx->pc = 0x1b91e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1b91ec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B91ECu;
    {
        const bool branch_taken_0x1b91ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b91ec) {
            ctx->pc = 0x1B91F8u;
            goto label_1b91f8;
        }
    }
    ctx->pc = 0x1B91F4u;
    // 0x1b91f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b91f8:
    // 0x1b91f8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1b91f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b91fc: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1b91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1b9200: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1b9204: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1b9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b9208: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b9208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b920c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b9210: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b9214: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b9214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1b9218:
    // 0x1b9218: 0x8e6278b4  lw          $v0, 0x78B4($s3)
    ctx->pc = 0x1b9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30900)));
    // 0x1b921c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b9220: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1b9220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b9224: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1B9224u;
    {
        const bool branch_taken_0x1b9224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9224u;
        // 0x1b9228: 0x240400fa  addiu       $a0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9224) {
            ctx->pc = 0x1B9078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9078;
        }
    }
    ctx->pc = 0x1B922Cu;
    // 0x1b922c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B922Cu;
    {
        const bool branch_taken_0x1b922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b922c) {
            ctx->pc = 0x1B9250u;
            goto label_1b9250;
        }
    }
    ctx->pc = 0x1B9234u;
    // 0x1b9234: 0x0  nop
    ctx->pc = 0x1b9234u;
    // NOP
label_1b9238:
    // 0x1b9238: 0x8e8303e4  lw          $v1, 0x3E4($s4)
    ctx->pc = 0x1b9238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 996)));
    // 0x1b923c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b923cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b9240: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b9240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b9244: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b9244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b9248: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b9248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b924c: 0x0  nop
    ctx->pc = 0x1b924cu;
    // NOP
label_1b9250:
    // 0x1b9250: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x1b9250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b9254: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B9254u;
    {
        const bool branch_taken_0x1b9254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9254u;
        // 0x1b9258: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9254) {
            ctx->pc = 0x1B9238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9238;
        }
    }
    ctx->pc = 0x1B925Cu;
    // 0x1b925c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b925cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9260: 0x34710400  ori         $s1, $v1, 0x400
    ctx->pc = 0x1b9260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1b9264: 0x34700800  ori         $s0, $v1, 0x800
    ctx->pc = 0x1b9264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1b9268: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B9268u;
    {
        const bool branch_taken_0x1b9268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9268u;
        // 0x1b926c: 0x34760c00  ori         $s6, $v1, 0xC00 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9268) {
            ctx->pc = 0x1B92C0u;
            goto label_1b92c0;
        }
    }
    ctx->pc = 0x1B9270u;
label_1b9270:
    // 0x1b9270: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b9270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9274: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x1b9274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1b9278: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x1b9278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b927c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x1b927cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b9280: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1b9280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b9284: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1b9284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1b9288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b928c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1b928cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1b9290: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1b9290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1b9294: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b9298: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x1b9298u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1b929c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1b929cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b92a0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1b92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1b92a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1b92a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1b92a8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1b92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b92ac: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1b92b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1b92b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b92b4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1b92b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b92bc: 0x0  nop
    ctx->pc = 0x1b92bcu;
    // NOP
label_1b92c0:
    // 0x1b92c0: 0x8e6378b4  lw          $v1, 0x78B4($s3)
    ctx->pc = 0x1b92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30900)));
    // 0x1b92c4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b92c8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1b92c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b92cc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B92CCu;
    {
        const bool branch_taken_0x1b92cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b92cc) {
            ctx->pc = 0x1B9270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9270;
        }
    }
    ctx->pc = 0x1B92D4u;
    // 0x1b92d4: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x1b92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b92d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b92dc: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x1b92dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b92e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b92e4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b92e8: 0x2414ff00  addiu       $s4, $zero, -0x100
    ctx->pc = 0x1b92e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1b92ec: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1b92ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x1b92f0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1b92f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b92f4: 0x347500ff  ori         $s5, $v1, 0xFF
    ctx->pc = 0x1b92f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x1b92f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b92f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b92fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B92FCu;
    {
        const bool branch_taken_0x1b92fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92FCu;
        // 0x1b9300: 0x3457ffff  ori         $s7, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92fc) {
            ctx->pc = 0x1B9310u;
            goto label_1b9310;
        }
    }
    ctx->pc = 0x1B9304u;
    // 0x1b9304: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1b9304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1b9308: 0x295a024  and         $s4, $s4, $s5
    ctx->pc = 0x1b9308u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 21));
    // 0x1b930c: 0x0  nop
    ctx->pc = 0x1b930cu;
    // NOP
label_1b9310:
    // 0x1b9310: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x1b9310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9314: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1b9314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9318: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b9318u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b931c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B931Cu;
    {
        const bool branch_taken_0x1b931c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b931c) {
            ctx->pc = 0x1B9330u;
            goto label_1b9330;
        }
    }
    ctx->pc = 0x1B9324u;
    // 0x1b9324: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b9324u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9328: 0x297a024  and         $s4, $s4, $s7
    ctx->pc = 0x1b9328u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 23));
    // 0x1b932c: 0x0  nop
    ctx->pc = 0x1b932cu;
    // NOP
label_1b9330:
    // 0x1b9330: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x1b9330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9334: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1b9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9338: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b9338u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b933c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B933Cu;
    {
        const bool branch_taken_0x1b933c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b933c) {
            ctx->pc = 0x1B9350u;
            goto label_1b9350;
        }
    }
    ctx->pc = 0x1B9344u;
    // 0x1b9344: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b9344u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9348: 0x2b7a824  and         $s5, $s5, $s7
    ctx->pc = 0x1b9348u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 23));
    // 0x1b934c: 0x0  nop
    ctx->pc = 0x1b934cu;
    // NOP
label_1b9350:
    // 0x1b9350: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1B9350u;
    {
        const bool branch_taken_0x1b9350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9350) {
            ctx->pc = 0x1B9548u;
            goto label_1b9548;
        }
    }
    ctx->pc = 0x1B9358u;
    // 0x1b9358: 0x8e6578d0  lw          $a1, 0x78D0($s3)
    ctx->pc = 0x1b9358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b935c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9360: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B9360u;
    SET_GPR_U32(ctx, 31, 0x1B9368u);
    ctx->pc = 0x1B9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9360u;
    // 0x1b9364: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B9360u, 0x1B9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9368u;
label_1b9368:
    // 0x1b9368: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1B9368u;
    SET_GPR_U32(ctx, 31, 0x1B9370u);
    ctx->pc = 0x1B936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9368u;
    // 0x1b936c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1B9368u, 0x1B9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9370u;
label_1b9370:
    // 0x1b9370: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9378: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b9378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b937c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b9380: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9384: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1B9384u;
    SET_GPR_U32(ctx, 31, 0x1B938Cu);
    ctx->pc = 0x1B9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9384u;
    // 0x1b9388: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1B9384u, 0x1B938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B938Cu;
label_1b938c:
    // 0x1b938c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9394: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9398: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b939c: 0x21d38  dsll        $v1, $v0, 20
    ctx->pc = 0x1b939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 20);
    // 0x1b93a0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1b93a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b93a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b93a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b93a8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B93A8u;
    SET_GPR_U32(ctx, 31, 0x1B93B0u);
    ctx->pc = 0x1B93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93A8u;
    // 0x1b93ac: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B93A8u, 0x1B93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93B0u;
label_1b93b0:
    // 0x1b93b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b93b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b93b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b93b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b93b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b93bc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b93bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b93c0: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x1b93c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x1b93c4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1b93c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b93c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b93c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b93cc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B93CCu;
    SET_GPR_U32(ctx, 31, 0x1B93D4u);
    ctx->pc = 0x1B93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93CCu;
    // 0x1b93d0: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B93CCu, 0x1B93D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93D4u;
label_1b93d4:
    // 0x1b93d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b93d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b93d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b93d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b93dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b93e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b93e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b93e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b93e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b93e8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b93e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b93ec: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1b93ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b93f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b93f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b93f4: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1b93f4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b93f8: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x1b93f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b93fc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b9400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9408: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b9408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b940c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b9410: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9410u;
    SET_GPR_U32(ctx, 31, 0x1B9418u);
    ctx->pc = 0x1B9414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9410u;
    // 0x1b9414: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9410u, 0x1B9418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9418u;
label_1b9418:
    // 0x1b9418: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B9418u;
    SET_GPR_U32(ctx, 31, 0x1B9420u);
    ctx->pc = 0x1B941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9418u;
    // 0x1b941c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B9418u, 0x1B9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9420u;
label_1b9420:
    // 0x1b9420: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b9420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9424: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1b9424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1b9428: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b9428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b942c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b942cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b9430: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9434: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b9434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b9438: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b943c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9440: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1b9440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b9444: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9444u;
    SET_GPR_U32(ctx, 31, 0x1B944Cu);
    ctx->pc = 0x1B9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9444u;
    // 0x1b9448: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9444u, 0x1B944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B944Cu;
label_1b944c:
    // 0x1b944c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9454: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9454u;
    SET_GPR_U32(ctx, 31, 0x1B945Cu);
    ctx->pc = 0x1B9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9454u;
    // 0x1b9458: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9454u, 0x1B945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B945Cu;
label_1b945c:
    // 0x1b945c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9460: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b9464: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9464u;
    SET_GPR_U32(ctx, 31, 0x1B946Cu);
    ctx->pc = 0x1B9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9464u;
    // 0x1b9468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9464u, 0x1B946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B946Cu;
label_1b946c:
    // 0x1b946c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B946Cu;
    {
        const bool branch_taken_0x1b946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B946Cu;
        // 0x1b9470: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b946c) {
            ctx->pc = 0x1B9530u;
            goto label_1b9530;
        }
    }
    ctx->pc = 0x1B9474u;
    // 0x1b9474: 0x0  nop
    ctx->pc = 0x1b9474u;
    // NOP
label_1b9478:
    // 0x1b9478: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1b9478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1b947c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1b947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b9480: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b9480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b9484: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9488: 0x9e6378c0  lwu         $v1, 0x78C0($s3)
    ctx->pc = 0x1b9488u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30912)));
    // 0x1b948c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9490: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b9490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b9494: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x1b9494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x1b9498: 0x8e6278c4  lw          $v0, 0x78C4($s3)
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30916)));
    // 0x1b949c: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x1b949cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b94a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b94a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94a4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b94a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b94a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b94ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b94acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b94b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b94b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b94b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b94b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b94b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b94bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b94bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b94c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B94C0u;
    SET_GPR_U32(ctx, 31, 0x1B94C8u);
    ctx->pc = 0x1B94C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94C0u;
    // 0x1b94c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B94C0u, 0x1B94C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94C8u;
label_1b94c8:
    // 0x1b94c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b94cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b94ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b94d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B94D4u;
    SET_GPR_U32(ctx, 31, 0x1B94DCu);
    ctx->pc = 0x1B94D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94D4u;
    // 0x1b94d8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B94D4u, 0x1B94DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94DCu;
label_1b94dc:
    // 0x1b94dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b94e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b94e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b94e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b94e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b94e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b94ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b94ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b94f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b94f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b94f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b94f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B94F8u;
    SET_GPR_U32(ctx, 31, 0x1B9500u);
    ctx->pc = 0x1B94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94F8u;
    // 0x1b94fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B94F8u, 0x1B9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9500u;
label_1b9500:
    // 0x1b9500: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b9500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b9504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9508: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b9508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b950c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B950Cu;
    SET_GPR_U32(ctx, 31, 0x1B9514u);
    ctx->pc = 0x1B9510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B950Cu;
    // 0x1b9510: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B950Cu, 0x1B9514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9514u;
label_1b9514:
    // 0x1b9514: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b9518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b951c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b9520: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b9520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9524: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9524u;
    SET_GPR_U32(ctx, 31, 0x1B952Cu);
    ctx->pc = 0x1B9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9524u;
    // 0x1b9528: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9524u, 0x1B952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B952Cu;
label_1b952c:
    // 0x1b952c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b9530:
    // 0x1b9530: 0x8e6278c8  lw          $v0, 0x78C8($s3)
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1b9534: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b9538: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b9538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b953c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B953Cu;
    {
        const bool branch_taken_0x1b953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b953c) {
            ctx->pc = 0x1B9478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9478;
        }
    }
    ctx->pc = 0x1B9544u;
    // 0x1b9544: 0x0  nop
    ctx->pc = 0x1b9544u;
    // NOP
label_1b9548:
    // 0x1b9548: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b954c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1B954Cu;
    {
        const bool branch_taken_0x1b954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b954c) {
            ctx->pc = 0x1B9728u;
            goto label_1b9728;
        }
    }
    ctx->pc = 0x1B9554u;
    // 0x1b9554: 0x8e6578d0  lw          $a1, 0x78D0($s3)
    ctx->pc = 0x1b9554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b9558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b955c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B955Cu;
    SET_GPR_U32(ctx, 31, 0x1B9564u);
    ctx->pc = 0x1B9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B955Cu;
    // 0x1b9560: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B955Cu, 0x1B9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9564u;
label_1b9564:
    // 0x1b9564: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1B9564u;
    SET_GPR_U32(ctx, 31, 0x1B956Cu);
    ctx->pc = 0x1B9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9564u;
    // 0x1b9568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1B9564u, 0x1B956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B956Cu;
label_1b956c:
    // 0x1b956c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9574: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b9574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b9578: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b957c: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1B957Cu;
    SET_GPR_U32(ctx, 31, 0x1B9584u);
    ctx->pc = 0x1B9580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B957Cu;
    // 0x1b9580: 0x62a025  or          $s4, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1B957Cu, 0x1B9584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9584u;
label_1b9584:
    // 0x1b9584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b958c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9590: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b9594: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1b9594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1b9598: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B9598u;
    SET_GPR_U32(ctx, 31, 0x1B95A0u);
    ctx->pc = 0x1B959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9598u;
    // 0x1b959c: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B9598u, 0x1B95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95A0u;
label_1b95a0:
    // 0x1b95a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b95a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b95a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b95a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b95a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b95ac: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b95b0: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1b95b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1b95b4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B95B4u;
    SET_GPR_U32(ctx, 31, 0x1B95BCu);
    ctx->pc = 0x1B95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95B4u;
    // 0x1b95b8: 0x54a025  or          $s4, $v0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B95B4u, 0x1B95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95BCu;
label_1b95bc:
    // 0x1b95bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b95bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b95c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b95c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b95c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b95c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b95cc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b95ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b95d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b95d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b95d4: 0x742025  or          $a0, $v1, $s4
    ctx->pc = 0x1b95d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x1b95d8: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1b95d8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b95dc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b95dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b95e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b95e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b95e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b95ec: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b95ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b95f0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b95f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B95F4u;
    SET_GPR_U32(ctx, 31, 0x1B95FCu);
    ctx->pc = 0x1B95F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95F4u;
    // 0x1b95f8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B95F4u, 0x1B95FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95FCu;
label_1b95fc:
    // 0x1b95fc: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B95FCu;
    SET_GPR_U32(ctx, 31, 0x1B9604u);
    ctx->pc = 0x1B9600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95FCu;
    // 0x1b9600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B95FCu, 0x1B9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9604u;
label_1b9604:
    // 0x1b9604: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b9604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9608: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1b9608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1b960c: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x1b960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1b9610: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b9610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b9614: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9618: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b9618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b961c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9624: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1b9624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b9628: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9628u;
    SET_GPR_U32(ctx, 31, 0x1B9630u);
    ctx->pc = 0x1B962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9628u;
    // 0x1b962c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9628u, 0x1B9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9630u;
label_1b9630:
    // 0x1b9630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9638: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9638u;
    SET_GPR_U32(ctx, 31, 0x1B9640u);
    ctx->pc = 0x1B963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9638u;
    // 0x1b963c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9638u, 0x1B9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9640u;
label_1b9640:
    // 0x1b9640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9644: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b9648: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9648u;
    SET_GPR_U32(ctx, 31, 0x1B9650u);
    ctx->pc = 0x1B964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9648u;
    // 0x1b964c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9648u, 0x1B9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9650u;
label_1b9650:
    // 0x1b9650: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B9650u;
    {
        const bool branch_taken_0x1b9650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9650u;
        // 0x1b9654: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9650) {
            ctx->pc = 0x1B9710u;
            goto label_1b9710;
        }
    }
    ctx->pc = 0x1B9658u;
label_1b9658:
    // 0x1b9658: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1b965c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b9660: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b9660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b9664: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9668: 0x9e6378c0  lwu         $v1, 0x78C0($s3)
    ctx->pc = 0x1b9668u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30912)));
    // 0x1b966c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9670: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b9670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b9674: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x1b9674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x1b9678: 0x8e6278c4  lw          $v0, 0x78C4($s3)
    ctx->pc = 0x1b9678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30916)));
    // 0x1b967c: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x1b967cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b9680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9684: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b9684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b9688: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b9688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b968c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b9690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b9694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9698: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b969c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b96a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B96A0u;
    SET_GPR_U32(ctx, 31, 0x1B96A8u);
    ctx->pc = 0x1B96A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96A0u;
    // 0x1b96a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B96A0u, 0x1B96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96A8u;
label_1b96a8:
    // 0x1b96a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b96ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b96acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b96b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b96b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B96B4u;
    SET_GPR_U32(ctx, 31, 0x1B96BCu);
    ctx->pc = 0x1B96B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96B4u;
    // 0x1b96b8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B96B4u, 0x1B96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96BCu;
label_1b96bc:
    // 0x1b96bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b96c0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b96c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b96c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b96c8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b96c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b96cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b96d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b96d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96d4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b96d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b96d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B96D8u;
    SET_GPR_U32(ctx, 31, 0x1B96E0u);
    ctx->pc = 0x1B96DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96D8u;
    // 0x1b96dc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B96D8u, 0x1B96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96E0u;
label_1b96e0:
    // 0x1b96e0: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b96e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b96e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b96ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B96ECu;
    SET_GPR_U32(ctx, 31, 0x1B96F4u);
    ctx->pc = 0x1B96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96ECu;
    // 0x1b96f0: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B96ECu, 0x1B96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96F4u;
label_1b96f4:
    // 0x1b96f4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b96f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b96f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96fc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b96fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b9700: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b9700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9704: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9704u;
    SET_GPR_U32(ctx, 31, 0x1B970Cu);
    ctx->pc = 0x1B9708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9704u;
    // 0x1b9708: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9704u, 0x1B970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B970Cu;
label_1b970c:
    // 0x1b970c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b970cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b9710:
    // 0x1b9710: 0x8e6278c8  lw          $v0, 0x78C8($s3)
    ctx->pc = 0x1b9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1b9714: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b9714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b9718: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b9718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b971c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B971Cu;
    {
        const bool branch_taken_0x1b971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b971c) {
            ctx->pc = 0x1B9658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9658;
        }
    }
    ctx->pc = 0x1B9724u;
    // 0x1b9724: 0x0  nop
    ctx->pc = 0x1b9724u;
    // NOP
label_1b9728:
    // 0x1b9728: 0x13c00077  beqz        $fp, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B9728u;
    {
        const bool branch_taken_0x1b9728 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9728) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B9730u;
    // 0x1b9730: 0x8e6578d0  lw          $a1, 0x78D0($s3)
    ctx->pc = 0x1b9730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b9734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9738: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B9738u;
    SET_GPR_U32(ctx, 31, 0x1B9740u);
    ctx->pc = 0x1B973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9738u;
    // 0x1b973c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B9738u, 0x1B9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9740u;
label_1b9740:
    // 0x1b9740: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1B9740u;
    SET_GPR_U32(ctx, 31, 0x1B9748u);
    ctx->pc = 0x1B9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9740u;
    // 0x1b9744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1B9740u, 0x1B9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9748u;
label_1b9748:
    // 0x1b9748: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b974c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9750: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b9750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b9754: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b9754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b9758: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1B9758u;
    SET_GPR_U32(ctx, 31, 0x1B9760u);
    ctx->pc = 0x1B975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9758u;
    // 0x1b975c: 0x62a025  or          $s4, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1B9758u, 0x1B9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9760u;
label_1b9760:
    // 0x1b9760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9768: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b976c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1b976cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b9770: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1b9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1b9774: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B9774u;
    SET_GPR_U32(ctx, 31, 0x1B977Cu);
    ctx->pc = 0x1B9778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9774u;
    // 0x1b9778: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B9774u, 0x1B977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B977Cu;
label_1b977c:
    // 0x1b977c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9784: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9788: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b9788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b978c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1b978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1b9790: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B9790u;
    SET_GPR_U32(ctx, 31, 0x1B9798u);
    ctx->pc = 0x1B9794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9790u;
    // 0x1b9794: 0x54a025  or          $s4, $v0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B9790u, 0x1B9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9798u;
label_1b9798:
    // 0x1b9798: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b979c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b97a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b97a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b97a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b97a8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b97a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b97ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b97acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b97b0: 0x742025  or          $a0, $v1, $s4
    ctx->pc = 0x1b97b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x1b97b4: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1b97b4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b97b8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b97b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b97bc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b97c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b97c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b97c8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b97c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b97cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b97ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b97d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B97D0u;
    SET_GPR_U32(ctx, 31, 0x1B97D8u);
    ctx->pc = 0x1B97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B97D0u;
    // 0x1b97d4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B97D0u, 0x1B97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97D8u;
label_1b97d8:
    // 0x1b97d8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B97D8u;
    SET_GPR_U32(ctx, 31, 0x1B97E0u);
    ctx->pc = 0x1B97DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B97D8u;
    // 0x1b97dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B97D8u, 0x1B97E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97E0u;
label_1b97e0:
    // 0x1b97e0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b97e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b97e4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1b97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1b97e8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1b97e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1b97ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b97ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b97f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b97f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b97f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b97f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b97f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b97fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b97fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9800: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1b9800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b9804: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9804u;
    SET_GPR_U32(ctx, 31, 0x1B980Cu);
    ctx->pc = 0x1B9808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9804u;
    // 0x1b9808: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9804u, 0x1B980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B980Cu;
label_1b980c:
    // 0x1b980c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9814: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9814u;
    SET_GPR_U32(ctx, 31, 0x1B981Cu);
    ctx->pc = 0x1B9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9814u;
    // 0x1b9818: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9814u, 0x1B981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B981Cu;
label_1b981c:
    // 0x1b981c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9820: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b9820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b9824: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9824u;
    SET_GPR_U32(ctx, 31, 0x1B982Cu);
    ctx->pc = 0x1B9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9824u;
    // 0x1b9828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9824u, 0x1B982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B982Cu;
label_1b982c:
    // 0x1b982c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B982Cu;
    {
        const bool branch_taken_0x1b982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B982Cu;
        // 0x1b9830: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b982c) {
            ctx->pc = 0x1B98F0u;
            goto label_1b98f0;
        }
    }
    ctx->pc = 0x1B9834u;
    // 0x1b9834: 0x0  nop
    ctx->pc = 0x1b9834u;
    // NOP
label_1b9838:
    // 0x1b9838: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1b9838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1b983c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1b983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b9840: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b9840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b9844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9848: 0x9e6378c0  lwu         $v1, 0x78C0($s3)
    ctx->pc = 0x1b9848u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30912)));
    // 0x1b984c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9850: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b9850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b9854: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x1b9854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x1b9858: 0x8e6278c4  lw          $v0, 0x78C4($s3)
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30916)));
    // 0x1b985c: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x1b985cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b9860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9864: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b9864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b9868: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b9868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b986c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b9870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b9870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b9874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9878: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b987c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b9880: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9880u;
    SET_GPR_U32(ctx, 31, 0x1B9888u);
    ctx->pc = 0x1B9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9880u;
    // 0x1b9884: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9880u, 0x1B9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9888u;
label_1b9888:
    // 0x1b9888: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b9888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b988c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9890: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b9890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9894: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9894u;
    SET_GPR_U32(ctx, 31, 0x1B989Cu);
    ctx->pc = 0x1B9898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9894u;
    // 0x1b9898: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9894u, 0x1B989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B989Cu;
label_1b989c:
    // 0x1b989c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b98a0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b98a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b98a8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b98ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b98acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b98b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b98b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b98b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B98B8u;
    SET_GPR_U32(ctx, 31, 0x1B98C0u);
    ctx->pc = 0x1B98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B98B8u;
    // 0x1b98bc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B98B8u, 0x1B98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98C0u;
label_1b98c0:
    // 0x1b98c0: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b98c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b98c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b98c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b98cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B98CCu;
    SET_GPR_U32(ctx, 31, 0x1B98D4u);
    ctx->pc = 0x1B98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B98CCu;
    // 0x1b98d0: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B98CCu, 0x1B98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98D4u;
label_1b98d4:
    // 0x1b98d4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b98d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b98d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98dc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b98dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b98e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b98e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B98E4u;
    SET_GPR_U32(ctx, 31, 0x1B98ECu);
    ctx->pc = 0x1B98E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B98E4u;
    // 0x1b98e8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B98E4u, 0x1B98ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98ECu;
label_1b98ec:
    // 0x1b98ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b98ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b98f0:
    // 0x1b98f0: 0x8e6278c8  lw          $v0, 0x78C8($s3)
    ctx->pc = 0x1b98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1b98f4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b98f8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b98f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b98fc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B98FCu;
    {
        const bool branch_taken_0x1b98fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b98fc) {
            ctx->pc = 0x1B9838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9838;
        }
    }
    ctx->pc = 0x1B9904u;
    // 0x1b9904: 0x0  nop
    ctx->pc = 0x1b9904u;
    // NOP
label_1b9908:
    // 0x1b9908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b9908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b990c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9910: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1b9910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9914: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B9914u;
    {
        const bool branch_taken_0x1b9914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9914u;
        // 0x1b9918: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9914) {
            ctx->pc = 0x1B9970u;
            goto label_1b9970;
        }
    }
    ctx->pc = 0x1B991Cu;
    // 0x1b991c: 0x0  nop
    ctx->pc = 0x1b991cu;
    // NOP
label_1b9920:
    // 0x1b9920: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b9924: 0x2082821  addu        $a1, $s0, $t0
    ctx->pc = 0x1b9924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1b9928: 0x2281821  addu        $v1, $s1, $t0
    ctx->pc = 0x1b9928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1b992c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b992cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b9930: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b9934: 0x2c82821  addu        $a1, $s6, $t0
    ctx->pc = 0x1b9934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x1b9938: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1b9938u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1b993c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b993cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b9940: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x1b9940u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b9944: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1b9944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9948: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b994c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1b9950: 0x84602  srl         $t0, $t0, 24
    ctx->pc = 0x1b9950u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b9954: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x1b9954u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b9958: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x1b9958u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b995c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1b995cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1b9960: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b9964: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1b9964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b9968: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b9968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b996c: 0x0  nop
    ctx->pc = 0x1b996cu;
    // NOP
label_1b9970:
    // 0x1b9970: 0x8e6378b4  lw          $v1, 0x78B4($s3)
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30900)));
    // 0x1b9974: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b9974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b9978: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b9978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b997c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B997Cu;
    {
        const bool branch_taken_0x1b997c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b997c) {
            ctx->pc = 0x1B9920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9920;
        }
    }
    ctx->pc = 0x1B9984u;
    // 0x1b9984: 0x8e6578d0  lw          $a1, 0x78D0($s3)
    ctx->pc = 0x1b9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b9988: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b9988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b998c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B998Cu;
    SET_GPR_U32(ctx, 31, 0x1B9994u);
    ctx->pc = 0x1B9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B998Cu;
    // 0x1b9990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B998Cu, 0x1B9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9994u;
label_1b9994:
    // 0x1b9994: 0x8e6778c8  lw          $a3, 0x78C8($s3)
    ctx->pc = 0x1b9994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1b9998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b999c: 0x8e6278c4  lw          $v0, 0x78C4($s3)
    ctx->pc = 0x1b999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30916)));
    // 0x1b99a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b99a4: 0x9e6378c0  lwu         $v1, 0x78C0($s3)
    ctx->pc = 0x1b99a4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30912)));
    // 0x1b99a8: 0x24100200  addiu       $s0, $zero, 0x200
    ctx->pc = 0x1b99a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b99ac: 0x9e6678cc  lwu         $a2, 0x78CC($s3)
    ctx->pc = 0x1b99acu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 30924)));
    // 0x1b99b0: 0x241600e0  addiu       $s6, $zero, 0xE0
    ctx->pc = 0x1b99b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b99b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b99b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b99b8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1b99b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b99bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b99c0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b99c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b99c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b99c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b99c8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1b99c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1b99cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b99ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b99d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b99d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b99d4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b99d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b99d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b99d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b99dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b99e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B99E0u;
    SET_GPR_U32(ctx, 31, 0x1B99E8u);
    ctx->pc = 0x1B99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99E0u;
    // 0x1b99e4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B99E0u, 0x1B99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99E8u;
label_1b99e8:
    // 0x1b99e8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B99E8u;
    SET_GPR_U32(ctx, 31, 0x1B99F0u);
    ctx->pc = 0x1B99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99E8u;
    // 0x1b99ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B99E8u, 0x1B99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99F0u;
label_1b99f0:
    // 0x1b99f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b99f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b99f4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b99f8: 0x101182  srl         $v0, $s0, 6
    ctx->pc = 0x1b99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x1b99fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b99fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b9a00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b9a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b9a08: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b9a0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b9a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b9a10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b9a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b9a18: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b9a18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b9a1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9A20u;
    SET_GPR_U32(ctx, 31, 0x1B9A28u);
    ctx->pc = 0x1B9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A20u;
    // 0x1b9a24: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9A20u, 0x1B9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A28u;
label_1b9a28:
    // 0x1b9a28: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1B9A28u;
    SET_GPR_U32(ctx, 31, 0x1B9A30u);
    ctx->pc = 0x1B9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A28u;
    // 0x1b9a2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1B9A28u, 0x1B9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A30u;
label_1b9a30:
    // 0x1b9a30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b9a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b9a3c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b9a40: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1B9A40u;
    SET_GPR_U32(ctx, 31, 0x1B9A48u);
    ctx->pc = 0x1B9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A40u;
    // 0x1b9a44: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1B9A40u, 0x1B9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A48u;
label_1b9a48:
    // 0x1b9a48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a58: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1b9a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1b9a5c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B9A5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9A64u);
    ctx->pc = 0x1B9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A5Cu;
    // 0x1b9a60: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B9A5Cu, 0x1B9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A64u;
label_1b9a64:
    // 0x1b9a64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a6c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b9a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b9a70: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b9a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a74: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1b9a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1b9a78: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B9A78u;
    SET_GPR_U32(ctx, 31, 0x1B9A80u);
    ctx->pc = 0x1B9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9A78u;
    // 0x1b9a7c: 0x518825  or          $s1, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B9A78u, 0x1B9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A80u;
label_1b9a80:
    // 0x1b9a80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b9a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b9a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b9a88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b9a8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b9a90: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b9a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b9a94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9a98: 0x712025  or          $a0, $v1, $s1
    ctx->pc = 0x1b9a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1b9a9c: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1b9a9cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1b9aa0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b9aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b9aa4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b9aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9aac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9ab0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b9ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b9ab4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b9ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b9ab8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9AB8u;
    SET_GPR_U32(ctx, 31, 0x1B9AC0u);
    ctx->pc = 0x1B9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AB8u;
    // 0x1b9abc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9AB8u, 0x1B9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AC0u;
label_1b9ac0:
    // 0x1b9ac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ac8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9AC8u;
    SET_GPR_U32(ctx, 31, 0x1B9AD0u);
    ctx->pc = 0x1B9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AC8u;
    // 0x1b9acc: 0x2406035c  addiu       $a2, $zero, 0x35C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9AC8u, 0x1B9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AD0u;
label_1b9ad0:
    // 0x1b9ad0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9ad4: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1b9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1b9ad8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b9ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b9adc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ae0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b9ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b9ae4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9AE4u;
    SET_GPR_U32(ctx, 31, 0x1B9AECu);
    ctx->pc = 0x1B9AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AE4u;
    // 0x1b9ae8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9AE4u, 0x1B9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AECu;
label_1b9aec:
    // 0x1b9aec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9af0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b9af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b9af4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B9AF4u;
    SET_GPR_U32(ctx, 31, 0x1B9AFCu);
    ctx->pc = 0x1B9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AF4u;
    // 0x1b9af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B9AF4u, 0x1B9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AFCu;
label_1b9afc:
    // 0x1b9afc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9b08: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B9B08u;
    SET_GPR_U32(ctx, 31, 0x1B9B10u);
    ctx->pc = 0x1B9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B08u;
    // 0x1b9b0c: 0x24070531  addiu       $a3, $zero, 0x531 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1329));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B9B08u, 0x1B9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B10u;
label_1b9b10:
    // 0x1b9b10: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x1b9b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9b14: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1b9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1b9b18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9b20: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b9b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9b24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9b28: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9b2c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9b2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9b30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b38: 0x0  nop
    ctx->pc = 0x1b9b38u;
    // NOP
    // 0x1b9b3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9b40: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1B9B40u;
    SET_GPR_U32(ctx, 31, 0x1B9B48u);
    ctx->pc = 0x1B9B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B40u;
    // 0x1b9b44: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1B9B40u, 0x1B9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B48u;
label_1b9b48:
    // 0x1b9b48: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x1b9b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1b9b4c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1b9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1b9b50: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x1b9b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9b54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9b58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9b60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b6c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9b70: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9b70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9b74: 0x0  nop
    ctx->pc = 0x1b9b74u;
    // NOP
    // 0x1b9b78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9b7c: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1B9B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B84u);
    ctx->pc = 0x1B9B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B7Cu;
    // 0x1b9b80: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1B9B7Cu, 0x1B9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B84u;
label_1b9b84:
    // 0x1b9b84: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x1b9b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1b9b88: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1b9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1b9b8c: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x1b9b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9b90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9b94: 0xc7a501d0  lwc1        $f5, 0x1D0($sp)
    ctx->pc = 0x1b9b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b9b98: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9b9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b9ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9ba4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1b9ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b9ba8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9bac: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9bacu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9bb0: 0xc7a401d8  lwc1        $f4, 0x1D8($sp)
    ctx->pc = 0x1b9bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9bb4: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x1b9bb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x1b9bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9bbc: 0x4604211c  madd.s      $f4, $f4, $f4
    ctx->pc = 0x1b9bbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b9bc0: 0x46040504  c1          0x40504
    ctx->pc = 0x1b9bc0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[4]);
    // 0x1b9bc4: 0x0  nop
    ctx->pc = 0x1b9bc4u;
    // NOP
    // 0x1b9bc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b9bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b9bcc: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x1B9BCCu;
    SET_GPR_U32(ctx, 31, 0x1B9BD4u);
    ctx->pc = 0x1B9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BCCu;
    // 0x1b9bd0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x1B9BCCu, 0x1B9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BD4u;
label_1b9bd4:
    // 0x1b9bd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b9bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b9bd8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1b9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1b9bdc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b9be0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b9be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9be4: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b9be8: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x1b9be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
    // 0x1b9bec: 0xc041442  jal         func_105108
    ctx->pc = 0x1B9BECu;
    SET_GPR_U32(ctx, 31, 0x1B9BF4u);
    ctx->pc = 0x1B9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BECu;
    // 0x1b9bf0: 0xe7a001d4  swc1        $f0, 0x1D4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B9BECu, 0x1B9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BF4u;
label_1b9bf4:
    // 0x1b9bf4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1b9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1b9bf8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1B9BF8u;
    SET_GPR_U32(ctx, 31, 0x1B9C00u);
    ctx->pc = 0x1B9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BF8u;
    // 0x1b9bfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1B9BF8u, 0x1B9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C00u;
label_1b9c00:
    // 0x1b9c00: 0xc6540024  lwc1        $f20, 0x24($s2)
    ctx->pc = 0x1b9c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9c04: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x1b9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1b9c08: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9C08u;
    {
        const bool branch_taken_0x1b9c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C08u;
        // 0x1b9c0c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c08) {
            ctx->pc = 0x1B9C2Cu;
            goto label_1b9c2c;
        }
    }
    ctx->pc = 0x1B9C10u;
label_1b9c10:
    // 0x1b9c10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b9c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9c14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b9c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9c1c: 0x0  nop
    ctx->pc = 0x1b9c1cu;
    // NOP
    // 0x1b9c20: 0x0  nop
    ctx->pc = 0x1b9c20u;
    // NOP
    // 0x1b9c24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B9C24u;
    {
        const bool branch_taken_0x1b9c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9c24) {
            ctx->pc = 0x1B9C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9c10;
        }
    }
    ctx->pc = 0x1B9C2Cu;
label_1b9c2c:
    // 0x1b9c2c: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x1b9c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b9c30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9C30u;
    {
        const bool branch_taken_0x1b9c30 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C30u;
        // 0x1b9c34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c30) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9C38u;
    // 0x1b9c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9C3Cu;
    {
        const bool branch_taken_0x1b9c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C3Cu;
        // 0x1b9c40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c3c) {
            ctx->pc = 0x1B9C5Cu;
            goto label_1b9c5c;
        }
    }
    ctx->pc = 0x1B9C44u;
label_1b9c44:
    // 0x1b9c44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b9c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b9c48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b9c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c50: 0x0  nop
    ctx->pc = 0x1b9c50u;
    // NOP
    // 0x1b9c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9c58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b9c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b9c5c:
    // 0x1b9c5c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x1b9c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x1b9c60: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1b9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b9c64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1b9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1b9c68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b9c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b9c6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9C6Cu;
    {
        const bool branch_taken_0x1b9c6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C6Cu;
        // 0x1b9c70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c6c) {
            ctx->pc = 0x1B9C80u;
            goto label_1b9c80;
        }
    }
    ctx->pc = 0x1B9C74u;
    // 0x1b9c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9C78u;
    {
        const bool branch_taken_0x1b9c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C78u;
        // 0x1b9c7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c78) {
            ctx->pc = 0x1B9C98u;
            goto label_1b9c98;
        }
    }
    ctx->pc = 0x1B9C80u;
label_1b9c80:
    // 0x1b9c80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b9c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b9c84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b9c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c8c: 0x0  nop
    ctx->pc = 0x1b9c8cu;
    // NOP
    // 0x1b9c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9c94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b9c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b9c98:
    // 0x1b9c98: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x1b9c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x1b9c9c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1b9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b9ca0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1b9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b9ca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b9ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b9ca8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9CA8u;
    {
        const bool branch_taken_0x1b9ca8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CA8u;
        // 0x1b9cac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ca8) {
            ctx->pc = 0x1B9CBCu;
            goto label_1b9cbc;
        }
    }
    ctx->pc = 0x1B9CB0u;
    // 0x1b9cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9cb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9CB4u;
    {
        const bool branch_taken_0x1b9cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CB4u;
        // 0x1b9cb8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cb4) {
            ctx->pc = 0x1B9CD4u;
            goto label_1b9cd4;
        }
    }
    ctx->pc = 0x1B9CBCu;
label_1b9cbc:
    // 0x1b9cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b9cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b9cc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b9cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9cc8: 0x0  nop
    ctx->pc = 0x1b9cc8u;
    // NOP
    // 0x1b9ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9cd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b9cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b9cd4:
    // 0x1b9cd4: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1b9cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1b9cd8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1B9CD8u;
    {
        const bool branch_taken_0x1b9cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD8u;
        // 0x1b9cdc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cd8) {
            ctx->pc = 0x1B9E48u;
            goto label_1b9e48;
        }
    }
    ctx->pc = 0x1B9CE0u;
label_1b9ce0:
    // 0x1b9ce0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9CE0u;
    {
        const bool branch_taken_0x1b9ce0 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1B9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CE0u;
        // 0x1b9ce4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ce0) {
            ctx->pc = 0x1B9CF4u;
            goto label_1b9cf4;
        }
    }
    ctx->pc = 0x1B9CE8u;
    // 0x1b9ce8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b9ce8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9cec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9CECu;
    {
        const bool branch_taken_0x1b9cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CECu;
        // 0x1b9cf0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cec) {
            ctx->pc = 0x1B9D0Cu;
            goto label_1b9d0c;
        }
    }
    ctx->pc = 0x1B9CF4u;
label_1b9cf4:
    // 0x1b9cf4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b9cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b9cf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b9cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9d00: 0x0  nop
    ctx->pc = 0x1b9d00u;
    // NOP
    // 0x1b9d04: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1b9d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9d08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b9d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b9d0c:
    // 0x1b9d0c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1b9d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1b9d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9d18: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1b9d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9d20: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1b9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1b9d24: 0x46011543  div.s       $f21, $f2, $f1
    ctx->pc = 0x1b9d24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1b9d28: 0x0  nop
    ctx->pc = 0x1b9d28u;
    // NOP
    // 0x1b9d2c: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x1b9d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x1b9d30: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1B9D30u;
    SET_GPR_U32(ctx, 31, 0x1B9D38u);
    ctx->pc = 0x1B9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D30u;
    // 0x1b9d34: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1B9D30u, 0x1B9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D38u;
label_1b9d38:
    // 0x1b9d38: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9d3c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9d44: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1b9d48: 0x4614a082  mul.s       $f2, $f20, $f20
    ctx->pc = 0x1b9d48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1b9d4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9d4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9d50: 0x0  nop
    ctx->pc = 0x1b9d50u;
    // NOP
    // 0x1b9d54: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b9d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b9d58: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1b9d58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1b9d5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b9d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b9d60: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1B9D60u;
    SET_GPR_U32(ctx, 31, 0x1B9D68u);
    ctx->pc = 0x1B9D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D60u;
    // 0x1b9d64: 0x4615031d  msub.s      $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1B9D60u, 0x1B9D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D68u;
label_1b9d68:
    // 0x1b9d68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d6c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1b9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1b9d70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9d74: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1b9d78: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1b9d78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1b9d7c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1b9d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1b9d80: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b9d80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b9d84: 0x0  nop
    ctx->pc = 0x1b9d84u;
    // NOP
    // 0x1b9d88: 0x0  nop
    ctx->pc = 0x1b9d88u;
    // NOP
    // 0x1b9d8c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1B9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D94u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1B9D8Cu, 0x1B9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D94u;
label_1b9d94:
    // 0x1b9d94: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b9d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b9d98: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1b9d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1b9d9c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1B9D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B9DA4u);
    ctx->pc = 0x1B9DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D9Cu;
    // 0x1b9da0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1B9D9Cu, 0x1B9DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DA4u;
label_1b9da4:
    // 0x1b9da4: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1b9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b9da8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9DA8u;
    {
        const bool branch_taken_0x1b9da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DA8u;
        // 0x1b9dac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9da8) {
            ctx->pc = 0x1B9DCCu;
            goto label_1b9dcc;
        }
    }
    ctx->pc = 0x1B9DB0u;
label_1b9db0:
    // 0x1b9db0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b9db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9db4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b9db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9dbc: 0x0  nop
    ctx->pc = 0x1b9dbcu;
    // NOP
    // 0x1b9dc0: 0x0  nop
    ctx->pc = 0x1b9dc0u;
    // NOP
    // 0x1b9dc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B9DC4u;
    {
        const bool branch_taken_0x1b9dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9dc4) {
            ctx->pc = 0x1B9DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9db0;
        }
    }
    ctx->pc = 0x1B9DCCu;
label_1b9dcc:
    // 0x1b9dcc: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x1b9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b9dd0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b9dd4: 0xc7a401e0  lwc1        $f4, 0x1E0($sp)
    ctx->pc = 0x1b9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9dd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ddc: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x1b9ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9de0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1b9de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1b9de4: 0xc7a201e4  lwc1        $f2, 0x1E4($sp)
    ctx->pc = 0x1b9de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9de8: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x1b9de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9dec: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1b9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9df0: 0x46042903  div.s       $f4, $f5, $f4
    ctx->pc = 0x1b9df0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x1b9df4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1b9df4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1b9df8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b9df8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b9dfc: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x1b9dfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b9e00: 0x0  nop
    ctx->pc = 0x1b9e00u;
    // NOP
    // 0x1b9e04: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1b9e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b9e08: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1B9E08u;
    SET_GPR_U32(ctx, 31, 0x1B9E10u);
    ctx->pc = 0x1B9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E08u;
    // 0x1b9e0c: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1B9E08u, 0x1B9E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E10u;
label_1b9e10:
    // 0x1b9e10: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1b9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1b9e14: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b9e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b9e18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9e1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b9e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b9e20: 0xc0415c6  jal         func_105718
    ctx->pc = 0x1B9E20u;
    SET_GPR_U32(ctx, 31, 0x1B9E28u);
    ctx->pc = 0x1B9E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E20u;
    // 0x1b9e24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105718u, 0x1B9E20u, 0x1B9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E28u;
label_1b9e28:
    // 0x1b9e28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b9e2c: 0xc041500  jal         func_105400
    ctx->pc = 0x1B9E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E34u);
    ctx->pc = 0x1B9E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E2Cu;
    // 0x1b9e30: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x1B9E2Cu, 0x1B9E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E34u;
label_1b9e34:
    // 0x1b9e34: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1b9e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b9e38: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1b9e3c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b9e40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9e44: 0x7c437a00  sq          $v1, 0x7A00($v0)
    ctx->pc = 0x1b9e44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 31232), GPR_VEC(ctx, 3));
label_1b9e48:
    // 0x1b9e48: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1b9e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b9e4c: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1B9E4Cu;
    {
        const bool branch_taken_0x1b9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E4Cu;
        // 0x1b9e50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e4c) {
            ctx->pc = 0x1B9CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9ce0;
        }
    }
    ctx->pc = 0x1B9E54u;
    // 0x1b9e54: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1B9E54u;
    {
        const bool branch_taken_0x1b9e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E54u;
        // 0x1b9e58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e54) {
            ctx->pc = 0x1B9F78u;
            goto label_1b9f78;
        }
    }
    ctx->pc = 0x1B9E5Cu;
    // 0x1b9e5c: 0x0  nop
    ctx->pc = 0x1b9e5cu;
    // NOP
label_1b9e60:
    // 0x1b9e60: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1B9E60u;
    {
        const bool branch_taken_0x1b9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E60u;
        // 0x1b9e64: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e60) {
            ctx->pc = 0x1B9F68u;
            goto label_1b9f68;
        }
    }
    ctx->pc = 0x1B9E68u;
label_1b9e68:
    // 0x1b9e68: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b9e6c: 0x44923000  mtc1        $s2, $f6
    ctx->pc = 0x1b9e6cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b9e70: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b9e74: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1b9e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b9e78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e7c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1b9e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1b9e80: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1b9e84: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1b9e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1b9e88: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1b9e8c: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x1b9e8cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x1b9e90: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1b9e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b9e94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b9e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9e98: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1b9e98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1b9e9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9ea0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b9ea4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b9ea4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ea8: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1b9ea8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b9eac: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1b9eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b9eb0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1b9eb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1b9eb4: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1b9eb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1b9eb8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9ebc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ec0: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x1b9ec0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1b9ec4: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1b9ec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1b9ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9ecc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1b9eccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x1b9ed0: 0x46020819  suba.s      $f1, $f2
    ctx->pc = 0x1b9ed0u;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[1], ctx->f[2]));
    // 0x1b9ed4: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x1b9ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1b9ed8: 0x46000004  c1          0x4
    ctx->pc = 0x1b9ed8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b9edc: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1b9edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1b9ee0: 0x0  nop
    ctx->pc = 0x1b9ee0u;
    // NOP
    // 0x1b9ee4: 0x0  nop
    ctx->pc = 0x1b9ee4u;
    // NOP
    // 0x1b9ee8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1B9EE8u;
    SET_GPR_U32(ctx, 31, 0x1B9EF0u);
    ctx->pc = 0x1B9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EE8u;
    // 0x1b9eec: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1B9EE8u, 0x1B9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9EF0u;
label_1b9ef0:
    // 0x1b9ef0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1b9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1b9ef4: 0x34018a00  ori         $at, $zero, 0x8A00
    ctx->pc = 0x1b9ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35328);
    // 0x1b9ef8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b9efc: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1b9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b9f00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b9f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b9f04: 0x413021  addu        $a2, $v0, $at
    ctx->pc = 0x1b9f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1b9f08: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1b9f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9f0c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b9f10: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1b9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1b9f14: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1B9F14u;
    SET_GPR_U32(ctx, 31, 0x1B9F1Cu);
    ctx->pc = 0x1B9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F14u;
    // 0x1b9f18: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1B9F14u, 0x1B9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F1Cu;
label_1b9f1c:
    // 0x1b9f1c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1b9f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9f24: 0x0  nop
    ctx->pc = 0x1b9f24u;
    // NOP
    // 0x1b9f28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b9f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b9f2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b9f30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b9f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b9f34: 0x0  nop
    ctx->pc = 0x1b9f34u;
    // NOP
    // 0x1b9f38: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9F38u;
    {
        const bool branch_taken_0x1b9f38 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1b9f38) {
            ctx->pc = 0x1B9F48u;
            goto label_1b9f48;
        }
    }
    ctx->pc = 0x1B9F40u;
    // 0x1b9f40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b9f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f44: 0x0  nop
    ctx->pc = 0x1b9f44u;
    // NOP
label_1b9f48:
    // 0x1b9f48: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1b9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b9f4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b9f50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b9f54: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9f58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b9f5c: 0xa0430150  sb          $v1, 0x150($v0)
    ctx->pc = 0x1b9f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9f60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9f64: 0x0  nop
    ctx->pc = 0x1b9f64u;
    // NOP
label_1b9f68:
    // 0x1b9f68: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1b9f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b9f6c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B9F6Cu;
    {
        const bool branch_taken_0x1b9f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9f6c) {
            ctx->pc = 0x1B9E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9e68;
        }
    }
    ctx->pc = 0x1B9F74u;
    // 0x1b9f74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b9f74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b9f78:
    // 0x1b9f78: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x1b9f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1b9f7c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1B9F7Cu;
    {
        const bool branch_taken_0x1b9f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F7Cu;
        // 0x1b9f80: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f7c) {
            ctx->pc = 0x1B9E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9e60;
        }
    }
    ctx->pc = 0x1B9F84u;
    // 0x1b9f84: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1B9F84u;
    {
        const bool branch_taken_0x1b9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F84u;
        // 0x1b9f88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f84) {
            ctx->pc = 0x1BA228u;
            goto label_1ba228;
        }
    }
    ctx->pc = 0x1B9F8Cu;
    // 0x1b9f8c: 0x0  nop
    ctx->pc = 0x1b9f8cu;
    // NOP
label_1b9f90:
    // 0x1b9f90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b9f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f94: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1B9F94u;
    {
        const bool branch_taken_0x1b9f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F94u;
        // 0x1b9f98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f94) {
            ctx->pc = 0x1BA210u;
            goto label_1ba210;
        }
    }
    ctx->pc = 0x1B9F9Cu;
    // 0x1b9f9c: 0x0  nop
    ctx->pc = 0x1b9f9cu;
    // NOP
label_1b9fa0:
    // 0x1b9fa0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1b9fa4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1b9fa8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b9fac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9fb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b9fb4: 0x90420150  lbu         $v0, 0x150($v0)
    ctx->pc = 0x1b9fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1b9fb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b9fbc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b9fc0: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1b9fc0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1b9fc4: 0xc070828  jal         func_1C20A0
    ctx->pc = 0x1B9FC4u;
    SET_GPR_U32(ctx, 31, 0x1B9FCCu);
    ctx->pc = 0x1B9FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FC4u;
    // 0x1b9fc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20A0u, 0x1B9FC4u, 0x1B9FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9FCCu;
label_1b9fcc:
    // 0x1b9fcc: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1b9fd0: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1b9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1b9fd4: 0x24490008  addiu       $t1, $v0, 0x8
    ctx->pc = 0x1b9fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b9fd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9fdc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1b9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1b9fe0: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b9fe4: 0x26a20700  addiu       $v0, $s5, 0x700
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1792));
    // 0x1b9fe8: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b9fec: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1b9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1b9ff0: 0x26420790  addiu       $v0, $s2, 0x790
    ctx->pc = 0x1b9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
    // 0x1b9ff4: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1b9ff8: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b9ffc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1b9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ba000: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ba000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ba004: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ba008: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ba008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ba00c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba010: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x1ba010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x1ba014: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba018: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba01c: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba01cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1ba020: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba024: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1ba024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1ba028: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba02c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1ba02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1ba030: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba034: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1ba034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1ba038: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba03c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ba03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1ba040: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba044: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1ba044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1ba048: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba04c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba050: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1ba054: 0x9042015a  lbu         $v0, 0x15A($v0)
    ctx->pc = 0x1ba054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 346)));
    // 0x1ba058: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba05c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ba060: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba060u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba064: 0xc070828  jal         func_1C20A0
    ctx->pc = 0x1BA064u;
    SET_GPR_U32(ctx, 31, 0x1BA06Cu);
    ctx->pc = 0x1BA068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA064u;
    // 0x1ba068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20A0u, 0x1BA064u, 0x1BA06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA06Cu;
label_1ba06c:
    // 0x1ba06c: 0x8e64783c  lw          $a0, 0x783C($s3)
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba070: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1ba070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba074: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ba074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba078: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba07c: 0x24690009  addiu       $t1, $v1, 0x9
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1ba080: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1ba080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ba084: 0x26a30740  addiu       $v1, $s5, 0x740
    ctx->pc = 0x1ba084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1856));
    // 0x1ba088: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x1ba088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ba08c: 0x26420790  addiu       $v0, $s2, 0x790
    ctx->pc = 0x1ba08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
    // 0x1ba090: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ba094: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ba094u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba098: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1ba098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1ba09c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ba0a0: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ba0a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ba0ac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ba0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ba0b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba0b4: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x1ba0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x1ba0b8: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba0c0: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1ba0c4: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0c8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1ba0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1ba0cc: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0d0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1ba0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1ba0d4: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0d8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1ba0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1ba0dc: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0e0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ba0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1ba0e4: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0e8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1ba0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x1ba0ec: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba0f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba0f4: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1ba0f8: 0x90420151  lbu         $v0, 0x151($v0)
    ctx->pc = 0x1ba0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 337)));
    // 0x1ba0fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba100: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ba104: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba104u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba108: 0xc070828  jal         func_1C20A0
    ctx->pc = 0x1BA108u;
    SET_GPR_U32(ctx, 31, 0x1BA110u);
    ctx->pc = 0x1BA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA108u;
    // 0x1ba10c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20A0u, 0x1BA108u, 0x1BA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA110u;
label_1ba110:
    // 0x1ba110: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1ba110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ba114: 0x8e64783c  lw          $a0, 0x783C($s3)
    ctx->pc = 0x1ba114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba118: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x1ba118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ba11c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1ba120: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba124: 0x24670009  addiu       $a3, $v1, 0x9
    ctx->pc = 0x1ba124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1ba128: 0x26a20700  addiu       $v0, $s5, 0x700
    ctx->pc = 0x1ba128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1792));
    // 0x1ba12c: 0x264307b0  addiu       $v1, $s2, 0x7B0
    ctx->pc = 0x1ba12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
    // 0x1ba130: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ba130u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba134: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1ba134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1ba138: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1ba138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ba13c: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba140: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ba144: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ba144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ba148: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ba14c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ba14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ba150: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba154: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x1ba154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x1ba158: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba15c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba160: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1ba164: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba168: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1ba168u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1ba16c: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba170: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ba170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1ba174: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba178: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1ba178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1ba17c: 0x8e63783c  lw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba180: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ba180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ba184: 0xae63783c  sw          $v1, 0x783C($s3)
    ctx->pc = 0x1ba184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 3));
    // 0x1ba188: 0x9042015b  lbu         $v0, 0x15B($v0)
    ctx->pc = 0x1ba188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 347)));
    // 0x1ba18c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba190: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ba190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ba194: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba194u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba198: 0xc070828  jal         func_1C20A0
    ctx->pc = 0x1BA198u;
    SET_GPR_U32(ctx, 31, 0x1BA1A0u);
    ctx->pc = 0x1BA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA198u;
    // 0x1ba19c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20A0u, 0x1BA198u, 0x1BA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1A0u;
label_1ba1a0:
    // 0x1ba1a0: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1ba1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba1a4: 0x8e66783c  lw          $a2, 0x783C($s3)
    ctx->pc = 0x1ba1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba1a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba1ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ba1b0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1ba1b4: 0x24670009  addiu       $a3, $v1, 0x9
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1ba1b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba1bc: 0x24450009  addiu       $a1, $v0, 0x9
    ctx->pc = 0x1ba1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1ba1c0: 0x26a20740  addiu       $v0, $s5, 0x740
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1856));
    // 0x1ba1c4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba1c8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1ba1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1ba1cc: 0x264207b0  addiu       $v0, $s2, 0x7B0
    ctx->pc = 0x1ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
    // 0x1ba1d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ba1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba1d4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1ba1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1ba1d8: 0x8e62783c  lw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba1dc: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ba1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1ba1e0: 0x8e62783c  lw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba1e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ba1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ba1e8: 0xae62783c  sw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 2));
    // 0x1ba1ec: 0x8e62783c  lw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba1f0: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1ba1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1ba1f4: 0x8e62783c  lw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba1f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ba1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ba1fc: 0x8e62783c  lw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba200: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1ba200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1ba204: 0x8e62783c  lw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30780)));
    // 0x1ba208: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ba20c: 0xae62783c  sw          $v0, 0x783C($s3)
    ctx->pc = 0x1ba20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 30780), GPR_U32(ctx, 2));
label_1ba210:
    // 0x1ba210: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x1ba210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1ba214: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
    ctx->pc = 0x1BA214u;
    {
        const bool branch_taken_0x1ba214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba214) {
            ctx->pc = 0x1B9FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9fa0;
        }
    }
    ctx->pc = 0x1BA21Cu;
    // 0x1ba21c: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1ba21cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba220: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ba220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ba224: 0x0  nop
    ctx->pc = 0x1ba224u;
    // NOP
label_1ba228:
    // 0x1ba228: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x1ba228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ba22c: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x1BA22Cu;
    {
        const bool branch_taken_0x1ba22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA22Cu;
        // 0x1ba230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba22c) {
            ctx->pc = 0x1B9F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9f90;
        }
    }
    ctx->pc = 0x1BA234u;
    // 0x1ba234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ba238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba23c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BA23Cu;
    SET_GPR_U32(ctx, 31, 0x1BA244u);
    ctx->pc = 0x1BA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA23Cu;
    // 0x1ba240: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BA23Cu, 0x1BA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA244u;
label_1ba244:
    // 0x1ba244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ba244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba248: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BA248u;
    SET_GPR_U32(ctx, 31, 0x1BA250u);
    ctx->pc = 0x1BA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA248u;
    // 0x1ba24c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BA248u, 0x1BA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA250u;
label_1ba250:
    // 0x1ba250: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ba250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ba254: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ba254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ba258: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1ba258u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ba25c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ba25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ba260: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1ba260u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ba264: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ba264u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ba268: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ba268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ba26c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ba26cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba270: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ba270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba274: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ba274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba278: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ba278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba27c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ba27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba280: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA280u;
        // 0x1ba284: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA288u;
}
