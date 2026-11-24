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

// Function: sub_0034E8D0
// Address: 0x34e8d0 - 0x34e950
void sub_0034E8D0_0x34e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E8D0_0x34e8d0");
#endif

    switch (ctx->pc) {
        case 0x34e8fcu: goto label_34e8fc;
        case 0x34e914u: goto label_34e914;
        case 0x34e934u: goto label_34e934;
        default: break;
    }

    ctx->pc = 0x34e8d0u;

    // 0x34e8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e8d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34e8d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34e8dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e8e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34e8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e8e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34e8ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34e8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34e8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8f4: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x34E8F4u;
    SET_GPR_U32(ctx, 31, 0x34E8FCu);
    ctx->pc = 0x34E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E8F4u;
    // 0x34e8f8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x34E8F4u, 0x34E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8FCu;
label_34e8fc:
    // 0x34e8fc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34e8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34e900: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x34e900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34e904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e908: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x34e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x34e90c: 0xc0a4688  jal         func_291A20
    ctx->pc = 0x34E90Cu;
    SET_GPR_U32(ctx, 31, 0x34E914u);
    ctx->pc = 0x34E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E90Cu;
    // 0x34e910: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A20u, 0x34E90Cu, 0x34E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E914u;
label_34e914:
    // 0x34e914: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34e914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34e918: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e91c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x34e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x34e920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e924: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x34e924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34e928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e92c: 0xc09565c  jal         func_255970
    ctx->pc = 0x34E92Cu;
    SET_GPR_U32(ctx, 31, 0x34E934u);
    ctx->pc = 0x34E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E92Cu;
    // 0x34e930: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x34E92Cu, 0x34E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E934u;
label_34e934:
    // 0x34e934: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x34e934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
    // 0x34e938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e93c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e948: 0x3e00008  jr          $ra
    ctx->pc = 0x34E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E948u;
        // 0x34e94c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E950u;
}
