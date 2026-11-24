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

// Function: sub_001555B0
// Address: 0x1555b0 - 0x15566c
void sub_001555B0_0x1555b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001555B0_0x1555b0");
#endif

    switch (ctx->pc) {
        case 0x1555e0u: goto label_1555e0;
        case 0x1555e8u: goto label_1555e8;
        default: break;
    }

    ctx->pc = 0x1555b0u;

    // 0x1555b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1555b4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1555b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1555b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1555b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1555bc: 0x2484ad90  addiu       $a0, $a0, -0x5270
    ctx->pc = 0x1555bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946192));
    // 0x1555c0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1555c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40AD90u));
    // 0x1555c4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1555c4u;
    { uint32_t bits = FAST_READ32(0x40ADA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1555c8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1555cc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1555ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1555d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1555d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1555d4: 0x248465b0  addiu       $a0, $a0, 0x65B0
    ctx->pc = 0x1555d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    // 0x1555d8: 0xc0f9fb0  jal         func_3E7EC0
    ctx->pc = 0x1555D8u;
    SET_GPR_U32(ctx, 31, 0x1555E0u);
    ctx->pc = 0x1555DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555D8u;
    // 0x1555dc: 0xe4600010  swc1        $f0, 0x10($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7EC0u, 0x1555D8u, 0x1555E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555E0u;
label_1555e0:
    // 0x1555e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1555e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555e4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1555e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1555e8:
    // 0x1555e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1555ec: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1555ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1555f0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1555F0u;
    {
        const bool branch_taken_0x1555f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1555f0) {
            ctx->pc = 0x155628u;
            goto label_155628;
        }
    }
    ctx->pc = 0x1555F8u;
    // 0x1555f8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1555f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1555fc: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x155600: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x155600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x155604: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155608: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15560c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x15560cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155610: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x155614: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155618: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15561c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15561Cu;
    {
        const bool branch_taken_0x15561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15561Cu;
        // 0x155620: 0xa087005b  sb          $a3, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15561c) {
            ctx->pc = 0x155650u;
            goto label_155650;
        }
    }
    ctx->pc = 0x155624u;
    // 0x155624: 0x0  nop
    ctx->pc = 0x155624u;
    // NOP
label_155628:
    // 0x155628: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15562c: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x15562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x155630: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x155630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155634: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x155634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x155638: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x155638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15563c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x155640: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155644: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x155644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x155648: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x155648u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x15564c: 0x0  nop
    ctx->pc = 0x15564cu;
    // NOP
label_155650:
    // 0x155650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155654: 0x28640005  slti        $a0, $v1, 0x5
    ctx->pc = 0x155654u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x155658: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x155658u;
    {
        const bool branch_taken_0x155658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155658u;
        // 0x15565c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155658) {
            ctx->pc = 0x1555E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1555e8;
        }
    }
    ctx->pc = 0x155660u;
    // 0x155660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155664: 0x3e00008  jr          $ra
    ctx->pc = 0x155664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155664u;
        // 0x155668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15566Cu;
}
