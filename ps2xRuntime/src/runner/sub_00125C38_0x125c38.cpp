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

// Function: sub_00125C38
// Address: 0x125c38 - 0x125e3c
void sub_00125C38_0x125c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125C38_0x125c38");
#endif

    switch (ctx->pc) {
        case 0x125c94u: goto label_125c94;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cf0u: goto label_125cf0;
        case 0x125d08u: goto label_125d08;
        case 0x125d7cu: goto label_125d7c;
        case 0x125e00u: goto label_125e00;
        default: break;
    }

    ctx->pc = 0x125c38u;

    // 0x125c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125c40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125c48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x125c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125c50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x125c54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x125c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x125c58: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x125c58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x125c5c: 0x8cd20010  lw          $s2, 0x10($a2)
    ctx->pc = 0x125c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x125c60: 0x272782a  slt         $t7, $s3, $s2
    ctx->pc = 0x125c60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x125c64: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125C64u;
    {
        const bool branch_taken_0x125c64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C64u;
        // 0x125c68: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c64) {
            ctx->pc = 0x125C7Cu;
            goto label_125c7c;
        }
    }
    ctx->pc = 0x125C6Cu;
    // 0x125c6c: 0x8cd30010  lw          $s3, 0x10($a2)
    ctx->pc = 0x125c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x125c70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c74: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x125c74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x125c78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x125c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125c7c:
    // 0x125c7c: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x125c7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x125c80: 0x2728821  addu        $s1, $s3, $s2
    ctx->pc = 0x125c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x125c84: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x125c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125c88: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x125c88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x125c8c: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x125C8Cu;
    SET_GPR_U32(ctx, 31, 0x125C94u);
    ctx->pc = 0x125C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C8Cu;
    // 0x125c90: 0xaf2821  addu        $a1, $a1, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x125C8Cu, 0x125C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C94u;
label_125c94:
    // 0x125c94: 0x24580014  addiu       $t8, $v0, 0x14
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x125c98: 0x11c880  sll         $t9, $s1, 2
    ctx->pc = 0x125c98u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x125c9c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x125c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x125ca0: 0x303782b  sltu        $t7, $t8, $v1
    ctx->pc = 0x125ca0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x125ca4: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x125CA4u;
    {
        const bool branch_taken_0x125ca4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CA4u;
        // 0x125ca8: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ca4) {
            ctx->pc = 0x125CCCu;
            goto label_125ccc;
        }
    }
    ctx->pc = 0x125CACu;
    // 0x125cac: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x125cacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_125cb0:
    // 0x125cb0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x125cb4: 0x123782b  sltu        $t7, $t1, $v1
    ctx->pc = 0x125cb4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x125cb8: 0x0  nop
    ctx->pc = 0x125cb8u;
    // NOP
    // 0x125cbc: 0x0  nop
    ctx->pc = 0x125cbcu;
    // NOP
    // 0x125cc0: 0x0  nop
    ctx->pc = 0x125cc0u;
    // NOP
    // 0x125cc4: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125CC4u;
    {
        const bool branch_taken_0x125cc4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125cc4) {
            ctx->pc = 0x125CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125CC4u;
            // 0x125cc8: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125cb0;
        }
    }
    ctx->pc = 0x125CCCu;
label_125ccc:
    // 0x125ccc: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x125cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x125cd0: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x125cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x125cd4: 0x137880  sll         $t7, $s3, 2
    ctx->pc = 0x125cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x125cd8: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x125cd8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x125cdc: 0xce8021  addu        $s0, $a2, $t6
    ctx->pc = 0x125cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x125ce0: 0x6f2821  addu        $a1, $v1, $t7
    ctx->pc = 0x125ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x125ce4: 0xd0782b  sltu        $t7, $a2, $s0
    ctx->pc = 0x125ce4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x125ce8: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x125CE8u;
    {
        const bool branch_taken_0x125ce8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CE8u;
        // 0x125cec: 0x300202d  daddu       $a0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ce8) {
            ctx->pc = 0x125DE4u;
            goto label_125de4;
        }
    }
    ctx->pc = 0x125CF0u;
