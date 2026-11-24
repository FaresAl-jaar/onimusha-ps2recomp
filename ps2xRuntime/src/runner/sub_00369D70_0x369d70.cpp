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

// Function: sub_00369D70
// Address: 0x369d70 - 0x369ed4
void sub_00369D70_0x369d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369D70_0x369d70");
#endif

    switch (ctx->pc) {
        case 0x369d9cu: goto label_369d9c;
        case 0x369e0cu: goto label_369e0c;
        case 0x369e3cu: goto label_369e3c;
        case 0x369e4cu: goto label_369e4c;
        case 0x369e90u: goto label_369e90;
        case 0x369eb0u: goto label_369eb0;
        default: break;
    }

    ctx->pc = 0x369d70u;

    // 0x369d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x369d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x369d74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x369d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x369d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x369d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x369d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369d80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x369d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369d88: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x369d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x369d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369d90: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x369d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x369d94: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x369D94u;
    SET_GPR_U32(ctx, 31, 0x369D9Cu);
    ctx->pc = 0x369D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369D94u;
    // 0x369d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x369D94u, 0x369D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D9Cu;
label_369d9c:
    // 0x369d9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x369d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369da0: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x369da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x369da4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x369da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x369da8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369DA8u;
    {
        const bool branch_taken_0x369da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369da8) {
            ctx->pc = 0x369DB8u;
            goto label_369db8;
        }
    }
    ctx->pc = 0x369DB0u;
    // 0x369db0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x369DB0u;
    {
        const bool branch_taken_0x369db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DB0u;
        // 0x369db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369db0) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369DB8u;
label_369db8:
    // 0x369db8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x369DB8u;
    {
        const bool branch_taken_0x369db8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x369DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DB8u;
        // 0x369dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369db8) {
            ctx->pc = 0x369DC8u;
            goto label_369dc8;
        }
    }
    ctx->pc = 0x369DC0u;
    // 0x369dc0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x369DC0u;
    {
        const bool branch_taken_0x369dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369dc0) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369DC8u;
label_369dc8:
    // 0x369dc8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x369DC8u;
    {
        const bool branch_taken_0x369dc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x369dc8) {
            ctx->pc = 0x369DE8u;
            goto label_369de8;
        }
    }
    ctx->pc = 0x369DD0u;
    // 0x369dd0: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x369dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x369dd4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x369dd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x369dd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369DD8u;
    {
        const bool branch_taken_0x369dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DD8u;
        // 0x369ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369dd8) {
            ctx->pc = 0x369DE8u;
            goto label_369de8;
        }
    }
    ctx->pc = 0x369DE0u;
    // 0x369de0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x369DE0u;
    {
        const bool branch_taken_0x369de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369de0) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369DE8u;
label_369de8:
    // 0x369de8: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x369de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x369dec: 0x9262000a  lbu         $v0, 0xA($s3)
    ctx->pc = 0x369decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x369df0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369DF0u;
    {
        const bool branch_taken_0x369df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x369DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DF0u;
        // 0x369df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369df0) {
            ctx->pc = 0x369E00u;
            goto label_369e00;
        }
    }
    ctx->pc = 0x369DF8u;
    // 0x369df8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x369DF8u;
    {
        const bool branch_taken_0x369df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369df8) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369E00u;
label_369e00:
    // 0x369e00: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x369e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x369e04: 0xc076664  jal         func_1D9990
    ctx->pc = 0x369E04u;
    SET_GPR_U32(ctx, 31, 0x369E0Cu);
    ctx->pc = 0x369E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E04u;
    // 0x369e08: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x369E04u, 0x369E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E0Cu;
label_369e0c:
    // 0x369e0c: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x369e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x369e10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x369e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x369e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x369e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369e18: 0x0  nop
    ctx->pc = 0x369e18u;
    // NOP
    // 0x369e1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x369e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369e20: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x369E20u;
    {
        const bool branch_taken_0x369e20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E20u;
        // 0x369e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e20) {
            ctx->pc = 0x369E30u;
            goto label_369e30;
        }
    }
    ctx->pc = 0x369E28u;
    // 0x369e28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x369E28u;
    {
        const bool branch_taken_0x369e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369e28) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369E30u;
label_369e30:
    // 0x369e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x369e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e34: 0xc0da738  jal         func_369CE0
    ctx->pc = 0x369E34u;
    SET_GPR_U32(ctx, 31, 0x369E3Cu);
    ctx->pc = 0x369E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E34u;
    // 0x369e38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369CE0u, 0x369E34u, 0x369E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E3Cu;
label_369e3c:
    // 0x369e3c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x369e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x369e40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x369e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e44: 0xc0da738  jal         func_369CE0
    ctx->pc = 0x369E44u;
    SET_GPR_U32(ctx, 31, 0x369E4Cu);
    ctx->pc = 0x369E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E44u;
    // 0x369e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369CE0u, 0x369E44u, 0x369E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E4Cu;
label_369e4c:
    // 0x369e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x369e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369e50: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x369e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x369e54: 0x90422b4c  lbu         $v0, 0x2B4C($v0)
    ctx->pc = 0x369e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11084)));
    // 0x369e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369E58u;
    {
        const bool branch_taken_0x369e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369e58) {
            ctx->pc = 0x369E68u;
            goto label_369e68;
        }
    }
    ctx->pc = 0x369E60u;
    // 0x369e60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x369E60u;
    {
        const bool branch_taken_0x369e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E60u;
        // 0x369e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e60) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369E68u;
label_369e68:
    // 0x369e68: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x369e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x369e6c: 0x90422b4c  lbu         $v0, 0x2B4C($v0)
    ctx->pc = 0x369e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11084)));
    // 0x369e70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369E70u;
    {
        const bool branch_taken_0x369e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E70u;
        // 0x369e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e70) {
            ctx->pc = 0x369E80u;
            goto label_369e80;
        }
    }
    ctx->pc = 0x369E78u;
    // 0x369e78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x369E78u;
    {
        const bool branch_taken_0x369e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369e78) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369E80u;
label_369e80:
    // 0x369e80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x369e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x369e84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x369e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x369e88: 0xc0c0890  jal         func_302240
    ctx->pc = 0x369E88u;
    SET_GPR_U32(ctx, 31, 0x369E90u);
    ctx->pc = 0x369E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369E88u;
    // 0x369e8c: 0x8c442b2c  lw          $a0, 0x2B2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x369E88u, 0x369E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E90u;
label_369e90:
    // 0x369e90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369E90u;
    {
        const bool branch_taken_0x369e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369e90) {
            ctx->pc = 0x369EA0u;
            goto label_369ea0;
        }
    }
    ctx->pc = 0x369E98u;
    // 0x369e98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x369E98u;
    {
        const bool branch_taken_0x369e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369E98u;
        // 0x369e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369e98) {
            ctx->pc = 0x369EB8u;
            goto label_369eb8;
        }
    }
    ctx->pc = 0x369EA0u;
label_369ea0:
    // 0x369ea0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x369ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x369ea4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x369ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x369ea8: 0xc0c0890  jal         func_302240
    ctx->pc = 0x369EA8u;
    SET_GPR_U32(ctx, 31, 0x369EB0u);
    ctx->pc = 0x369EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369EA8u;
    // 0x369eac: 0x8c442b2c  lw          $a0, 0x2B2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x369EA8u, 0x369EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EB0u;
label_369eb0:
    // 0x369eb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x369eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x369eb4: 0x0  nop
    ctx->pc = 0x369eb4u;
    // NOP
label_369eb8:
    // 0x369eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x369eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x369ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x369ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369ECCu;
        // 0x369ed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369ED4u;
}
