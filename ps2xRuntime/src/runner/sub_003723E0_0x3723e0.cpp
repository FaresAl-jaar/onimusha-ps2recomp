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

// Function: sub_003723E0
// Address: 0x3723e0 - 0x372434
void sub_003723E0_0x3723e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003723E0_0x3723e0");
#endif

    switch (ctx->pc) {
        case 0x3723f4u: goto label_3723f4;
        default: break;
    }

    ctx->pc = 0x3723e0u;

    // 0x3723e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3723e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3723e4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3723e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3723e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3723e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3723ec: 0xc0dc9d0  jal         func_372740
    ctx->pc = 0x3723ECu;
    SET_GPR_U32(ctx, 31, 0x3723F4u);
    ctx->pc = 0x3723F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723ECu;
    // 0x3723f0: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372740u, 0x3723ECu, 0x3723F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723F4u;
label_3723f4:
    // 0x3723f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3723f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3723f8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3723F8u;
    {
        const bool branch_taken_0x3723f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3723FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723F8u;
        // 0x3723fc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723f8) {
            ctx->pc = 0x372428u;
            goto label_372428;
        }
    }
    ctx->pc = 0x372400u;
    // 0x372400: 0x90246d2e  lbu         $a0, 0x6D2E($at)
    ctx->pc = 0x372400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27950)));
    // 0x372404: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x372404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x372408: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x372408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x37240c: 0x90236f4e  lbu         $v1, 0x6F4E($at)
    ctx->pc = 0x37240cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6F4Eu));
    // 0x372410: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x372410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x372414: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x372414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x372418: 0xa0246d2e  sb          $a0, 0x6D2E($at)
    ctx->pc = 0x372418u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6D2Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6D2Eu, _value); } while (0);
    // 0x37241c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x37241cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x372420: 0xa0236f4e  sb          $v1, 0x6F4E($at)
    ctx->pc = 0x372420u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6F4Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6F4Eu, _value); } while (0);
    // 0x372424: 0x0  nop
    ctx->pc = 0x372424u;
    // NOP
label_372428:
    // 0x372428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37242c: 0x3e00008  jr          $ra
    ctx->pc = 0x37242Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37242Cu;
        // 0x372430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37242Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372434u;
}
