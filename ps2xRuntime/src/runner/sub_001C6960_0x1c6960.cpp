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

// Function: sub_001C6960
// Address: 0x1c6960 - 0x1c7188
void sub_001C6960_0x1c6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6960_0x1c6960");
#endif

    switch (ctx->pc) {
        case 0x1c69d0u: goto label_1c69d0;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a64u: goto label_1c6a64;
        case 0x1c6a78u: goto label_1c6a78;
        case 0x1c6a94u: goto label_1c6a94;
        case 0x1c6aa8u: goto label_1c6aa8;
        case 0x1c6abcu: goto label_1c6abc;
        case 0x1c6adcu: goto label_1c6adc;
        case 0x1c6ae8u: goto label_1c6ae8;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b20u: goto label_1c6b20;
        case 0x1c6b2cu: goto label_1c6b2c;
        case 0x1c6b50u: goto label_1c6b50;
        case 0x1c6b64u: goto label_1c6b64;
        case 0x1c6b74u: goto label_1c6b74;
        case 0x1c6b98u: goto label_1c6b98;
        case 0x1c6bacu: goto label_1c6bac;
        case 0x1c6bd8u: goto label_1c6bd8;
        case 0x1c6becu: goto label_1c6bec;
        case 0x1c6c00u: goto label_1c6c00;
        case 0x1c6c14u: goto label_1c6c14;
        case 0x1c6c20u: goto label_1c6c20;
        case 0x1c6c44u: goto label_1c6c44;
        case 0x1c6c58u: goto label_1c6c58;
        case 0x1c6c60u: goto label_1c6c60;
        case 0x1c6c6cu: goto label_1c6c6c;
        case 0x1c6c78u: goto label_1c6c78;
        case 0x1c6cccu: goto label_1c6ccc;
        case 0x1c6ce0u: goto label_1c6ce0;
        case 0x1c6d08u: goto label_1c6d08;
        case 0x1c6d1cu: goto label_1c6d1c;
        case 0x1c6d30u: goto label_1c6d30;
        case 0x1c6d44u: goto label_1c6d44;
        case 0x1c6d50u: goto label_1c6d50;
        case 0x1c6d74u: goto label_1c6d74;
        case 0x1c6d88u: goto label_1c6d88;
        case 0x1c6da0u: goto label_1c6da0;
        case 0x1c6db4u: goto label_1c6db4;
        case 0x1c6dc8u: goto label_1c6dc8;
        case 0x1c6dd0u: goto label_1c6dd0;
        case 0x1c6de8u: goto label_1c6de8;
        case 0x1c6df8u: goto label_1c6df8;
        case 0x1c6e0cu: goto label_1c6e0c;
        case 0x1c6e38u: goto label_1c6e38;
        case 0x1c6e4cu: goto label_1c6e4c;
        case 0x1c6e60u: goto label_1c6e60;
        case 0x1c6e74u: goto label_1c6e74;
        case 0x1c6e80u: goto label_1c6e80;
        case 0x1c6ea4u: goto label_1c6ea4;
        case 0x1c6eb8u: goto label_1c6eb8;
        case 0x1c6ed0u: goto label_1c6ed0;
        case 0x1c6ee4u: goto label_1c6ee4;
        case 0x1c6ef8u: goto label_1c6ef8;
        case 0x1c6f00u: goto label_1c6f00;
        case 0x1c6f18u: goto label_1c6f18;
        case 0x1c6f28u: goto label_1c6f28;
        case 0x1c6f3cu: goto label_1c6f3c;
        case 0x1c6f68u: goto label_1c6f68;
        case 0x1c6f7cu: goto label_1c6f7c;
        case 0x1c6f90u: goto label_1c6f90;
        case 0x1c6fa4u: goto label_1c6fa4;
        case 0x1c6fb0u: goto label_1c6fb0;
        case 0x1c6fd4u: goto label_1c6fd4;
        case 0x1c6fe8u: goto label_1c6fe8;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c6ffcu: goto label_1c6ffc;
        case 0x1c7008u: goto label_1c7008;
        case 0x1c705cu: goto label_1c705c;
        case 0x1c7070u: goto label_1c7070;
        case 0x1c7098u: goto label_1c7098;
        case 0x1c70a8u: goto label_1c70a8;
        case 0x1c70b8u: goto label_1c70b8;
        case 0x1c70c8u: goto label_1c70c8;
        case 0x1c70dcu: goto label_1c70dc;
        case 0x1c7100u: goto label_1c7100;
        case 0x1c7114u: goto label_1c7114;
        case 0x1c712cu: goto label_1c712c;
        case 0x1c7150u: goto label_1c7150;
        case 0x1c7164u: goto label_1c7164;
        default: break;
    }

    ctx->pc = 0x1c6960u;

    // 0x1c6960: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1c6964: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c6964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c6968: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c6968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c696c: 0x2442f6f0  addiu       $v0, $v0, -0x910
    ctx->pc = 0x1c696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x1c6970: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c6970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c6974: 0x27a90200  addiu       $t1, $sp, 0x200
    ctx->pc = 0x1c6974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c6978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c6978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c697c: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x1c697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c6980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c6980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c6984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c6984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c698c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c698cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6990: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c6994: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1c6998: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1c6998u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x40F6F0u));
    // 0x1c699c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c699cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c69a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69a4: 0x24c6f700  addiu       $a2, $a2, -0x900
    ctx->pc = 0x1c69a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964992));
    // 0x1c69a8: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c69ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c69acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69b0: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1c69b0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x1c69b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c69b8: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1c69b8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40F700u));
    // 0x1c69bc: 0x2442f710  addiu       $v0, $v0, -0x8F0
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965008));
    // 0x1c69c0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c69c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c69c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F710u));
    // 0x1c69c8: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C69C8u;
    SET_GPR_U32(ctx, 31, 0x1C69D0u);
    ctx->pc = 0x1C69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69C8u;
    // 0x1c69cc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C69C8u, 0x1C69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69D0u;
