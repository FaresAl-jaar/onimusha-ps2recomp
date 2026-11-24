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

// Function: sub_00209970
// Address: 0x209970 - 0x2099e0
void sub_00209970_0x209970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209970_0x209970");
#endif

    switch (ctx->pc) {
        case 0x209994u: goto label_209994;
        case 0x2099a8u: goto label_2099a8;
        default: break;
    }

    ctx->pc = 0x209970u;

    // 0x209970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209974: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x209974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x209978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20997c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x209980: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x209980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209984: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x209984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x209988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x209988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20998c: 0xc0821e6  jal         func_208798
    ctx->pc = 0x20998Cu;
    SET_GPR_U32(ctx, 31, 0x209994u);
    ctx->pc = 0x209990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20998Cu;
    // 0x209990: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x20998Cu, 0x209994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209994u;
label_209994:
    // 0x209994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x209998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20999c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2099a0: 0xc08995a  jal         func_226568
    ctx->pc = 0x2099A0u;
    SET_GPR_U32(ctx, 31, 0x2099A8u);
    ctx->pc = 0x2099A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099A0u;
    // 0x2099a4: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226568u, 0x2099A0u, 0x2099A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099A8u;
label_2099a8:
    // 0x2099a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2099a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2099ac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2099acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2099b0: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2099b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2099b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2099b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2099b8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2099b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2099bc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2099bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2099c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2099c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2099c4: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2099c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x2099c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2099c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2099cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2099ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2099d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2099d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2099d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2099d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2099d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2099D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099D8u;
        // 0x2099dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099E0u;
}
