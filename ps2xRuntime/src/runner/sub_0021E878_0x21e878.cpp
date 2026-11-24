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

// Function: sub_0021E878
// Address: 0x21e878 - 0x21e910
void sub_0021E878_0x21e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E878_0x21e878");
#endif

    switch (ctx->pc) {
        case 0x21e8a8u: goto label_21e8a8;
        default: break;
    }

    ctx->pc = 0x21e878u;

    // 0x21e878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e87c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e888: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21e888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e88c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e890: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21e890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e894: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21e898: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21E898u;
    {
        const bool branch_taken_0x21e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E898u;
        // 0x21e89c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e898) {
            ctx->pc = 0x21E8FCu;
            goto label_21e8fc;
        }
    }
    ctx->pc = 0x21E8A0u;
    // 0x21e8a0: 0xc087a44  jal         func_21E910
    ctx->pc = 0x21E8A0u;
    SET_GPR_U32(ctx, 31, 0x21E8A8u);
    ctx->pc = 0x21E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E910u, 0x21E8A0u, 0x21E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8A8u;
label_21e8a8:
    // 0x21e8a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21e8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e8b0: 0x50c20013  beql        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E8B0u;
    {
        const bool branch_taken_0x21e8b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x21e8b0) {
            ctx->pc = 0x21E8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E8B0u;
            // 0x21e8b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E900u;
            goto label_21e900;
        }
    }
    ctx->pc = 0x21E8B8u;
    // 0x21e8b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x21e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21e8bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21e8c0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21e8c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21e8c8: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x21e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e8cc: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x21e8ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21e8d0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x21e8d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x21e8d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21e8d8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x21e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21e8dc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x21e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x21e8e0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x21e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x21e8e4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x21e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21e8e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21e8ec: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x21e8ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e8f0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x21e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x21e8f4: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x21e8f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21e8f8: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x21e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_21e8fc:
    // 0x21e8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e900:
    // 0x21e900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e908: 0x3e00008  jr          $ra
    ctx->pc = 0x21E908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E908u;
        // 0x21e90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E910u;
}