label_125cf0:
    // 0x125cf0: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x125cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x125cf4: 0x31e7ffff  andi        $a3, $t7, 0xFFFF
    ctx->pc = 0x125cf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x125cf8: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x125CF8u;
    {
        const bool branch_taken_0x125cf8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF8u;
        // 0x125cfc: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cf8) {
            ctx->pc = 0x125D60u;
            goto label_125d60;
        }
    }
    ctx->pc = 0x125D00u;
    // 0x125d00: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x125d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125d08:
    // 0x125d08: 0x8d2f0000  lw          $t7, 0x0($t1)
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x125d0c: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x125d0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x125d10: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x125d10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x125d14: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x125d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x125d18: 0x1c77018  mult        $t6, $t6, $a3
    ctx->pc = 0x125d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x125d1c: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x125d20: 0x71e77818  mult1       $t7, $t7, $a3
    ctx->pc = 0x125d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x125d24: 0x31acffff  andi        $t4, $t5, 0xFFFF
    ctx->pc = 0x125d24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x125d28: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x125d2c: 0x125582b  sltu        $t3, $t1, $a1
    ctx->pc = 0x125d2cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125d30: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x125d34: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x125d34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x125d38: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x125d38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x125d3c: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x125d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x125d40: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x125d40u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x125d44: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x125d48: 0xa54f0002  sh          $t7, 0x2($t2)
    ctx->pc = 0x125d48u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 15));
    // 0x125d4c: 0xf4402  srl         $t0, $t7, 16
    ctx->pc = 0x125d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x125d50: 0x1560ffed  bnez        $t3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x125D50u;
    {
        const bool branch_taken_0x125d50 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x125D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D50u;
        // 0x125d54: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d50) {
            ctx->pc = 0x125D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125d08;
        }
    }
    ctx->pc = 0x125D58u;
    // 0x125d58: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x125d58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x125d5c: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x125d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_125d60:
    // 0x125d60: 0xf3c02  srl         $a3, $t7, 16
    ctx->pc = 0x125d60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x125d64: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x125D64u;
    {
        const bool branch_taken_0x125d64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D64u;
        // 0x125d68: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d64) {
            ctx->pc = 0x125DD4u;
            goto label_125dd4;
        }
    }
    ctx->pc = 0x125D6Cu;
    // 0x125d6c: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125d70: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x125d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d78: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x125d78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_125d7c:
    // 0x125d7c: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x125d7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x125d80: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x125d80u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x125d84: 0xa54f0000  sh          $t7, 0x0($t2)
    ctx->pc = 0x125d84u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x125d88: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x125d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x125d8c: 0x31afffff  andi        $t7, $t5, 0xFFFF
    ctx->pc = 0x125d8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x125d90: 0x125602b  sltu        $t4, $t1, $a1
    ctx->pc = 0x125d90u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125d94: 0x1e77818  mult        $t7, $t7, $a3
    ctx->pc = 0x125d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x125d98: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x125d9c: 0x71a76818  mult1       $t5, $t5, $a3
    ctx->pc = 0x125d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x125da0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x125da4: 0x1e87021  addu        $t6, $t7, $t0
    ctx->pc = 0x125da4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x125da8: 0xa54e0002  sh          $t6, 0x2($t2)
    ctx->pc = 0x125da8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x125dac: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x125dacu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x125db0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x125db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x125db4: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x125db4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x125db8: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x125db8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x125dbc: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x125dbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dc0: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x125dc4: 0x1a87821  addu        $t7, $t5, $t0
    ctx->pc = 0x125dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x125dc8: 0x1580ffec  bnez        $t4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x125DC8u;
    {
        const bool branch_taken_0x125dc8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DC8u;
        // 0x125dcc: 0xf4402  srl         $t0, $t7, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dc8) {
            ctx->pc = 0x125D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125d7c;
        }
    }
    ctx->pc = 0x125DD0u;
    // 0x125dd0: 0xad4f0000  sw          $t7, 0x0($t2)
    ctx->pc = 0x125dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 15));
label_125dd4:
    // 0x125dd4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x125dd8: 0xd0782b  sltu        $t7, $a2, $s0
    ctx->pc = 0x125dd8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x125ddc: 0x15e0ffc4  bnez        $t7, . + 4 + (-0x3C << 2)
    ctx->pc = 0x125DDCu;
    {
        const bool branch_taken_0x125ddc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DDCu;
        // 0x125de0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ddc) {
            ctx->pc = 0x125CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125cf0;
        }
    }
    ctx->pc = 0x125DE4u;
label_125de4:
    // 0x125de4: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x125DE4u;
    {
        const bool branch_taken_0x125de4 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x125DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DE4u;
        // 0x125de8: 0x3195021  addu        $t2, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125de4) {
            ctx->pc = 0x125E18u;
            goto label_125e18;
        }
    }
    ctx->pc = 0x125DECu;
    // 0x125dec: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x125decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x125df0: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x125df0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x125df4: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x125DF4u;
    {
        const bool branch_taken_0x125df4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125df4) {
            ctx->pc = 0x125DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125DF4u;
            // 0x125df8: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E1Cu;
            goto label_125e1c;
        }
    }
    ctx->pc = 0x125DFCu;
    // 0x125dfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x125dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_125e00:
    // 0x125e00: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x125E00u;
    {
        const bool branch_taken_0x125e00 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x125e00) {
            ctx->pc = 0x125E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E00u;
            // 0x125e04: 0xac510010  sw          $s1, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E1Cu;
            goto label_125e1c;
        }
    }
    ctx->pc = 0x125E08u;
    // 0x125e08: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x125e0c: 0x8d4f0000  lw          $t7, 0x0($t2)
    ctx->pc = 0x125e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x125e10: 0x51e0fffb  beql        $t7, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x125E10u;
    {
        const bool branch_taken_0x125e10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e10) {
            ctx->pc = 0x125E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E10u;
            // 0x125e14: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125e00;
        }
    }
    ctx->pc = 0x125E18u;
label_125e18:
    // 0x125e18: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x125e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_125e1c:
    // 0x125e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125e28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125e2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125e2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125e30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125e34: 0x3e00008  jr          $ra
    ctx->pc = 0x125E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E34u;
        // 0x125e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125E3Cu;
}
