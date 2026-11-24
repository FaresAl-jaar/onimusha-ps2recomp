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

// Function: sub_002C4C40
// Address: 0x2c4c40 - 0x2c52c8
void sub_002C4C40_0x2c4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4C40_0x2c4c40");
#endif

    switch (ctx->pc) {
        case 0x2c4d00u: goto label_2c4d00;
        case 0x2c4d1cu: goto label_2c4d1c;
        case 0x2c4d2cu: goto label_2c4d2c;
        case 0x2c4dd0u: goto label_2c4dd0;
        case 0x2c4e10u: goto label_2c4e10;
        case 0x2c4e74u: goto label_2c4e74;
        case 0x2c4e88u: goto label_2c4e88;
        case 0x2c527cu: goto label_2c527c;
        default: break;
    }

    ctx->pc = 0x2c4c40u;

    // 0x2c4c40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c4c44: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c4c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c4c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4c54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c4c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4c5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c4c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4c64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c4c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4c6c: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c4c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c4c70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c74: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x2c4c74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c4c78: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2c4c78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2c4c7c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2c4c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2c4c80: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4C80u;
    {
        const bool branch_taken_0x2c4c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C80u;
        // 0x2c4c84: 0x30910001  andi        $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c80) {
            ctx->pc = 0x2C4D08u;
            goto label_2c4d08;
        }
    }
    ctx->pc = 0x2C4C88u;
    // 0x2c4c88: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c4c8c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C4C8Cu;
    {
        const bool branch_taken_0x2c4c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C8Cu;
        // 0x2c4c90: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c8c) {
            ctx->pc = 0x2C4CF0u;
            goto label_2c4cf0;
        }
    }
    ctx->pc = 0x2C4C94u;
    // 0x2c4c94: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4C94u;
    {
        const bool branch_taken_0x2c4c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4c94) {
            ctx->pc = 0x2C4CD0u;
            goto label_2c4cd0;
        }
    }
    ctx->pc = 0x2C4C9Cu;
    // 0x2c4c9c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4ca0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4CA0u;
    {
        const bool branch_taken_0x2c4ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4ca0) {
            ctx->pc = 0x2C4CB0u;
            goto label_2c4cb0;
        }
    }
    ctx->pc = 0x2C4CA8u;
    // 0x2c4ca8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C4CA8u;
    {
        const bool branch_taken_0x2c4ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ca8) {
            ctx->pc = 0x2C4D10u;
            goto label_2c4d10;
        }
    }
    ctx->pc = 0x2C4CB0u;
label_2c4cb0:
    // 0x2c4cb0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c4cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c4cb4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c4cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c4cb8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c4cbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4cc4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4CC4u;
    {
        const bool branch_taken_0x2c4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CC4u;
        // 0x2c4cc8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cc4) {
            ctx->pc = 0x2C4D10u;
            goto label_2c4d10;
        }
    }
    ctx->pc = 0x2C4CCCu;
    // 0x2c4ccc: 0x0  nop
    ctx->pc = 0x2c4cccu;
    // NOP
label_2c4cd0:
    // 0x2c4cd0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c4cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c4cd4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c4cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c4cd8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c4cdc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c4cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c4ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4ce8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4CE8u;
    {
        const bool branch_taken_0x2c4ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CE8u;
        // 0x2c4cec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ce8) {
            ctx->pc = 0x2C4D10u;
            goto label_2c4d10;
        }
    }
    ctx->pc = 0x2C4CF0u;
label_2c4cf0:
    // 0x2c4cf0: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c4cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c4cf4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c4cf8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C4CF8u;
    SET_GPR_U32(ctx, 31, 0x2C4D00u);
    ctx->pc = 0x2C4CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CF8u;
    // 0x2c4cfc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C4CF8u, 0x2C4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D00u;
label_2c4d00:
    // 0x2c4d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4D00u;
    {
        const bool branch_taken_0x2c4d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D00u;
        // 0x2c4d04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d00) {
            ctx->pc = 0x2C4D10u;
            goto label_2c4d10;
        }
    }
    ctx->pc = 0x2C4D08u;
label_2c4d08:
    // 0x2c4d08: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2c4d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d0c: 0x0  nop
    ctx->pc = 0x2c4d0cu;
    // NOP
