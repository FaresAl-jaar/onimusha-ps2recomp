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

// Function: sub_00248CA0
// Address: 0x248ca0 - 0x248e28
void sub_00248CA0_0x248ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248CA0_0x248ca0");
#endif

    switch (ctx->pc) {
        case 0x248cf0u: goto label_248cf0;
        case 0x248d04u: goto label_248d04;
        case 0x248d24u: goto label_248d24;
        case 0x248d34u: goto label_248d34;
        case 0x248d3cu: goto label_248d3c;
        case 0x248d40u: goto label_248d40;
        case 0x248d48u: goto label_248d48;
        case 0x248d58u: goto label_248d58;
        case 0x248d60u: goto label_248d60;
        case 0x248d6cu: goto label_248d6c;
        case 0x248d88u: goto label_248d88;
        case 0x248da4u: goto label_248da4;
        case 0x248db8u: goto label_248db8;
        case 0x248dccu: goto label_248dcc;
        case 0x248de0u: goto label_248de0;
        case 0x248de8u: goto label_248de8;
        case 0x248df0u: goto label_248df0;
        case 0x248df8u: goto label_248df8;
        case 0x248e08u: goto label_248e08;
        default: break;
    }

    ctx->pc = 0x248ca0u;

    // 0x248ca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x248ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x248ca4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x248ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x248ca8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x248ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x248cac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cb0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x248cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x248cb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x248cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cb8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x248cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x248cbc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x248cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x248cc0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x248cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x248cc4: 0x2465d070  addiu       $a1, $v1, -0x2F90
    ctx->pc = 0x248cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955120));
    // 0x248cc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x248cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x248ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cd0: 0x8a230003  lwl         $v1, 0x3($s1)
    ctx->pc = 0x248cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x248cd4: 0x9a230000  lwr         $v1, 0x0($s1)
    ctx->pc = 0x248cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x248cd8: 0x82260004  lb          $a2, 0x4($s1)
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x248cdc: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x248cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x248ce0: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x248ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x248ce4: 0xa0460004  sb          $a2, 0x4($v0)
    ctx->pc = 0x248ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x248ce8: 0xc049da8  jal         func_1276A0
    ctx->pc = 0x248CE8u;
    SET_GPR_U32(ctx, 31, 0x248CF0u);
    ctx->pc = 0x248CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CE8u;
    // 0x248cec: 0xa3a00044  sb          $zero, 0x44($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276A0u, 0x248CE8u, 0x248CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CF0u;
label_248cf0:
    // 0x248cf0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x248CF0u;
    {
        const bool branch_taken_0x248cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248cf0) {
            ctx->pc = 0x248CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248CF0u;
            // 0x248cf4: 0x3c13004d  lui         $s3, 0x4D (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D10u;
            goto label_248d10;
        }
    }
    ctx->pc = 0x248CF8u;
    // 0x248cf8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x248cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x248cfc: 0xc092a56  jal         func_24A958
    ctx->pc = 0x248CFCu;
    SET_GPR_U32(ctx, 31, 0x248D04u);
    ctx->pc = 0x248D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CFCu;
    // 0x248d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A958u, 0x248CFCu, 0x248D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D04u;
label_248d04:
    // 0x248d04: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x248D04u;
    {
        const bool branch_taken_0x248d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D04u;
        // 0x248d08: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d04) {
            ctx->pc = 0x248E10u;
            goto label_248e10;
        }
    }
    ctx->pc = 0x248D0Cu;
    // 0x248d0c: 0x0  nop
    ctx->pc = 0x248d0cu;
    // NOP
label_248d10:
    // 0x248d10: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x248d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x248d14: 0x26700c68  addiu       $s0, $s3, 0xC68
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
    // 0x248d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d1c: 0xc049590  jal         func_125640
    ctx->pc = 0x248D1Cu;
    SET_GPR_U32(ctx, 31, 0x248D24u);
    ctx->pc = 0x248D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D1Cu;
    // 0x248d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x248D1Cu, 0x248D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D24u;
