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

// Function: sub_002717F0
// Address: 0x2717f0 - 0x271858
void sub_002717F0_0x2717f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002717F0_0x2717f0");
#endif

    switch (ctx->pc) {
        case 0x27184cu: goto label_27184c;
        default: break;
    }

    ctx->pc = 0x2717f0u;

    // 0x2717f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2717f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2717f4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2717f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2717f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2717fc: 0x84890008  lh          $t1, 0x8($a0)
    ctx->pc = 0x2717fcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x271800: 0x848a000a  lh          $t2, 0xA($a0)
    ctx->pc = 0x271800u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x271804: 0x91043  sra         $v0, $t1, 1
    ctx->pc = 0x271804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
    // 0x271808: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271808u;
    {
        const bool branch_taken_0x271808 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x27180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271808u;
        // 0x27180c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271808) {
            ctx->pc = 0x271818u;
            goto label_271818;
        }
    }
    ctx->pc = 0x271810u;
    // 0x271810: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x271810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x271814: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x271814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_271818:
    // 0x271818: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x271818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x27181c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x27181cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x271820: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x271820u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x271824: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271824u;
    {
        const bool branch_taken_0x271824 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x271828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271824u;
        // 0x271828: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271824) {
            ctx->pc = 0x271834u;
            goto label_271834;
        }
    }
    ctx->pc = 0x27182Cu;
    // 0x27182c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x271830: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x271830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_271834:
    // 0x271834: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x271834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x271838: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x271838u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x27183c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x27183cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x271840: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x271840u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x271844: 0xc09c540  jal         func_271500
    ctx->pc = 0x271844u;
    SET_GPR_U32(ctx, 31, 0x27184Cu);
    ctx->pc = 0x271848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271844u;
    // 0x271848: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x271844u, 0x27184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27184Cu;
label_27184c:
    // 0x27184c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271850: 0x3e00008  jr          $ra
    ctx->pc = 0x271850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271850u;
        // 0x271854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271858u;
}