label_2c4d10:
    // 0x2c4d10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d14: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C4D14u;
    SET_GPR_U32(ctx, 31, 0x2C4D1Cu);
    ctx->pc = 0x2C4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D14u;
    // 0x2c4d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C4D14u, 0x2C4D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D1Cu;
label_2c4d1c:
    // 0x2c4d1c: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x2C4D1Cu;
    {
        const bool branch_taken_0x2c4d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D1Cu;
        // 0x2c4d20: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d1c) {
            ctx->pc = 0x2C5218u;
            goto label_2c5218;
        }
    }
    ctx->pc = 0x2C4D24u;
    // 0x2c4d24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4D24u;
    {
        const bool branch_taken_0x2c4d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D24u;
        // 0x2c4d28: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d24) {
            ctx->pc = 0x2C4D48u;
            goto label_2c4d48;
        }
    }
    ctx->pc = 0x2C4D2Cu;
label_2c4d2c:
    // 0x2c4d2c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2c4d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4d30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c4d34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4d38: 0x0  nop
    ctx->pc = 0x2c4d38u;
    // NOP
    // 0x2c4d3c: 0x0  nop
    ctx->pc = 0x2c4d3cu;
    // NOP
    // 0x2c4d40: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C4D40u;
    {
        const bool branch_taken_0x2c4d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d40) {
            ctx->pc = 0x2C4D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4d2c;
        }
    }
    ctx->pc = 0x2C4D48u;
label_2c4d48:
    // 0x2c4d48: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x2c4d48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c4d4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c4d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d54: 0x0  nop
    ctx->pc = 0x2c4d54u;
    // NOP
    // 0x2c4d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4d5c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2c4d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2c4d60: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x2c4d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2c4d64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c4d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d68: 0x0  nop
    ctx->pc = 0x2c4d68u;
    // NOP
    // 0x2c4d6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4d70: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2c4d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2c4d74: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x2c4d74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2c4d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c4d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d7c: 0x0  nop
    ctx->pc = 0x2c4d7cu;
    // NOP
    // 0x2c4d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4d84: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2c4d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2c4d88: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2c4d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c4d8c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2c4d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2c4d90: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4D90u;
    {
        const bool branch_taken_0x2c4d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D90u;
        // 0x2c4d94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d90) {
            ctx->pc = 0x2C4E18u;
            goto label_2c4e18;
        }
    }
    ctx->pc = 0x2C4D98u;
    // 0x2c4d98: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4D98u;
    {
        const bool branch_taken_0x2c4d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4d98) {
            ctx->pc = 0x2C4DD8u;
            goto label_2c4dd8;
        }
    }
    ctx->pc = 0x2C4DA0u;
    // 0x2c4da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4da4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4DA4u;
    {
        const bool branch_taken_0x2c4da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4da4) {
            ctx->pc = 0x2C4DC0u;
            goto label_2c4dc0;
        }
    }
    ctx->pc = 0x2C4DACu;
    // 0x2c4dac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C4DACu;
    {
        const bool branch_taken_0x2c4dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4dac) {
            ctx->pc = 0x2C4E78u;
            goto label_2c4e78;
        }
    }
    ctx->pc = 0x2C4DB4u;
    // 0x2c4db4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C4DB4u;
    {
        const bool branch_taken_0x2c4db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4db4) {
            ctx->pc = 0x2C4E78u;
            goto label_2c4e78;
        }
    }
    ctx->pc = 0x2C4DBCu;
    // 0x2c4dbc: 0x0  nop
    ctx->pc = 0x2c4dbcu;
    // NOP
label_2c4dc0:
    // 0x2c4dc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c4dc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c4dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dc8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2C4DC8u;
    SET_GPR_U32(ctx, 31, 0x2C4DD0u);
    ctx->pc = 0x2C4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DC8u;
    // 0x2c4dcc: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2C4DC8u, 0x2C4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DD0u;
label_2c4dd0:
    // 0x2c4dd0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2C4DD0u;
    {
        const bool branch_taken_0x2c4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4dd0) {
            ctx->pc = 0x2C4E78u;
            goto label_2c4e78;
        }
    }
    ctx->pc = 0x2C4DD8u;