label_1c69d0:
    // 0x1c69d0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x1c69d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c69d4: 0x104301a8  beq         $v0, $v1, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1C69D4u;
    {
        const bool branch_taken_0x1c69d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69D4u;
        // 0x1c69d8: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69d4) {
            ctx->pc = 0x1C7078u;
            goto label_1c7078;
        }
    }
    ctx->pc = 0x1C69DCu;
    // 0x1c69dc: 0x104301a6  beq         $v0, $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1C69DCu;
    {
        const bool branch_taken_0x1c69dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c69dc) {
            ctx->pc = 0x1C7078u;
            goto label_1c7078;
        }
    }
    ctx->pc = 0x1C69E4u;
    // 0x1c69e4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1c69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c69e8: 0x10430157  beq         $v0, $v1, . + 4 + (0x157 << 2)
    ctx->pc = 0x1C69E8u;
    {
        const bool branch_taken_0x1c69e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69E8u;
        // 0x1c69ec: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69e8) {
            ctx->pc = 0x1C6F48u;
            goto label_1c6f48;
        }
    }
    ctx->pc = 0x1C69F0u;
    // 0x1c69f0: 0x10430109  beq         $v0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x1C69F0u;
    {
        const bool branch_taken_0x1c69f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c69f0) {
            ctx->pc = 0x1C6E18u;
            goto label_1c6e18;
        }
    }
    ctx->pc = 0x1C69F8u;
    // 0x1c69f8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c69fc: 0x104300ba  beq         $v0, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1C69FCu;
    {
        const bool branch_taken_0x1c69fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69FCu;
        // 0x1c6a00: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69fc) {
            ctx->pc = 0x1C6CE8u;
            goto label_1c6ce8;
        }
    }
    ctx->pc = 0x1C6A04u;
    // 0x1c6a04: 0x1043006c  beq         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C6A04u;
    {
        const bool branch_taken_0x1c6a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6a04) {
            ctx->pc = 0x1C6BB8u;
            goto label_1c6bb8;
        }
    }
    ctx->pc = 0x1C6A0Cu;
    // 0x1c6a0c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1c6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c6a10: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6A10u;
    {
        const bool branch_taken_0x1c6a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A10u;
        // 0x1c6a14: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a10) {
            ctx->pc = 0x1C6A80u;
            goto label_1c6a80;
        }
    }
    ctx->pc = 0x1C6A18u;
    // 0x1c6a18: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6A18u;
    {
        const bool branch_taken_0x1c6a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6a18) {
            ctx->pc = 0x1C6A28u;
            goto label_1c6a28;
        }
    }
    ctx->pc = 0x1C6A20u;
    // 0x1c6a20: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1C6A20u;
    {
        const bool branch_taken_0x1c6a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a20) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6A28u;
label_1c6a28:
    // 0x1c6a28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6a2c: 0x160301ce  bne         $s0, $v1, . + 4 + (0x1CE << 2)
    ctx->pc = 0x1C6A2Cu;
    {
        const bool branch_taken_0x1c6a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6a2c) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6A34u;
    // 0x1c6a34: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1c6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6a38: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1c6a38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c6a3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6a40: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1c6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c6a44: 0x246505f0  addiu       $a1, $v1, 0x5F0
    ctx->pc = 0x1c6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x1c6a48: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C6A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A48u;
    // 0x1c6a4c: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1c6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1c6a54: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1c6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c6a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c6a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6a5c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A64u);
    ctx->pc = 0x1C6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A5Cu;
    // 0x1c6a60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6A5Cu, 0x1C6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A64u;
label_1c6a64:
    // 0x1c6a64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6a68: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c6a6c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6a70: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6A70u;
    SET_GPR_U32(ctx, 31, 0x1C6A78u);
    ctx->pc = 0x1C6A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A70u;
    // 0x1c6a74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6A70u, 0x1C6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A78u;
label_1c6a78:
    // 0x1c6a78: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x1C6A78u;
    {
        const bool branch_taken_0x1c6a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a78) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6A80u;
label_1c6a80:
    // 0x1c6a80: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6a84: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1c6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c6a88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a8c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A94u);
    ctx->pc = 0x1C6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A8Cu;
    // 0x1c6a90: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6A8Cu, 0x1C6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A94u;
