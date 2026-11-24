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

// Function: sub_003E8D90
// Address: 0x3e8d90 - 0x3e8ee8
void sub_003E8D90_0x3e8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8D90_0x3e8d90");
#endif

    switch (ctx->pc) {
        case 0x3e8dbcu: goto label_3e8dbc;
        case 0x3e8df0u: goto label_3e8df0;
        case 0x3e8dfcu: goto label_3e8dfc;
        case 0x3e8e60u: goto label_3e8e60;
        case 0x3e8e78u: goto label_3e8e78;
        case 0x3e8e90u: goto label_3e8e90;
        case 0x3e8ea8u: goto label_3e8ea8;
        case 0x3e8ec8u: goto label_3e8ec8;
        default: break;
    }

    ctx->pc = 0x3e8d90u;

    // 0x3e8d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e8d94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e8d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e8d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e8da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e8da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e8da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e8da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e8da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e8dac: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3e8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3e8db0: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x3e8db0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8db4: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3E8DB4u;
    SET_GPR_U32(ctx, 31, 0x3E8DBCu);
    ctx->pc = 0x3E8DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8DB4u;
    // 0x3e8db8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3E8DB4u, 0x3E8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8DBCu;
label_3e8dbc:
    // 0x3e8dbc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3e8dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8dc0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x3e8dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3e8dc4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3e8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e8dc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e8dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8dcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8dd0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x3e8dd0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e8dd4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e8dd8: 0x24424d70  addiu       $v0, $v0, 0x4D70
    ctx->pc = 0x3e8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19824));
    // 0x3e8ddc: 0x1812  mflo        $v1
    ctx->pc = 0x3e8ddcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3e8de0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e8de4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3e8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3e8de8: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3e8de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8dec: 0x0  nop
    ctx->pc = 0x3e8decu;
    // NOP
label_3e8df0:
    // 0x3e8df0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e8df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8df4: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x3E8DF4u;
    SET_GPR_U32(ctx, 31, 0x3E8DFCu);
    ctx->pc = 0x3E8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8DF4u;
    // 0x3e8df8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x3E8DF4u, 0x3E8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8DFCu;
label_3e8dfc:
    // 0x3e8dfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e8dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8e00: 0x86622ba8  lh          $v0, 0x2BA8($s3)
    ctx->pc = 0x3e8e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 11176)));
    // 0x3e8e04: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E8E04u;
    {
        const bool branch_taken_0x3e8e04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e8e04) {
            ctx->pc = 0x3E8E20u;
            goto label_3e8e20;
        }
    }
    ctx->pc = 0x3E8E0Cu;
    // 0x3e8e0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e8e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e8e10: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x3e8e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e8e14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3E8E14u;
    {
        const bool branch_taken_0x3e8e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e14) {
            ctx->pc = 0x3E8DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8df0;
        }
    }
    ctx->pc = 0x3E8E1Cu;
    // 0x3e8e1c: 0x0  nop
    ctx->pc = 0x3e8e1cu;
    // NOP
label_3e8e20:
    // 0x3e8e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e8e24: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E8E24u;
    {
        const bool branch_taken_0x3e8e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E24u;
        // 0x3e8e28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e24) {
            ctx->pc = 0x3E8E98u;
            goto label_3e8e98;
        }
    }
    ctx->pc = 0x3E8E2Cu;
    // 0x3e8e2c: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E8E2Cu;
    {
        const bool branch_taken_0x3e8e2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e8e2c) {
            ctx->pc = 0x3E8E80u;
            goto label_3e8e80;
        }
    }
    ctx->pc = 0x3E8E34u;
    // 0x3e8e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8e38: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E8E38u;
    {
        const bool branch_taken_0x3e8e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e8e38) {
            ctx->pc = 0x3E8E68u;
            goto label_3e8e68;
        }
    }
    ctx->pc = 0x3E8E40u;
    // 0x3e8e40: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8E40u;
    {
        const bool branch_taken_0x3e8e40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e40) {
            ctx->pc = 0x3E8E50u;
            goto label_3e8e50;
        }
    }
    ctx->pc = 0x3E8E48u;
    // 0x3e8e48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3E8E48u;
    {
        const bool branch_taken_0x3e8e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8e48) {
            ctx->pc = 0x3E8EB0u;
            goto label_3e8eb0;
        }
    }
    ctx->pc = 0x3E8E50u;
