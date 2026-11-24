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

// Function: sub_00242C88
// Address: 0x242c88 - 0x242ddc
void sub_00242C88_0x242c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242C88_0x242c88");
#endif

    switch (ctx->pc) {
        case 0x242cd8u: goto label_242cd8;
        case 0x242d00u: goto label_242d00;
        case 0x242d38u: goto label_242d38;
        case 0x242d4cu: goto label_242d4c;
        case 0x242d70u: goto label_242d70;
        case 0x242d98u: goto label_242d98;
        default: break;
    }

    ctx->pc = 0x242c88u;

    // 0x242c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x242c8c: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x242c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x242c90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x242c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x242c94: 0x2414fff8  addiu       $s4, $zero, -0x8
    ctx->pc = 0x242c94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x242c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242c9c: 0x548024  and         $s0, $v0, $s4
    ctx->pc = 0x242c9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x242ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242ca4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x242ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ca8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x242ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x242cac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x242cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cb0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x242cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x242cb4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x242cb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cc0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x242cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x242cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x242cc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x242cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x242ccc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x242cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x242cd0: 0xc049590  jal         func_125640
    ctx->pc = 0x242CD0u;
    SET_GPR_U32(ctx, 31, 0x242CD8u);
    ctx->pc = 0x242CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CD0u;
    // 0x242cd4: 0xe89821  addu        $s3, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x242CD0u, 0x242CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CD8u;
label_242cd8:
    // 0x242cd8: 0x26030057  addiu       $v1, $s0, 0x57
    ctx->pc = 0x242cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 87));
    // 0x242cdc: 0x742024  and         $a0, $v1, $s4
    ctx->pc = 0x242cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x242ce0: 0x24910034  addiu       $s1, $a0, 0x34
    ctx->pc = 0x242ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x242ce4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x242ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x242ce8: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x242CE8u;
    {
        const bool branch_taken_0x242ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CE8u;
        // 0x242cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ce8) {
            ctx->pc = 0x242DB4u;
            goto label_242db4;
        }
    }
    ctx->pc = 0x242CF0u;
    // 0x242cf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x242cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x242cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cf8: 0xc08f9ca  jal         func_23E728
    ctx->pc = 0x242CF8u;
    SET_GPR_U32(ctx, 31, 0x242D00u);
    ctx->pc = 0x242CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CF8u;
    // 0x242cfc: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E728u, 0x242CF8u, 0x242D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D00u;
label_242d00:
    // 0x242d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d04: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x242D04u;
    {
        const bool branch_taken_0x242d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D04u;
        // 0x242d08: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d04) {
            ctx->pc = 0x242DB4u;
            goto label_242db4;
        }
    }
    ctx->pc = 0x242D0Cu;
    // 0x242d0c: 0x26230007  addiu       $v1, $s1, 0x7
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x242d10: 0x742024  and         $a0, $v1, $s4
    ctx->pc = 0x242d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x242d14: 0x24821a4c  addiu       $v0, $a0, 0x1A4C
    ctx->pc = 0x242d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6732));
    // 0x242d18: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x242d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x242d1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242D1Cu;
    {
        const bool branch_taken_0x242d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d1c) {
            ctx->pc = 0x242D30u;
            goto label_242d30;
        }
    }
    ctx->pc = 0x242D24u;
    // 0x242d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x242D24u;
    {
        const bool branch_taken_0x242d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D24u;
        // 0x242d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d24) {
            ctx->pc = 0x242D44u;
            goto label_242d44;
        }
    }
    ctx->pc = 0x242D2Cu;
    // 0x242d2c: 0x0  nop
    ctx->pc = 0x242d2cu;
    // NOP
label_242d30:
    // 0x242d30: 0xc08fc5c  jal         func_23F170
    ctx->pc = 0x242D30u;
    SET_GPR_U32(ctx, 31, 0x242D38u);
    ctx->pc = 0x242D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D30u;
    // 0x242d34: 0x24051a4c  addiu       $a1, $zero, 0x1A4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F170u, 0x242D30u, 0x242D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D38u;
label_242d38:
    // 0x242d38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x242D38u;
    {
        const bool branch_taken_0x242d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D38u;
        // 0x242d3c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d38) {
            ctx->pc = 0x242D58u;
            goto label_242d58;
        }
    }
    ctx->pc = 0x242D40u;
    // 0x242d40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x242d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_242d44:
    // 0x242d44: 0xc08f9fc  jal         func_23E7F0
    ctx->pc = 0x242D44u;
    SET_GPR_U32(ctx, 31, 0x242D4Cu);
    ctx->pc = 0x23E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E7F0u, 0x242D44u, 0x242D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D4Cu;
label_242d4c:
    // 0x242d4c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x242D4Cu;
    {
        const bool branch_taken_0x242d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D4Cu;
        // 0x242d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d4c) {
            ctx->pc = 0x242DB4u;
            goto label_242db4;
        }
    }
    ctx->pc = 0x242D54u;
    // 0x242d54: 0x0  nop
    ctx->pc = 0x242d54u;
    // NOP
label_242d58:
    // 0x242d58: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x242d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x242d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d60: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x242D60u;
    {
        const bool branch_taken_0x242d60 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x242D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D60u;
        // 0x242d64: 0xa212000a  sb          $s2, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d60) {
            ctx->pc = 0x242D8Cu;
            goto label_242d8c;
        }
    }
    ctx->pc = 0x242D68u;
    // 0x242d68: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x242d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d6c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_242d70:
    // 0x242d70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x242d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242d74: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x242d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x242d78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x242d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x242d7c: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x242d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x242d80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x242d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x242d84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x242D84u;
    {
        const bool branch_taken_0x242d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D84u;
        // 0x242d88: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d84) {
            ctx->pc = 0x242D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242d70;
        }
    }
    ctx->pc = 0x242D8Cu;
label_242d8c:
    // 0x242d8c: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x242d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x242d90: 0xc090b14  jal         func_242C50
    ctx->pc = 0x242D90u;
    SET_GPR_U32(ctx, 31, 0x242D98u);
    ctx->pc = 0x242D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D90u;
    // 0x242d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242C50u, 0x242D90u, 0x242D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D98u;
label_242d98:
    // 0x242d98: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x242d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x242d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242da0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x242da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x242da4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x242da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x242da8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x242da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x242dac: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x242dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x242db0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x242db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242db4:
    // 0x242db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242dbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242dc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x242dc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x242dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242dc8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x242dc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x242dcc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x242dccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242dd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x242dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x242dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x242DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DD4u;
        // 0x242dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242DDCu;
}