label_1c6a94:
    // 0x1c6a94: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6a98: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1c6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c6a9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6AA0u;
    SET_GPR_U32(ctx, 31, 0x1C6AA8u);
    ctx->pc = 0x1C6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA0u;
    // 0x1c6aa4: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6AA0u, 0x1C6AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA8u;
label_1c6aa8:
    // 0x1c6aa8: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6aac: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c6aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c6ab0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6AB4u;
    SET_GPR_U32(ctx, 31, 0x1C6ABCu);
    ctx->pc = 0x1C6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AB4u;
    // 0x1c6ab8: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6AB4u, 0x1C6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ABCu;
label_1c6abc:
    // 0x1c6abc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6ac0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c6ac4: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c6ac8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6acc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c6ad0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6ad4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6AD4u;
    SET_GPR_U32(ctx, 31, 0x1C6ADCu);
    ctx->pc = 0x1C6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD4u;
    // 0x1c6ad8: 0x723021  addu        $a2, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6AD4u, 0x1C6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ADCu;
label_1c6adc:
    // 0x1c6adc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c6adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c6ae0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6AE0u;
    SET_GPR_U32(ctx, 31, 0x1C6AE8u);
    ctx->pc = 0x1C6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE0u;
    // 0x1c6ae4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6AE0u, 0x1C6AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AE8u;
label_1c6ae8:
    // 0x1c6ae8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c6aec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6af0: 0x0  nop
    ctx->pc = 0x1c6af0u;
    // NOP
    // 0x1c6af4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6af8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6AF8u;
    {
        const bool branch_taken_0x1c6af8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AF8u;
        // 0x1c6afc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6af8) {
            ctx->pc = 0x1C6B20u;
            goto label_1c6b20;
        }
    }
    ctx->pc = 0x1C6B00u;
    // 0x1c6b00: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1c6b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1c6b04: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6B04u;
    SET_GPR_U32(ctx, 31, 0x1C6B0Cu);
    ctx->pc = 0x1C6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B04u;
    // 0x1c6b08: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6B04u, 0x1C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0Cu;
label_1c6b0c:
    // 0x1c6b0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6b10: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x1c6b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1c6b14: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6b18: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6B18u;
    SET_GPR_U32(ctx, 31, 0x1C6B20u);
    ctx->pc = 0x1C6B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B18u;
    // 0x1c6b1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6B18u, 0x1C6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B20u;
label_1c6b20:
    // 0x1c6b20: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c6b24: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6B24u;
    SET_GPR_U32(ctx, 31, 0x1C6B2Cu);
    ctx->pc = 0x1C6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B24u;
    // 0x1c6b28: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6B24u, 0x1C6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B2Cu;
label_1c6b2c:
    // 0x1c6b2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6b30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6b34: 0x0  nop
    ctx->pc = 0x1c6b34u;
    // NOP
    // 0x1c6b38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6b3c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C6B3Cu;
    {
        const bool branch_taken_0x1c6b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B3Cu;
        // 0x1c6b40: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b3c) {
            ctx->pc = 0x1C6B68u;
            goto label_1c6b68;
        }
    }
    ctx->pc = 0x1C6B44u;
    // 0x1c6b44: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1c6b48: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6B48u;
    SET_GPR_U32(ctx, 31, 0x1C6B50u);
    ctx->pc = 0x1C6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B48u;
    // 0x1c6b4c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6B48u, 0x1C6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B50u;
label_1c6b50:
    // 0x1c6b50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6b54: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x1c6b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1c6b58: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1c6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6b5c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B64u);
    ctx->pc = 0x1C6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B5Cu;
    // 0x1c6b60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6B5Cu, 0x1C6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B64u;
label_1c6b64:
    // 0x1c6b64: 0x0  nop
    ctx->pc = 0x1c6b64u;
    // NOP
label_1c6b68:
    // 0x1c6b68: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c6b6c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B74u);
    ctx->pc = 0x1C6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B6Cu;
    // 0x1c6b70: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6B6Cu, 0x1C6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B74u;