label_2c4dd8:
    // 0x2c4dd8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c4dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c4ddc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c4ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c4de0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c4de4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4dec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4DF0u;
    {
        const bool branch_taken_0x2c4df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DF0u;
        // 0x2c4df4: 0x3c06008d  lui         $a2, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4df0) {
            ctx->pc = 0x2C4E00u;
            goto label_2c4e00;
        }
    }
    ctx->pc = 0x2C4DF8u;
    // 0x2c4df8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4DF8u;
    {
        const bool branch_taken_0x2c4df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DF8u;
        // 0x2c4dfc: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4df8) {
            ctx->pc = 0x2C4E04u;
            goto label_2c4e04;
        }
    }
    ctx->pc = 0x2C4E00u;
label_2c4e00:
    // 0x2c4e00: 0x24c65ee0  addiu       $a2, $a2, 0x5EE0
    ctx->pc = 0x2c4e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24288));
label_2c4e04:
    // 0x2c4e04: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c4e08: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2C4E08u;
    SET_GPR_U32(ctx, 31, 0x2C4E10u);
    ctx->pc = 0x2C4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E08u;
    // 0x2c4e0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2C4E08u, 0x2C4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E10u;
label_2c4e10:
    // 0x2c4e10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C4E10u;
    {
        const bool branch_taken_0x2c4e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e10) {
            ctx->pc = 0x2C4E78u;
            goto label_2c4e78;
        }
    }
    ctx->pc = 0x2C4E18u;
label_2c4e18:
    // 0x2c4e18: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c4e1c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2c4e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c4e20: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2c4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c4e24: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2c4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2c4e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4e2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4e30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4e34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4E34u;
    {
        const bool branch_taken_0x2c4e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E34u;
        // 0x2c4e38: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e34) {
            ctx->pc = 0x2C4E48u;
            goto label_2c4e48;
        }
    }
    ctx->pc = 0x2C4E3Cu;
    // 0x2c4e3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C4E3Cu;
    {
        const bool branch_taken_0x2c4e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e3c) {
            ctx->pc = 0x2C4E68u;
            goto label_2c4e68;
        }
    }
    ctx->pc = 0x2C4E44u;
    // 0x2c4e44: 0x0  nop
    ctx->pc = 0x2c4e44u;
    // NOP
label_2c4e48:
    // 0x2c4e48: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2c4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4e4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4e54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4E54u;
    {
        const bool branch_taken_0x2c4e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E54u;
        // 0x2c4e58: 0x3c06008d  lui         $a2, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e54) {
            ctx->pc = 0x2C4E64u;
            goto label_2c4e64;
        }
    }
    ctx->pc = 0x2C4E5Cu;
    // 0x2c4e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4E5Cu;
    {
        const bool branch_taken_0x2c4e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E5Cu;
        // 0x2c4e60: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e5c) {
            ctx->pc = 0x2C4E68u;
            goto label_2c4e68;
        }
    }
    ctx->pc = 0x2C4E64u;
label_2c4e64:
    // 0x2c4e64: 0x24c65ee0  addiu       $a2, $a2, 0x5EE0
    ctx->pc = 0x2c4e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24288));
label_2c4e68:
    // 0x2c4e68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c4e6c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2C4E6Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E74u);
    ctx->pc = 0x2C4E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E6Cu;
    // 0x2c4e70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2C4E6Cu, 0x2C4E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E74u;
label_2c4e74:
    // 0x2c4e74: 0x0  nop
    ctx->pc = 0x2c4e74u;
    // NOP
label_2c4e78:
    // 0x2c4e78: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2c4e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c4e7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c4e80: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C4E80u;
    SET_GPR_U32(ctx, 31, 0x2C4E88u);
    ctx->pc = 0x2C4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E80u;
    // 0x2c4e84: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C4E80u, 0x2C4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E88u;
label_2c4e88:
    // 0x2c4e88: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2c4e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c4e8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4e90: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2c4e90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2c4e94: 0x106200a4  beq         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2C4E94u;
    {
        const bool branch_taken_0x2c4e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E94u;
        // 0x2c4e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e94) {
            ctx->pc = 0x2C5128u;
            goto label_2c5128;
        }
    }
    ctx->pc = 0x2C4E9Cu;
    // 0x2c4e9c: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2C4E9Cu;
    {
        const bool branch_taken_0x2c4e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4e9c) {
            ctx->pc = 0x2C5010u;
            goto label_2c5010;
        }
    }
    ctx->pc = 0x2C4EA4u;
    // 0x2c4ea4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4EA4u;
    {
        const bool branch_taken_0x2c4ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ea4) {
            ctx->pc = 0x2C4EB8u;
            goto label_2c4eb8;
        }
    }
    ctx->pc = 0x2C4EACu;
    // 0x2c4eac: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2C4EACu;
    {
        const bool branch_taken_0x2c4eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4eac) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C4EB4u;
    // 0x2c4eb4: 0x0  nop
    ctx->pc = 0x2c4eb4u;
    // NOP