label_248d24:
    // 0x248d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d2c: 0xc09224e  jal         func_248938
    ctx->pc = 0x248D2Cu;
    SET_GPR_U32(ctx, 31, 0x248D34u);
    ctx->pc = 0x248D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D2Cu;
    // 0x248d30: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x248D2Cu, 0x248D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D34u;
label_248d34:
    // 0x248d34: 0xc091a44  jal         func_246910
    ctx->pc = 0x248D34u;
    SET_GPR_U32(ctx, 31, 0x248D3Cu);
    ctx->pc = 0x248D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D34u;
    // 0x248d38: 0x34049000  ori         $a0, $zero, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248D34u, 0x248D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D3Cu;
label_248d3c:
    // 0x248d3c: 0x0  nop
    ctx->pc = 0x248d3cu;
    // NOP
label_248d40:
    // 0x248d40: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x248D40u;
    SET_GPR_U32(ctx, 31, 0x248D48u);
    ctx->pc = 0x248D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D40u;
    // 0x248d44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x248D40u, 0x248D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D48u;
label_248d48:
    // 0x248d48: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x248D48u;
    {
        const bool branch_taken_0x248d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x248d48) {
            ctx->pc = 0x248D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d40;
        }
    }
    ctx->pc = 0x248D50u;
    // 0x248d50: 0xc091a44  jal         func_246910
    ctx->pc = 0x248D50u;
    SET_GPR_U32(ctx, 31, 0x248D58u);
    ctx->pc = 0x248D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D50u;
    // 0x248d54: 0x34049001  ori         $a0, $zero, 0x9001 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248D50u, 0x248D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D58u;
label_248d58:
    // 0x248d58: 0xc091a44  jal         func_246910
    ctx->pc = 0x248D58u;
    SET_GPR_U32(ctx, 31, 0x248D60u);
    ctx->pc = 0x248D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D58u;
    // 0x248d5c: 0x34049100  ori         $a0, $zero, 0x9100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37120);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248D58u, 0x248D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D60u;
label_248d60:
    // 0x248d60: 0x26650c68  addiu       $a1, $s3, 0xC68
    ctx->pc = 0x248d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
    // 0x248d64: 0xc091f58  jal         func_247D60
    ctx->pc = 0x248D64u;
    SET_GPR_U32(ctx, 31, 0x248D6Cu);
    ctx->pc = 0x248D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D64u;
    // 0x248d68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x248D64u, 0x248D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D6Cu;
label_248d6c:
    // 0x248d6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248D6Cu;
    {
        const bool branch_taken_0x248d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248d6c) {
            ctx->pc = 0x248D80u;
            goto label_248d80;
        }
    }
    ctx->pc = 0x248D74u;
    // 0x248d74: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x248D74u;
    {
        const bool branch_taken_0x248d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D74u;
        // 0x248d78: 0x34049101  ori         $a0, $zero, 0x9101 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37121);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d74) {
            ctx->pc = 0x248DC4u;
            goto label_248dc4;
        }
    }
    ctx->pc = 0x248D7Cu;
    // 0x248d7c: 0x0  nop
    ctx->pc = 0x248d7cu;
    // NOP
label_248d80:
    // 0x248d80: 0xc091a44  jal         func_246910
    ctx->pc = 0x248D80u;
    SET_GPR_U32(ctx, 31, 0x248D88u);
    ctx->pc = 0x248D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D80u;
    // 0x248d84: 0x34049102  ori         $a0, $zero, 0x9102 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37122);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248D80u, 0x248D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D88u;