label_1c6b74:
    // 0x1c6b74: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1c6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6b78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6b7c: 0x0  nop
    ctx->pc = 0x1c6b7cu;
    // NOP
    // 0x1c6b80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6b84: 0x45010178  bc1t        . + 4 + (0x178 << 2)
    ctx->pc = 0x1C6B84u;
    {
        const bool branch_taken_0x1c6b84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B84u;
        // 0x1c6b88: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b84) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6B8Cu;
    // 0x1c6b8c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c6b90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6B90u;
    SET_GPR_U32(ctx, 31, 0x1C6B98u);
    ctx->pc = 0x1C6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B90u;
    // 0x1c6b94: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6B90u, 0x1C6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B98u;
label_1c6b98:
    // 0x1c6b98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6b9c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c6b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c6ba0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1c6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6ba4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6BA4u;
    SET_GPR_U32(ctx, 31, 0x1C6BACu);
    ctx->pc = 0x1C6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA4u;
    // 0x1c6ba8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6BA4u, 0x1C6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BACu;
label_1c6bac:
    // 0x1c6bac: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x1C6BACu;
    {
        const bool branch_taken_0x1c6bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bac) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6BB4u;
    // 0x1c6bb4: 0x0  nop
    ctx->pc = 0x1c6bb4u;
    // NOP
label_1c6bb8:
    // 0x1c6bb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6bbc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c6bc0: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c6bc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6bc8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c6bcc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6bd0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6BD0u;
    SET_GPR_U32(ctx, 31, 0x1C6BD8u);
    ctx->pc = 0x1C6BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD0u;
    // 0x1c6bd4: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6BD0u, 0x1C6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD8u;
label_1c6bd8:
    // 0x1c6bd8: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6bdc: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c6be0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6BE4u;
    SET_GPR_U32(ctx, 31, 0x1C6BECu);
    ctx->pc = 0x1C6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE4u;
    // 0x1c6be8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6BE4u, 0x1C6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BECu;
label_1c6bec:
    // 0x1c6bec: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6bf0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c6bf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf8: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6BF8u;
    SET_GPR_U32(ctx, 31, 0x1C6C00u);
    ctx->pc = 0x1C6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF8u;
    // 0x1c6bfc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6BF8u, 0x1C6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C00u;
label_1c6c00:
    // 0x1c6c00: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6c04: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c6c08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c0c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C14u);
    ctx->pc = 0x1C6C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C0Cu;
    // 0x1c6c10: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6C0Cu, 0x1C6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C14u;
label_1c6c14:
    // 0x1c6c14: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c6c18: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6C18u;
    SET_GPR_U32(ctx, 31, 0x1C6C20u);
    ctx->pc = 0x1C6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C18u;
    // 0x1c6c1c: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6C18u, 0x1C6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C20u;
label_1c6c20:
    // 0x1c6c20: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c6c24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c28: 0x0  nop
    ctx->pc = 0x1c6c28u;
    // NOP
    // 0x1c6c2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c30: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6C30u;
    {
        const bool branch_taken_0x1c6c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C30u;
        // 0x1c6c34: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c30) {
            ctx->pc = 0x1C6C58u;
            goto label_1c6c58;
        }
    }
    ctx->pc = 0x1C6C38u;
    // 0x1c6c38: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1c6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c6c3c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C44u);
    ctx->pc = 0x1C6C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C3Cu;
    // 0x1c6c40: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6C3Cu, 0x1C6C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C44u;
label_1c6c44:
    // 0x1c6c44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6c48: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x1c6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c6c4c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6c50: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6C50u;
    SET_GPR_U32(ctx, 31, 0x1C6C58u);
    ctx->pc = 0x1C6C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C50u;
    // 0x1c6c54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6C50u, 0x1C6C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C58u;
label_1c6c58:
    // 0x1c6c58: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C6C58u;
    SET_GPR_U32(ctx, 31, 0x1C6C60u);
    ctx->pc = 0x1C6C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C58u;
    // 0x1c6c5c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C6C58u, 0x1C6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C60u;
label_1c6c60:
    // 0x1c6c60: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c6c64: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C6C64u;
    SET_GPR_U32(ctx, 31, 0x1C6C6Cu);
    ctx->pc = 0x1C6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C64u;
    // 0x1c6c68: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C6C64u, 0x1C6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C6Cu;
label_1c6c6c:
    // 0x1c6c6c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1c6c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c6c70: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6C70u;
    SET_GPR_U32(ctx, 31, 0x1C6C78u);
    ctx->pc = 0x1C6C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C70u;
    // 0x1c6c74: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6C70u, 0x1C6C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C78u;
label_1c6c78:
    // 0x1c6c78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c7c: 0x0  nop
    ctx->pc = 0x1c6c7cu;
    // NOP
    // 0x1c6c80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C84u;
    {
        const bool branch_taken_0x1c6c84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C84u;
        // 0x1c6c88: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c84) {
            ctx->pc = 0x1C6C90u;
            goto label_1c6c90;
        }
    }
    ctx->pc = 0x1C6C8Cu;
    // 0x1c6c8c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c6c8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c6c90:
    // 0x1c6c90: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6c94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c6c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6c98: 0x0  nop
    ctx->pc = 0x1c6c98u;
    // NOP
    // 0x1c6c9c: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1c6c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6ca0: 0x45010131  bc1t        . + 4 + (0x131 << 2)
    ctx->pc = 0x1C6CA0u;
    {
        const bool branch_taken_0x1c6ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6ca0) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6CA8u;
    // 0x1c6ca8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6cac: 0x0  nop
    ctx->pc = 0x1c6cacu;
    // NOP
    // 0x1c6cb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6cb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6CB4u;
    {
        const bool branch_taken_0x1c6cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CB4u;
        // 0x1c6cb8: 0x3c02c080  lui         $v0, 0xC080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cb4) {
            ctx->pc = 0x1C6CC0u;
            goto label_1c6cc0;
        }
    }
    ctx->pc = 0x1C6CBCu;
    // 0x1c6cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c6cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c6cc0:
    // 0x1c6cc0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1c6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c6cc4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6CC4u;
    SET_GPR_U32(ctx, 31, 0x1C6CCCu);
    ctx->pc = 0x1C6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CC4u;
    // 0x1c6cc8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6CC4u, 0x1C6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CCCu;