label_2c4eb8:
    // 0x2c4eb8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c4eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ec0: 0x0  nop
    ctx->pc = 0x2c4ec0u;
    // NOP
    // 0x2c4ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4ec8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4EC8u;
    {
        const bool branch_taken_0x2c4ec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4ec8) {
            ctx->pc = 0x2C4ED4u;
            goto label_2c4ed4;
        }
    }
    ctx->pc = 0x2C4ED0u;
    // 0x2c4ed0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c4ed0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2c4ed4:
    // 0x2c4ed4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c4ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4edc: 0x0  nop
    ctx->pc = 0x2c4edcu;
    // NOP
    // 0x2c4ee0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c4ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4ee4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4EE4u;
    {
        const bool branch_taken_0x2c4ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4ee4) {
            ctx->pc = 0x2C4EFCu;
            goto label_2c4efc;
        }
    }
    ctx->pc = 0x2C4EECu;
    // 0x2c4eec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c4ef0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c4ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c4ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4EF4u;
    {
        const bool branch_taken_0x2c4ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EF4u;
        // 0x2c4ef8: 0x9642000a  lhu         $v0, 0xA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ef4) {
            ctx->pc = 0x2C4F18u;
            goto label_2c4f18;
        }
    }
    ctx->pc = 0x2C4EFCu;
label_2c4efc:
    // 0x2c4efc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c4efcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4f00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c4f04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c4f08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c4f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c4f0c: 0x0  nop
    ctx->pc = 0x2c4f0cu;
    // NOP
    // 0x2c4f10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c4f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c4f14: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2c4f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_2c4f18:
    // 0x2c4f18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c4f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c4f1c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c4f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c4f20: 0x102000bf  beqz        $at, . + 4 + (0xBF << 2)
    ctx->pc = 0x2C4F20u;
    {
        const bool branch_taken_0x2c4f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f20) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C4F28u;
    // 0x2c4f28: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2c4f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f30: 0x0  nop
    ctx->pc = 0x2c4f30u;
    // NOP
    // 0x2c4f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4f38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4F38u;
    {
        const bool branch_taken_0x2c4f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4f38) {
            ctx->pc = 0x2C4F44u;
            goto label_2c4f44;
        }
    }
    ctx->pc = 0x2C4F40u;
    // 0x2c4f40: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c4f40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2c4f44:
    // 0x2c4f44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c4f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f4c: 0x0  nop
    ctx->pc = 0x2c4f4cu;
    // NOP
    // 0x2c4f50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c4f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4f54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4F54u;
    {
        const bool branch_taken_0x2c4f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4f54) {
            ctx->pc = 0x2C4F6Cu;
            goto label_2c4f6c;
        }
    }
    ctx->pc = 0x2C4F5Cu;
    // 0x2c4f5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c4f60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c4f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c4f64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4F64u;
    {
        const bool branch_taken_0x2c4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F64u;
        // 0x2c4f68: 0x9642000c  lhu         $v0, 0xC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f64) {
            ctx->pc = 0x2C4F88u;
            goto label_2c4f88;
        }
    }
    ctx->pc = 0x2C4F6Cu;
