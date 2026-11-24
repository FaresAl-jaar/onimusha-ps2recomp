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

// Function: sub_002DEAB0
// Address: 0x2deab0 - 0x2debf4
void sub_002DEAB0_0x2deab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEAB0_0x2deab0");
#endif

    switch (ctx->pc) {
        case 0x2dead8u: goto label_2dead8;
        case 0x2deb1cu: goto label_2deb1c;
        case 0x2deb44u: goto label_2deb44;
        case 0x2deb6cu: goto label_2deb6c;
        case 0x2deb94u: goto label_2deb94;
        case 0x2debacu: goto label_2debac;
        case 0x2debc4u: goto label_2debc4;
        case 0x2debd8u: goto label_2debd8;
        default: break;
    }

    ctx->pc = 0x2deab0u;

    // 0x2deab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2deab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2deab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2deab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2deab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2deabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2deabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2deac0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2deac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2deac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2deac8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2deac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deacc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2deaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dead0: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2DEAD0u;
    SET_GPR_U32(ctx, 31, 0x2DEAD8u);
    ctx->pc = 0x2DEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAD0u;
    // 0x2dead4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2DEAD0u, 0x2DEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAD8u;
label_2dead8:
    // 0x2dead8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dead8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deadc: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x2deadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2deae0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2deae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2deae4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2deae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2deae8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2deae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2deaec: 0x8e4700cc  lw          $a3, 0xCC($s2)
    ctx->pc = 0x2deaecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2deaf0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2deaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2deaf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2deaf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deaf8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2deaf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2deafc: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x2deafcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2deb00: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DEB00u;
    {
        const bool branch_taken_0x2deb00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB00u;
        // 0x2deb04: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb00) {
            ctx->pc = 0x2DEB20u;
            goto label_2deb20;
        }
    }
    ctx->pc = 0x2DEB08u;
    // 0x2deb08: 0x8e4600d0  lw          $a2, 0xD0($s2)
    ctx->pc = 0x2deb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x2deb0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2deb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2deb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb14: 0xc0a141c  jal         func_285070
    ctx->pc = 0x2DEB14u;
    SET_GPR_U32(ctx, 31, 0x2DEB1Cu);
    ctx->pc = 0x2DEB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB14u;
    // 0x2deb18: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x2DEB14u, 0x2DEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB1Cu;
label_2deb1c:
    // 0x2deb1c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2deb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2deb20:
    // 0x2deb20: 0x8e4700dc  lw          $a3, 0xDC($s2)
    ctx->pc = 0x2deb20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2deb24: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEB24u;
    {
        const bool branch_taken_0x2deb24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb24) {
            ctx->pc = 0x2DEB48u;
            goto label_2deb48;
        }
    }
    ctx->pc = 0x2DEB2Cu;
    // 0x2deb2c: 0x8e4600e0  lw          $a2, 0xE0($s2)
    ctx->pc = 0x2deb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2deb30: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2deb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2deb34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2deb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb38: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2deb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2deb3c: 0xc0a141c  jal         func_285070
    ctx->pc = 0x2DEB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB44u);
    ctx->pc = 0x2DEB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB3Cu;
    // 0x2deb40: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x2DEB3Cu, 0x2DEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB44u;
label_2deb44:
    // 0x2deb44: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2deb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2deb48:
    // 0x2deb48: 0x8e4700d4  lw          $a3, 0xD4($s2)
    ctx->pc = 0x2deb48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2deb4c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEB4Cu;
    {
        const bool branch_taken_0x2deb4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb4c) {
            ctx->pc = 0x2DEB70u;
            goto label_2deb70;
        }
    }
    ctx->pc = 0x2DEB54u;
    // 0x2deb54: 0x8e4600d8  lw          $a2, 0xD8($s2)
    ctx->pc = 0x2deb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x2deb58: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2deb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2deb5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2deb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb60: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2deb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2deb64: 0xc0a1e88  jal         func_287A20
    ctx->pc = 0x2DEB64u;
    SET_GPR_U32(ctx, 31, 0x2DEB6Cu);
    ctx->pc = 0x2DEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB64u;
    // 0x2deb68: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287A20u, 0x2DEB64u, 0x2DEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB6Cu;
label_2deb6c:
    // 0x2deb6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2deb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2deb70:
    // 0x2deb70: 0x8e4700e4  lw          $a3, 0xE4($s2)
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x2deb74: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEB74u;
    {
        const bool branch_taken_0x2deb74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb74) {
            ctx->pc = 0x2DEB98u;
            goto label_2deb98;
        }
    }
    ctx->pc = 0x2DEB7Cu;
    // 0x2deb7c: 0x8e4600e8  lw          $a2, 0xE8($s2)
    ctx->pc = 0x2deb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x2deb80: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2deb84: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2deb84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb88: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2deb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2deb8c: 0xc0a1e88  jal         func_287A20
    ctx->pc = 0x2DEB8Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB94u);
    ctx->pc = 0x2DEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB8Cu;
    // 0x2deb90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287A20u, 0x2DEB8Cu, 0x2DEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEB94u;
label_2deb94:
    // 0x2deb94: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2deb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2deb98:
    // 0x2deb98: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2deb9c: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x2deb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2deba0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2deba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2deba4: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2DEBA4u;
    SET_GPR_U32(ctx, 31, 0x2DEBACu);
    ctx->pc = 0x2DEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBA4u;
    // 0x2deba8: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2DEBA4u, 0x2DEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBACu;
label_2debac:
    // 0x2debac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2debacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2debb0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DEBB0u;
    {
        const bool branch_taken_0x2debb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBB0u;
        // 0x2debb4: 0x39283  sra         $s2, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debb0) {
            ctx->pc = 0x2DEBD8u;
            goto label_2debd8;
        }
    }
    ctx->pc = 0x2DEBB8u;
    // 0x2debb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2debb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2debbc: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2DEBBCu;
    SET_GPR_U32(ctx, 31, 0x2DEBC4u);
    ctx->pc = 0x2DEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBBCu;
    // 0x2debc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2DEBBCu, 0x2DEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBC4u;
label_2debc4:
    // 0x2debc4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2debc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2debc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2debc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2debcc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2debccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2debd0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2DEBD0u;
    SET_GPR_U32(ctx, 31, 0x2DEBD8u);
    ctx->pc = 0x2DEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEBD0u;
    // 0x2debd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2DEBD0u, 0x2DEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBD8u;
label_2debd8:
    // 0x2debd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2debd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2debdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2debdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2debe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2debe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2debe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2debe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2debe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2debe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2debec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBECu;
        // 0x2debf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEBF4u;
}