label_1c6ccc:
    // 0x1c6ccc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6cd0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1c6cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1c6cd4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6cd8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6CD8u;
    SET_GPR_U32(ctx, 31, 0x1C6CE0u);
    ctx->pc = 0x1C6CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CD8u;
    // 0x1c6cdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6CD8u, 0x1C6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CE0u;
label_1c6ce0:
    // 0x1c6ce0: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1C6CE0u;
    {
        const bool branch_taken_0x1c6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ce0) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6CE8u;
label_1c6ce8:
    // 0x1c6ce8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6cec: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c6cf0: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1c6cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c6cf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6cf8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c6cfc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c6cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6d00: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6D00u;
    SET_GPR_U32(ctx, 31, 0x1C6D08u);
    ctx->pc = 0x1C6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D00u;
    // 0x1c6d04: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6D00u, 0x1C6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D08u;
label_1c6d08:
    // 0x1c6d08: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6d0c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c6d10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d14: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6D14u;
    SET_GPR_U32(ctx, 31, 0x1C6D1Cu);
    ctx->pc = 0x1C6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D14u;
    // 0x1c6d18: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6D14u, 0x1C6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D1Cu;
label_1c6d1c:
    // 0x1c6d1c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6d20: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1c6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c6d24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d28: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6D28u;
    SET_GPR_U32(ctx, 31, 0x1C6D30u);
    ctx->pc = 0x1C6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D28u;
    // 0x1c6d2c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6D28u, 0x1C6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D30u;
label_1c6d30:
    // 0x1c6d30: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6d34: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c6d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c6d38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d3c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D44u);
    ctx->pc = 0x1C6D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D3Cu;
    // 0x1c6d40: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6D3Cu, 0x1C6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D44u;
label_1c6d44:
    // 0x1c6d44: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c6d48: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6D48u;
    SET_GPR_U32(ctx, 31, 0x1C6D50u);
    ctx->pc = 0x1C6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D48u;
    // 0x1c6d4c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6D48u, 0x1C6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D50u;
label_1c6d50:
    // 0x1c6d50: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1c6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1c6d54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d58: 0x0  nop
    ctx->pc = 0x1c6d58u;
    // NOP
    // 0x1c6d5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d60: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D60u;
    {
        const bool branch_taken_0x1c6d60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D60u;
        // 0x1c6d64: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d60) {
            ctx->pc = 0x1C6D88u;
            goto label_1c6d88;
        }
    }
    ctx->pc = 0x1C6D68u;
    // 0x1c6d68: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c6d6c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D74u);
    ctx->pc = 0x1C6D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D6Cu;
    // 0x1c6d70: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6D6Cu, 0x1C6D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D74u;
label_1c6d74:
    // 0x1c6d74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6d78: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c6d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c6d7c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6d80: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6D80u;
    SET_GPR_U32(ctx, 31, 0x1C6D88u);
    ctx->pc = 0x1C6D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D80u;
    // 0x1c6d84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6D80u, 0x1C6D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D88u;
label_1c6d88:
    // 0x1c6d88: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1c6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c6d8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6d90: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c6d94: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x1c6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1c6d98: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6D98u;
    SET_GPR_U32(ctx, 31, 0x1C6DA0u);
    ctx->pc = 0x1C6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D98u;
    // 0x1c6d9c: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6D98u, 0x1C6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DA0u;
label_1c6da0:
    // 0x1c6da0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6da4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c6da8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c6da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6dac: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6DACu;
    SET_GPR_U32(ctx, 31, 0x1C6DB4u);
    ctx->pc = 0x1C6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DACu;
    // 0x1c6db0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6DACu, 0x1C6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DB4u;
label_1c6db4:
    // 0x1c6db4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6db8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c6dbc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1c6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c6dc0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6DC0u;
    SET_GPR_U32(ctx, 31, 0x1C6DC8u);
    ctx->pc = 0x1C6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DC0u;
    // 0x1c6dc4: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6DC0u, 0x1C6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DC8u;
label_1c6dc8:
    // 0x1c6dc8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C6DC8u;
    SET_GPR_U32(ctx, 31, 0x1C6DD0u);
    ctx->pc = 0x1C6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DC8u;
    // 0x1c6dcc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C6DC8u, 0x1C6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DD0u;
label_1c6dd0:
    // 0x1c6dd0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c6dd4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c6dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6ddc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6de0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C6DE0u;
    SET_GPR_U32(ctx, 31, 0x1C6DE8u);
    ctx->pc = 0x1C6DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DE0u;
    // 0x1c6de4: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C6DE0u, 0x1C6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DE8u;
label_1c6de8:
    // 0x1c6de8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c6dec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c6decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6df0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6DF0u;
    SET_GPR_U32(ctx, 31, 0x1C6DF8u);
    ctx->pc = 0x1C6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DF0u;
    // 0x1c6df4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6DF0u, 0x1C6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DF8u;
label_1c6df8:
    // 0x1c6df8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6dfc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1c6dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c6e00: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6e04: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6E04u;
    SET_GPR_U32(ctx, 31, 0x1C6E0Cu);
    ctx->pc = 0x1C6E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E04u;
    // 0x1c6e08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6E04u, 0x1C6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E0Cu;