label_2c4f6c:
    // 0x2c4f6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c4f6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4f70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c4f74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c4f78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c4f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c4f7c: 0x0  nop
    ctx->pc = 0x2c4f7cu;
    // NOP
    // 0x2c4f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c4f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c4f84: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2c4f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_2c4f88:
    // 0x2c4f88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c4f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c4f8c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c4f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c4f90: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2C4F90u;
    {
        const bool branch_taken_0x2c4f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f90) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C4F98u;
    // 0x2c4f98: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2c4f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4f9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fa0: 0x0  nop
    ctx->pc = 0x2c4fa0u;
    // NOP
    // 0x2c4fa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4fa8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4FA8u;
    {
        const bool branch_taken_0x2c4fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4fa8) {
            ctx->pc = 0x2C4FB4u;
            goto label_2c4fb4;
        }
    }
    ctx->pc = 0x2C4FB0u;
    // 0x2c4fb0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c4fb0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2c4fb4:
    // 0x2c4fb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c4fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fbc: 0x0  nop
    ctx->pc = 0x2c4fbcu;
    // NOP
    // 0x2c4fc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c4fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4fc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4FC4u;
    {
        const bool branch_taken_0x2c4fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4fc4) {
            ctx->pc = 0x2C4FDCu;
            goto label_2c4fdc;
        }
    }
    ctx->pc = 0x2C4FCCu;
    // 0x2c4fcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c4fd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c4fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c4fd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4FD4u;
    {
        const bool branch_taken_0x2c4fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FD4u;
        // 0x2c4fd8: 0x9642000e  lhu         $v0, 0xE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fd4) {
            ctx->pc = 0x2C4FF8u;
            goto label_2c4ff8;
        }
    }
    ctx->pc = 0x2C4FDCu;
label_2c4fdc:
    // 0x2c4fdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c4fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c4fe4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c4fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c4fe8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c4fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c4fec: 0x0  nop
    ctx->pc = 0x2c4fecu;
    // NOP
    // 0x2c4ff0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c4ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c4ff4: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x2c4ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_2c4ff8:
    // 0x2c4ff8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c4ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c4ffc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c4ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5000: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
    ctx->pc = 0x2C5000u;
    {
        const bool branch_taken_0x2c5000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5000) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5008u;
    // 0x2c5008: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2C5008u;
    {
        const bool branch_taken_0x2c5008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5008u;
        // 0x2c500c: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5008) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5010u;
label_2c5010:
    // 0x2c5010: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2c5010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5018: 0x0  nop
    ctx->pc = 0x2c5018u;
    // NOP
    // 0x2c501c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c501cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5020: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5020u;
    {
        const bool branch_taken_0x2c5020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5020) {
            ctx->pc = 0x2C502Cu;
            goto label_2c502c;
        }
    }
    ctx->pc = 0x2C5028u;
    // 0x2c5028: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c5028u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2c502c:
    // 0x2c502c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c5030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5034: 0x0  nop
    ctx->pc = 0x2c5034u;
    // NOP
    // 0x2c5038: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c5038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c503c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C503Cu;
    {
        const bool branch_taken_0x2c503c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c503c) {
            ctx->pc = 0x2C5054u;
            goto label_2c5054;
        }
    }
    ctx->pc = 0x2C5044u;
    // 0x2c5044: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c5044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c5048: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c5048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c504c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C504Cu;
    {
        const bool branch_taken_0x2c504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C504Cu;
        // 0x2c5050: 0x9642000c  lhu         $v0, 0xC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c504c) {
            ctx->pc = 0x2C5070u;
            goto label_2c5070;
        }
    }
    ctx->pc = 0x2C5054u;
label_2c5054:
    // 0x2c5054: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c5054u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c5058: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c505c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c505cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c5060: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c5060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c5064: 0x0  nop
    ctx->pc = 0x2c5064u;
    // NOP
    // 0x2c5068: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c5068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c506c: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2c506cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_2c5070:
    // 0x2c5070: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c5070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c5074: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c5074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5078: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
    ctx->pc = 0x2C5078u;
    {
        const bool branch_taken_0x2c5078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5078) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5080u;
    // 0x2c5080: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2c5080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2c5084: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5084u;
    {
        const bool branch_taken_0x2c5084 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5084u;
        // 0x2c5088: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5084) {
            ctx->pc = 0x2C5098u;
            goto label_2c5098;
        }
    }
    ctx->pc = 0x2C508Cu;
    // 0x2c508c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c508cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5090u;
    {
        const bool branch_taken_0x2c5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5090u;
        // 0x2c5094: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5090) {
            ctx->pc = 0x2C50B0u;
            goto label_2c50b0;
        }
    }
    ctx->pc = 0x2C5098u;