label_248d88:
    // 0x248d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248d8c: 0x34049200  ori         $a0, $zero, 0x9200
    ctx->pc = 0x248d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37376);
    // 0x248d90: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x248d90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x248d94: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x248d94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x248d98: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x248d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x248d9c: 0xc091a44  jal         func_246910
    ctx->pc = 0x248D9Cu;
    SET_GPR_U32(ctx, 31, 0x248DA4u);
    ctx->pc = 0x248DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D9Cu;
    // 0x248da0: 0xa3a00033  sb          $zero, 0x33($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248D9Cu, 0x248DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DA4u;
label_248da4:
    // 0x248da4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248da8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x248da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248dac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x248dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248db0: 0xc0480fa  jal         func_1203E8
    ctx->pc = 0x248DB0u;
    SET_GPR_U32(ctx, 31, 0x248DB8u);
    ctx->pc = 0x248DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248DB0u;
    // 0x248db4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1203E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203E8u, 0x248DB0u, 0x248DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DB8u;
label_248db8:
    // 0x248db8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248DB8u;
    {
        const bool branch_taken_0x248db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248db8) {
            ctx->pc = 0x248DD8u;
            goto label_248dd8;
        }
    }
    ctx->pc = 0x248DC0u;
    // 0x248dc0: 0x34049201  ori         $a0, $zero, 0x9201
    ctx->pc = 0x248dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37377);
label_248dc4:
    // 0x248dc4: 0xc091a44  jal         func_246910
    ctx->pc = 0x248DC4u;
    SET_GPR_U32(ctx, 31, 0x248DCCu);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248DC4u, 0x248DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DCCu;
label_248dcc:
    // 0x248dcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x248DCCu;
    {
        const bool branch_taken_0x248dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DCCu;
        // 0x248dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dcc) {
            ctx->pc = 0x248E0Cu;
            goto label_248e0c;
        }
    }
    ctx->pc = 0x248DD4u;
    // 0x248dd4: 0x0  nop
    ctx->pc = 0x248dd4u;
    // NOP
label_248dd8:
    // 0x248dd8: 0xc091a44  jal         func_246910
    ctx->pc = 0x248DD8u;
    SET_GPR_U32(ctx, 31, 0x248DE0u);
    ctx->pc = 0x248DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248DD8u;
    // 0x248ddc: 0x34049202  ori         $a0, $zero, 0x9202 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37378);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248DD8u, 0x248DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DE0u;
label_248de0:
    // 0x248de0: 0xc091a44  jal         func_246910
    ctx->pc = 0x248DE0u;
    SET_GPR_U32(ctx, 31, 0x248DE8u);
    ctx->pc = 0x248DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248DE0u;
    // 0x248de4: 0x34049300  ori         $a0, $zero, 0x9300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248DE0u, 0x248DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DE8u;
label_248de8:
    // 0x248de8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x248de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248dec: 0x0  nop
    ctx->pc = 0x248decu;
    // NOP
label_248df0:
    // 0x248df0: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x248DF0u;
    SET_GPR_U32(ctx, 31, 0x248DF8u);
    ctx->pc = 0x248DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248DF0u;
    // 0x248df4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x248DF0u, 0x248DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DF8u;
label_248df8:
    // 0x248df8: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x248DF8u;
    {
        const bool branch_taken_0x248df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x248df8) {
            ctx->pc = 0x248DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248df0;
        }
    }
    ctx->pc = 0x248E00u;
    // 0x248e00: 0xc091a44  jal         func_246910
    ctx->pc = 0x248E00u;
    SET_GPR_U32(ctx, 31, 0x248E08u);
    ctx->pc = 0x248E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E00u;
    // 0x248e04: 0x34049301  ori         $a0, $zero, 0x9301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x248E00u, 0x248E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E08u;
label_248e08:
    // 0x248e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248e0c:
    // 0x248e0c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x248e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_248e10:
    // 0x248e10: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x248e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x248e14: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248e18: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x248e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248e1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x248e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248e20: 0x3e00008  jr          $ra
    ctx->pc = 0x248E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E20u;
        // 0x248e24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E28u;
}