label_1c6e0c:
    // 0x1c6e0c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1C6E0Cu;
    {
        const bool branch_taken_0x1c6e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e0c) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6E14u;
    // 0x1c6e14: 0x0  nop
    ctx->pc = 0x1c6e14u;
    // NOP
label_1c6e18:
    // 0x1c6e18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6e1c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c6e20: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1c6e20u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c6e24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6e28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c6e2c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c6e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6e30: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6E30u;
    SET_GPR_U32(ctx, 31, 0x1C6E38u);
    ctx->pc = 0x1C6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E30u;
    // 0x1c6e34: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6E30u, 0x1C6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E38u;
label_1c6e38:
    // 0x1c6e38: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6e3c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c6e40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e44: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6E44u;
    SET_GPR_U32(ctx, 31, 0x1C6E4Cu);
    ctx->pc = 0x1C6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E44u;
    // 0x1c6e48: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6E44u, 0x1C6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E4Cu;
label_1c6e4c:
    // 0x1c6e4c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6e50: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1c6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c6e54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e58: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6E58u;
    SET_GPR_U32(ctx, 31, 0x1C6E60u);
    ctx->pc = 0x1C6E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E58u;
    // 0x1c6e5c: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6E58u, 0x1C6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E60u;
label_1c6e60:
    // 0x1c6e60: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6e64: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c6e68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e6c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E74u);
    ctx->pc = 0x1C6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E6Cu;
    // 0x1c6e70: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6E6Cu, 0x1C6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E74u;
label_1c6e74:
    // 0x1c6e74: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c6e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c6e78: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6E78u;
    SET_GPR_U32(ctx, 31, 0x1C6E80u);
    ctx->pc = 0x1C6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E78u;
    // 0x1c6e7c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6E78u, 0x1C6E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E80u;
label_1c6e80:
    // 0x1c6e80: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1c6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1c6e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e88: 0x0  nop
    ctx->pc = 0x1c6e88u;
    // NOP
    // 0x1c6e8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e90: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6E90u;
    {
        const bool branch_taken_0x1c6e90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E90u;
        // 0x1c6e94: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e90) {
            ctx->pc = 0x1C6EB8u;
            goto label_1c6eb8;
        }
    }
    ctx->pc = 0x1C6E98u;
    // 0x1c6e98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c6e9c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C6EA4u);
    ctx->pc = 0x1C6EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E9Cu;
    // 0x1c6ea0: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6E9Cu, 0x1C6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EA4u;
label_1c6ea4:
    // 0x1c6ea4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6ea8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c6ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c6eac: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6eb0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6EB0u;
    SET_GPR_U32(ctx, 31, 0x1C6EB8u);
    ctx->pc = 0x1C6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EB0u;
    // 0x1c6eb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6EB0u, 0x1C6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EB8u;
label_1c6eb8:
    // 0x1c6eb8: 0x8e23fff4  lw          $v1, -0xC($s1)
    ctx->pc = 0x1c6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967284)));
    // 0x1c6ebc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6ec0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c6ec4: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x1c6ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1c6ec8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6EC8u;
    SET_GPR_U32(ctx, 31, 0x1C6ED0u);
    ctx->pc = 0x1C6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EC8u;
    // 0x1c6ecc: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6EC8u, 0x1C6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ED0u;
label_1c6ed0:
    // 0x1c6ed0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6ed4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c6ed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c6ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6edc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6EDCu;
    SET_GPR_U32(ctx, 31, 0x1C6EE4u);
    ctx->pc = 0x1C6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EDCu;
    // 0x1c6ee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6EDCu, 0x1C6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EE4u;
label_1c6ee4:
    // 0x1c6ee4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6ee8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c6eec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c6ef0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6EF0u;
    SET_GPR_U32(ctx, 31, 0x1C6EF8u);
    ctx->pc = 0x1C6EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EF0u;
    // 0x1c6ef4: 0x533021  addu        $a2, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6EF0u, 0x1C6EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EF8u;
label_1c6ef8:
    // 0x1c6ef8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C6EF8u;
    SET_GPR_U32(ctx, 31, 0x1C6F00u);
    ctx->pc = 0x1C6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EF8u;
    // 0x1c6efc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C6EF8u, 0x1C6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F00u;
label_1c6f00:
    // 0x1c6f00: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c6f04: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c6f08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6f0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f10: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C6F10u;
    SET_GPR_U32(ctx, 31, 0x1C6F18u);
    ctx->pc = 0x1C6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F10u;
    // 0x1c6f14: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C6F10u, 0x1C6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F18u;
label_1c6f18:
    // 0x1c6f18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c6f1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c6f1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6f20: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6F20u;
    SET_GPR_U32(ctx, 31, 0x1C6F28u);
    ctx->pc = 0x1C6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F20u;
    // 0x1c6f24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6F20u, 0x1C6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F28u;
label_1c6f28:
    // 0x1c6f28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6f2c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c6f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c6f30: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6f34: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6F34u;
    SET_GPR_U32(ctx, 31, 0x1C6F3Cu);
    ctx->pc = 0x1C6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F34u;
    // 0x1c6f38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6F34u, 0x1C6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F3Cu;