label_2c5098:
    // 0x2c5098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c509c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c50a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c50a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50a4: 0x0  nop
    ctx->pc = 0x2c50a4u;
    // NOP
    // 0x2c50a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c50a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c50ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c50acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c50b0:
    // 0x2c50b0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2c50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c50b4: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x2c50b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2c50b8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2c50b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2c50bc: 0x0  nop
    ctx->pc = 0x2c50bcu;
    // NOP
    // 0x2c50c0: 0x0  nop
    ctx->pc = 0x2c50c0u;
    // NOP
    // 0x2c50c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C50C4u;
    {
        const bool branch_taken_0x2c50c4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2c50c4) {
            ctx->pc = 0x2C50D8u;
            goto label_2c50d8;
        }
    }
    ctx->pc = 0x2C50CCu;
    // 0x2c50cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c50ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C50D0u;
    {
        const bool branch_taken_0x2c50d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50D0u;
        // 0x2c50d4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50d0) {
            ctx->pc = 0x2C50F4u;
            goto label_2c50f4;
        }
    }
    ctx->pc = 0x2C50D8u;
label_2c50d8:
    // 0x2c50d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c50dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c50dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c50e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c50e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c50e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c50e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50e8: 0x0  nop
    ctx->pc = 0x2c50e8u;
    // NOP
    // 0x2c50ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2c50ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c50f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c50f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c50f4:
    // 0x2c50f4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2c50f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c50f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c50fc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2c50fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5104: 0x0  nop
    ctx->pc = 0x2c5104u;
    // NOP
    // 0x2c5108: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2c5108u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2c510c: 0x0  nop
    ctx->pc = 0x2c510cu;
    // NOP
    // 0x2c5110: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x2c5110u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c5114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5118: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x2C5118u;
    {
        const bool branch_taken_0x2c5118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5118) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5120u;
    // 0x2c5120: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2C5120u;
    {
        const bool branch_taken_0x2c5120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5120u;
        // 0x2c5124: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5120) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5128u;
label_2c5128:
    // 0x2c5128: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2c5128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2c512c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C512Cu;
    {
        const bool branch_taken_0x2c512c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C512Cu;
        // 0x2c5130: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c512c) {
            ctx->pc = 0x2C5140u;
            goto label_2c5140;
        }
    }
    ctx->pc = 0x2C5134u;
    // 0x2c5134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5138u;
    {
        const bool branch_taken_0x2c5138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5138u;
        // 0x2c513c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5138) {
            ctx->pc = 0x2C5158u;
            goto label_2c5158;
        }
    }
    ctx->pc = 0x2C5140u;
label_2c5140:
    // 0x2c5140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c5144: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c5144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c5148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c514c: 0x0  nop
    ctx->pc = 0x2c514cu;
    // NOP
    // 0x2c5150: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c5150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c5154: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c5154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c5158:
    // 0x2c5158: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2c5158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c515c: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2c515cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2c5160: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2c5160u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2c5164: 0x0  nop
    ctx->pc = 0x2c5164u;
    // NOP
    // 0x2c5168: 0x0  nop
    ctx->pc = 0x2c5168u;
    // NOP
    // 0x2c516c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C516Cu;
    {
        const bool branch_taken_0x2c516c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2c516c) {
            ctx->pc = 0x2C5180u;
            goto label_2c5180;
        }
    }
    ctx->pc = 0x2C5174u;
    // 0x2c5174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5178u;
    {
        const bool branch_taken_0x2c5178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5178u;
        // 0x2c517c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5178) {
            ctx->pc = 0x2C519Cu;
            goto label_2c519c;
        }
    }
    ctx->pc = 0x2C5180u;
label_2c5180:
    // 0x2c5180: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c5180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c5184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c5188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c5188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c518c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c518cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5190: 0x0  nop
    ctx->pc = 0x2c5190u;
    // NOP
    // 0x2c5194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c5194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c5198: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c5198u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c519c:
    // 0x2c519c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2c519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c51a0: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x2c51a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x2c51a4: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x2c51a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2c51a8: 0x0  nop
    ctx->pc = 0x2c51a8u;
    // NOP
    // 0x2c51ac: 0x0  nop
    ctx->pc = 0x2c51acu;
    // NOP
    // 0x2c51b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C51B0u;
    {
        const bool branch_taken_0x2c51b0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2c51b0) {
            ctx->pc = 0x2C51C4u;
            goto label_2c51c4;
        }
    }
    ctx->pc = 0x2C51B8u;
    // 0x2c51b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c51b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c51bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C51BCu;
    {
        const bool branch_taken_0x2c51bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51BCu;
        // 0x2c51c0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51bc) {
            ctx->pc = 0x2C51E0u;
            goto label_2c51e0;
        }
    }
    ctx->pc = 0x2C51C4u;
