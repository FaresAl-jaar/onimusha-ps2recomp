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

// Function: sub_002C9EB0
// Address: 0x2c9eb0 - 0x2ca048
void sub_002C9EB0_0x2c9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9EB0_0x2c9eb0");
#endif

    switch (ctx->pc) {
        case 0x2c9ed8u: goto label_2c9ed8;
        case 0x2c9f38u: goto label_2c9f38;
        case 0x2c9f8cu: goto label_2c9f8c;
        case 0x2c9fd0u: goto label_2c9fd0;
        case 0x2c9fe0u: goto label_2c9fe0;
        case 0x2ca024u: goto label_2ca024;
        default: break;
    }

    ctx->pc = 0x2c9eb0u;

    // 0x2c9eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c9eb4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c9eb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c9ebc: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x2c9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x2c9ec0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c9ec4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9ed0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C9ED0u;
    SET_GPR_U32(ctx, 31, 0x2C9ED8u);
    ctx->pc = 0x2C9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9ED0u;
    // 0x2c9ed4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C9ED0u, 0x2C9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9ED8u;
label_2c9ed8:
    // 0x2c9ed8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9edc: 0x12600052  beqz        $s3, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C9EDCu;
    {
        const bool branch_taken_0x2c9edc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EDCu;
        // 0x2c9ee0: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9edc) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2C9EE4u;
    // 0x2c9ee4: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2c9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c9ee8: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2c9ee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2c9eec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9ef4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9ef8: 0x1080004b  beqz        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C9EF8u;
    {
        const bool branch_taken_0x2c9ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ef8) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2C9F00u;
    // 0x2c9f00: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x2c9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x2c9f04: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2c9f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9f08: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C9F08u;
    {
        const bool branch_taken_0x2c9f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f08) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2C9F10u;
    // 0x2c9f10: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2c9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2c9f14: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2c9f14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9f18: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C9F18u;
    {
        const bool branch_taken_0x2c9f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f18) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2C9F20u;
    // 0x2c9f20: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x2c9f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c9f24: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2c9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2c9f28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9F28u;
    {
        const bool branch_taken_0x2c9f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9f28) {
            ctx->pc = 0x2C9F50u;
            goto label_2c9f50;
        }
    }
    ctx->pc = 0x2C9F30u;
    // 0x2c9f30: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x2C9F30u;
    SET_GPR_U32(ctx, 31, 0x2C9F38u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x2C9F30u, 0x2C9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F38u;
label_2c9f38:
    // 0x2c9f38: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2c9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2c9f3c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x2c9f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x2c9f40: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2c9f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c9f44: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C9F44u;
    {
        const bool branch_taken_0x2c9f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f44) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2C9F4Cu;
    // 0x2c9f4c: 0x0  nop
    ctx->pc = 0x2c9f4cu;
    // NOP
label_2c9f50:
    // 0x2c9f50: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c9f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c9f54: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c9f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c9f58: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c9f5c: 0x93848a94  lbu         $a0, -0x756C($gp)
    ctx->pc = 0x2c9f5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x2c9f60: 0x8e6529c0  lw          $a1, 0x29C0($s3)
    ctx->pc = 0x2c9f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x2c9f64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9f68: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x2c9f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2c9f6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9f70: 0x90b2003a  lbu         $s2, 0x3A($a1)
    ctx->pc = 0x2c9f70u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x2c9f74: 0x4882b  sltu        $s1, $zero, $a0
    ctx->pc = 0x2c9f74u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c9f78: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c9f78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9f7c: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c9f7cu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c9f80: 0x48302001  qmfc2.i     $s0, $vf4
    ctx->pc = 0x2c9f80u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c9f84: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x2C9F84u;
    SET_GPR_U32(ctx, 31, 0x2C9F8Cu);
    ctx->pc = 0x2C9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9F84u;
    // 0x2c9f88: 0x92640002  lbu         $a0, 0x2($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x2C9F84u, 0x2C9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F8Cu;
label_2c9f8c:
    // 0x2c9f8c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2c9f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9f90: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2c9f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2c9f94: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2c9f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2c9f98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2c9f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c9f9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9fa0: 0x24a5d690  addiu       $a1, $a1, -0x2970
    ctx->pc = 0x2c9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
    // 0x2c9fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9fa8: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x2c9fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c9fac: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x2c9facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2c9fb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9fb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2c9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2c9fb8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9fbc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2c9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c9fc0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c9fc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9fc8: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x2C9FC8u;
    SET_GPR_U32(ctx, 31, 0x2C9FD0u);
    ctx->pc = 0x2C9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FC8u;
    // 0x2c9fcc: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x2C9FC8u, 0x2C9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FD0u;
label_2c9fd0:
    // 0x2c9fd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c9fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9fd8: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2C9FD8u;
    SET_GPR_U32(ctx, 31, 0x2C9FE0u);
    ctx->pc = 0x2C9FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9FD8u;
    // 0x2c9fdc: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2C9FD8u, 0x2C9FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FE0u;
label_2c9fe0:
    // 0x2c9fe0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2c9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9fe4: 0x32030007  andi        $v1, $s0, 0x7
    ctx->pc = 0x2c9fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2c9fe8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c9fec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c9fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ff0: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x2c9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x2c9ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c9ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ff8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c9ffc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca000: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ca000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca004: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ca004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ca008: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2ca008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca00c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2ca010: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ca010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ca014: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ca014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ca018: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x2ca018u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca01c: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x2CA01Cu;
    SET_GPR_U32(ctx, 31, 0x2CA024u);
    ctx->pc = 0x2CA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA01Cu;
    // 0x2ca020: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x2CA01Cu, 0x2CA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA024u;
label_2ca024:
    // 0x2ca024: 0x0  nop
    ctx->pc = 0x2ca024u;
    // NOP
label_2ca028:
    // 0x2ca028: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ca028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca02c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ca02cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ca030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca040: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA040u;
        // 0x2ca044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA048u;
}