label_1c6f3c:
    // 0x1c6f3c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1C6F3Cu;
    {
        const bool branch_taken_0x1c6f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f3c) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C6F44u;
    // 0x1c6f44: 0x0  nop
    ctx->pc = 0x1c6f44u;
    // NOP
label_1c6f48:
    // 0x1c6f48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6f4c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c6f50: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c6f54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6f58: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c6f5c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6f60: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6F60u;
    SET_GPR_U32(ctx, 31, 0x1C6F68u);
    ctx->pc = 0x1C6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F60u;
    // 0x1c6f64: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6F60u, 0x1C6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F68u;
label_1c6f68:
    // 0x1c6f68: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6f6c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1c6f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c6f70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f74: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6F74u;
    SET_GPR_U32(ctx, 31, 0x1C6F7Cu);
    ctx->pc = 0x1C6F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F74u;
    // 0x1c6f78: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6F74u, 0x1C6F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F7Cu;
label_1c6f7c:
    // 0x1c6f7c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6f80: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c6f84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f88: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6F88u;
    SET_GPR_U32(ctx, 31, 0x1C6F90u);
    ctx->pc = 0x1C6F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F88u;
    // 0x1c6f8c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6F88u, 0x1C6F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F90u;
label_1c6f90:
    // 0x1c6f90: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c6f94: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c6f98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f9c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C6FA4u);
    ctx->pc = 0x1C6FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F9Cu;
    // 0x1c6fa0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C6F9Cu, 0x1C6FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FA4u;
label_1c6fa4:
    // 0x1c6fa4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c6fa8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6FA8u;
    SET_GPR_U32(ctx, 31, 0x1C6FB0u);
    ctx->pc = 0x1C6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FA8u;
    // 0x1c6fac: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6FA8u, 0x1C6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FB0u;
label_1c6fb0:
    // 0x1c6fb0: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x1c6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x1c6fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6fb8: 0x0  nop
    ctx->pc = 0x1c6fb8u;
    // NOP
    // 0x1c6fbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6fc0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6FC0u;
    {
        const bool branch_taken_0x1c6fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FC0u;
        // 0x1c6fc4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fc0) {
            ctx->pc = 0x1C6FE8u;
            goto label_1c6fe8;
        }
    }
    ctx->pc = 0x1C6FC8u;
    // 0x1c6fc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c6fcc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6FCCu;
    SET_GPR_U32(ctx, 31, 0x1C6FD4u);
    ctx->pc = 0x1C6FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FCCu;
    // 0x1c6fd0: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6FCCu, 0x1C6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FD4u;
label_1c6fd4:
    // 0x1c6fd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6fd8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c6fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c6fdc: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6fe0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6FE0u;
    SET_GPR_U32(ctx, 31, 0x1C6FE8u);
    ctx->pc = 0x1C6FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FE0u;
    // 0x1c6fe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6FE0u, 0x1C6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FE8u;
label_1c6fe8:
    // 0x1c6fe8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C6FE8u;
    SET_GPR_U32(ctx, 31, 0x1C6FF0u);
    ctx->pc = 0x1C6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FE8u;
    // 0x1c6fec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C6FE8u, 0x1C6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FF0u;
label_1c6ff0:
    // 0x1c6ff0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c6ff4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C6FF4u;
    SET_GPR_U32(ctx, 31, 0x1C6FFCu);
    ctx->pc = 0x1C6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FF4u;
    // 0x1c6ff8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C6FF4u, 0x1C6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FFCu;
label_1c6ffc:
    // 0x1c6ffc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c7000: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C7000u;
    SET_GPR_U32(ctx, 31, 0x1C7008u);
    ctx->pc = 0x1C7004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7000u;
    // 0x1c7004: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C7000u, 0x1C7008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7008u;
label_1c7008:
    // 0x1c7008: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c7008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c700c: 0x0  nop
    ctx->pc = 0x1c700cu;
    // NOP
    // 0x1c7010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c7010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7014: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7014u;
    {
        const bool branch_taken_0x1c7014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7014u;
        // 0x1c7018: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7014) {
            ctx->pc = 0x1C7020u;
            goto label_1c7020;
        }
    }
    ctx->pc = 0x1C701Cu;
    // 0x1c701c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c701cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c7020:
    // 0x1c7020: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c7020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c7024: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c7024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7028: 0x0  nop
    ctx->pc = 0x1c7028u;
    // NOP
    // 0x1c702c: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1c702cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7030: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x1C7030u;
    {
        const bool branch_taken_0x1c7030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7030) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C7038u;
    // 0x1c7038: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c7038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c703c: 0x0  nop
    ctx->pc = 0x1c703cu;
    // NOP
    // 0x1c7040: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c7040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7044: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7044u;
    {
        const bool branch_taken_0x1c7044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7044u;
        // 0x1c7048: 0x3c02c080  lui         $v0, 0xC080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7044) {
            ctx->pc = 0x1C7050u;
            goto label_1c7050;
        }
    }
    ctx->pc = 0x1C704Cu;
    // 0x1c704c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c704cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c7050:
    // 0x1c7050: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c7050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c7054: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C7054u;
    SET_GPR_U32(ctx, 31, 0x1C705Cu);
    ctx->pc = 0x1C7058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7054u;
    // 0x1c7058: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C7054u, 0x1C705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C705Cu;