label_2c51c4:
    // 0x2c51c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c51c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c51c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c51cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c51d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c51d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c51d4: 0x0  nop
    ctx->pc = 0x2c51d4u;
    // NOP
    // 0x2c51d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c51d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c51dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c51dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c51e0:
    // 0x2c51e0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x2c51e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c51e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c51e8: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2c51e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c51ec: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2c51ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c51f0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2c51f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x2c51f4: 0x46031003  div.s       $f0, $f2, $f3
    ctx->pc = 0x2c51f4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x2c51f8: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x2c51f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c51fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c51fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5200: 0x0  nop
    ctx->pc = 0x2c5200u;
    // NOP
    // 0x2c5204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5208: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5208u;
    {
        const bool branch_taken_0x2c5208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5208) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5210u;
    // 0x2c5210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5210u;
    {
        const bool branch_taken_0x2c5210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5210u;
        // 0x2c5214: 0x3a310001  xori        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5210) {
            ctx->pc = 0x2C5220u;
            goto label_2c5220;
        }
    }
    ctx->pc = 0x2C5218u;
label_2c5218:
    // 0x2c5218: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x2c5218u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x2c521c: 0x0  nop
    ctx->pc = 0x2c521cu;
    // NOP
label_2c5220:
    // 0x2c5220: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C5220u;
    {
        const bool branch_taken_0x2c5220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5220) {
            ctx->pc = 0x2C52A0u;
            goto label_2c52a0;
        }
    }
    ctx->pc = 0x2C5228u;
    // 0x2c5228: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c5228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c522c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C522Cu;
    {
        const bool branch_taken_0x2c522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C522Cu;
        // 0x2c5230: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c522c) {
            ctx->pc = 0x2C5288u;
            goto label_2c5288;
        }
    }
    ctx->pc = 0x2C5234u;
    // 0x2c5234: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5234u;
    {
        const bool branch_taken_0x2c5234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5234u;
        // 0x2c5238: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5234) {
            ctx->pc = 0x2C5270u;
            goto label_2c5270;
        }
    }
    ctx->pc = 0x2C523Cu;
    // 0x2c523c: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c523cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c5240: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c5240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c5244: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c5244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c524c: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c524cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5250: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c5250u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c5254: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c5254u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5258: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c5258u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c525c: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c525cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c5260: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c5264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5268: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C5268u;
    {
        const bool branch_taken_0x2c5268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5268u;
        // 0x2c526c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5268) {
            ctx->pc = 0x2C5298u;
            goto label_2c5298;
        }
    }
    ctx->pc = 0x2C5270u;
label_2c5270:
    // 0x2c5270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c5270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5274: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C5274u;
    SET_GPR_U32(ctx, 31, 0x2C527Cu);
    ctx->pc = 0x2C5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5274u;
    // 0x2c5278: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C5274u, 0x2C527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C527Cu;
label_2c527c:
    // 0x2c527c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C527Cu;
    {
        const bool branch_taken_0x2c527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c527c) {
            ctx->pc = 0x2C5290u;
            goto label_2c5290;
        }
    }
    ctx->pc = 0x2C5284u;
    // 0x2c5284: 0x0  nop
    ctx->pc = 0x2c5284u;
    // NOP
label_2c5288:
    // 0x2c5288: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c5288u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c528c: 0x0  nop
    ctx->pc = 0x2c528cu;
    // NOP
label_2c5290:
    // 0x2c5290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5294: 0x0  nop
    ctx->pc = 0x2c5294u;
    // NOP
label_2c5298:
    // 0x2c5298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5298u;
    {
        const bool branch_taken_0x2c5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5298) {
            ctx->pc = 0x2C52A8u;
            goto label_2c52a8;
        }
    }
    ctx->pc = 0x2C52A0u;
label_2c52a0:
    // 0x2c52a0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2c52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2c52a4: 0x0  nop
    ctx->pc = 0x2c52a4u;
    // NOP
label_2c52a8:
    // 0x2c52a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c52a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c52ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c52acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c52b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c52b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c52b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c52b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c52b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c52b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c52bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c52bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c52c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C52C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52C0u;
        // 0x2c52c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C52C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C52C8u;
}