label_3e8e50:
    // 0x3e8e50: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3e8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3e8e54: 0x24844b10  addiu       $a0, $a0, 0x4B10
    ctx->pc = 0x3e8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19216));
    // 0x3e8e58: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x3E8E58u;
    SET_GPR_U32(ctx, 31, 0x3E8E60u);
    ctx->pc = 0x3E8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E58u;
    // 0x3e8e5c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x3E8E58u, 0x3E8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E60u;
label_3e8e60:
    // 0x3e8e60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3E8E60u;
    {
        const bool branch_taken_0x3e8e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E60u;
        // 0x3e8e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e60) {
            ctx->pc = 0x3E8EB0u;
            goto label_3e8eb0;
        }
    }
    ctx->pc = 0x3E8E68u;
label_3e8e68:
    // 0x3e8e68: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3e8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3e8e6c: 0x24844bb0  addiu       $a0, $a0, 0x4BB0
    ctx->pc = 0x3e8e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19376));
    // 0x3e8e70: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x3E8E70u;
    SET_GPR_U32(ctx, 31, 0x3E8E78u);
    ctx->pc = 0x3E8E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E70u;
    // 0x3e8e74: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x3E8E70u, 0x3E8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E78u;
label_3e8e78:
    // 0x3e8e78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3E8E78u;
    {
        const bool branch_taken_0x3e8e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E78u;
        // 0x3e8e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e78) {
            ctx->pc = 0x3E8EB0u;
            goto label_3e8eb0;
        }
    }
    ctx->pc = 0x3E8E80u;
label_3e8e80:
    // 0x3e8e80: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3e8e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3e8e84: 0x24844c50  addiu       $a0, $a0, 0x4C50
    ctx->pc = 0x3e8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19536));
    // 0x3e8e88: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x3E8E88u;
    SET_GPR_U32(ctx, 31, 0x3E8E90u);
    ctx->pc = 0x3E8E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8E88u;
    // 0x3e8e8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x3E8E88u, 0x3E8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8E90u;
label_3e8e90:
    // 0x3e8e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E8E90u;
    {
        const bool branch_taken_0x3e8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8E90u;
        // 0x3e8e94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8e90) {
            ctx->pc = 0x3E8EB0u;
            goto label_3e8eb0;
        }
    }
    ctx->pc = 0x3E8E98u;
label_3e8e98:
    // 0x3e8e98: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3e8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3e8e9c: 0x24844cf0  addiu       $a0, $a0, 0x4CF0
    ctx->pc = 0x3e8e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19696));
    // 0x3e8ea0: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x3E8EA0u;
    SET_GPR_U32(ctx, 31, 0x3E8EA8u);
    ctx->pc = 0x3E8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8EA0u;
    // 0x3e8ea4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x3E8EA0u, 0x3E8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8EA8u;
label_3e8ea8:
    // 0x3e8ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8eac: 0x0  nop
    ctx->pc = 0x3e8eacu;
    // NOP
label_3e8eb0:
    // 0x3e8eb0: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x3e8eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3e8eb4: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3e8eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3e8eb8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3e8eb8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3e8ebc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3e8ebcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3e8ec0: 0xc0fa3bc  jal         func_3E8EF0
    ctx->pc = 0x3E8EC0u;
    SET_GPR_U32(ctx, 31, 0x3E8EC8u);
    ctx->pc = 0x3E8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8EC0u;
    // 0x3e8ec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8EF0u, 0x3E8EC0u, 0x3E8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8EC8u;
label_3e8ec8:
    // 0x3e8ec8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e8ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e8ecc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e8eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e8ed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e8ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e8ed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e8ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e8ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e8ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EE0u;
        // 0x3e8ee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8EE8u;
}