label_1c705c:
    // 0x1c705c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7060: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c7064: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c7068: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C7068u;
    SET_GPR_U32(ctx, 31, 0x1C7070u);
    ctx->pc = 0x1C706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7068u;
    // 0x1c706c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C7068u, 0x1C7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7070u;
label_1c7070:
    // 0x1c7070: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C7070u;
    {
        const bool branch_taken_0x1c7070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7070) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C7078u;
label_1c7078:
    // 0x1c7078: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c707c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1c707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c7080: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1c7080u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c7084: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c7088: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c708c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c7090: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C7090u;
    SET_GPR_U32(ctx, 31, 0x1C7098u);
    ctx->pc = 0x1C7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7090u;
    // 0x1c7094: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C7090u, 0x1C7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7098u;
label_1c7098:
    // 0x1c7098: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c709c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1c709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1c70a0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C70A0u;
    SET_GPR_U32(ctx, 31, 0x1C70A8u);
    ctx->pc = 0x1C70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70A0u;
    // 0x1c70a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C70A0u, 0x1C70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70A8u;
label_1c70a8:
    // 0x1c70a8: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x1c70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c70ac: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c70b0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C70B0u;
    SET_GPR_U32(ctx, 31, 0x1C70B8u);
    ctx->pc = 0x1C70B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70B0u;
    // 0x1c70b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C70B0u, 0x1C70B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70B8u;
label_1c70b8:
    // 0x1c70b8: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x1c70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1c70bc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1c70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1c70c0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C70C0u;
    SET_GPR_U32(ctx, 31, 0x1C70C8u);
    ctx->pc = 0x1C70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70C0u;
    // 0x1c70c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C70C0u, 0x1C70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70C8u;
label_1c70c8:
    // 0x1c70c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c70cc: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C70CCu;
    {
        const bool branch_taken_0x1c70cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70CCu;
        // 0x1c70d0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70cc) {
            ctx->pc = 0x1C7120u;
            goto label_1c7120;
        }
    }
    ctx->pc = 0x1C70D4u;
    // 0x1c70d4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C70D4u;
    SET_GPR_U32(ctx, 31, 0x1C70DCu);
    ctx->pc = 0x1C70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70D4u;
    // 0x1c70d8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C70D4u, 0x1C70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70DCu;
label_1c70dc:
    // 0x1c70dc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c70e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c70e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c70e4: 0x0  nop
    ctx->pc = 0x1c70e4u;
    // NOP
    // 0x1c70e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c70e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c70ec: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1C70ECu;
    {
        const bool branch_taken_0x1c70ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70ECu;
        // 0x1c70f0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70ec) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C70F4u;
    // 0x1c70f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c70f8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C70F8u;
    SET_GPR_U32(ctx, 31, 0x1C7100u);
    ctx->pc = 0x1C70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70F8u;
    // 0x1c70fc: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C70F8u, 0x1C7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7100u;
label_1c7100:
    // 0x1c7100: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7104: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c7104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c7108: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c7108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c710c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C710Cu;
    SET_GPR_U32(ctx, 31, 0x1C7114u);
    ctx->pc = 0x1C7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C710Cu;
    // 0x1c7110: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C710Cu, 0x1C7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7114u;
label_1c7114:
    // 0x1c7114: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7114u;
    {
        const bool branch_taken_0x1c7114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7114) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C711Cu;
    // 0x1c711c: 0x0  nop
    ctx->pc = 0x1c711cu;
    // NOP
label_1c7120:
    // 0x1c7120: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c7120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c7124: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C7124u;
    SET_GPR_U32(ctx, 31, 0x1C712Cu);
    ctx->pc = 0x1C7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7124u;
    // 0x1c7128: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C7124u, 0x1C712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C712Cu;
label_1c712c:
    // 0x1c712c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7130: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7134: 0x0  nop
    ctx->pc = 0x1c7134u;
    // NOP
    // 0x1c7138: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c7138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c713c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C713Cu;
    {
        const bool branch_taken_0x1c713c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C713Cu;
        // 0x1c7140: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c713c) {
            ctx->pc = 0x1C7168u;
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C7144u;
    // 0x1c7144: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c7144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c7148: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C7148u;
    SET_GPR_U32(ctx, 31, 0x1C7150u);
    ctx->pc = 0x1C714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7148u;
    // 0x1c714c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C7148u, 0x1C7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7150u;
label_1c7150:
    // 0x1c7150: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7154: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c7154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c7158: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1c7158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c715c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C715Cu;
    SET_GPR_U32(ctx, 31, 0x1C7164u);
    ctx->pc = 0x1C7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C715Cu;
    // 0x1c7160: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C715Cu, 0x1C7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7164u;
label_1c7164:
    // 0x1c7164: 0x0  nop
    ctx->pc = 0x1c7164u;
    // NOP
label_1c7168:
    // 0x1c7168: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c7168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c716c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c716cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7170: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7178: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c717c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c717cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7180: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7180u;
        // 0x1c7184: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7188u;
}
