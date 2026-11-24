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

// Function: sub_001595A0
// Address: 0x1595a0 - 0x159604
void sub_001595A0_0x1595a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001595A0_0x1595a0");
#endif

    switch (ctx->pc) {
        case 0x1595ccu: goto label_1595cc;
        case 0x1595d8u: goto label_1595d8;
        case 0x1595e8u: goto label_1595e8;
        case 0x1595f8u: goto label_1595f8;
        default: break;
    }

    ctx->pc = 0x1595a0u;

    // 0x1595a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1595a4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1595a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1595a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1595a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1595ac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1595acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1595b0: 0xa42095a4  sh          $zero, -0x6A5C($at)
    ctx->pc = 0x1595b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
    // 0x1595b4: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
    // 0x1595b8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1595bc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1595c0: 0x34456000  ori         $a1, $v0, 0x6000
    ctx->pc = 0x1595c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1595c4: 0xc05e390  jal         func_178E40
    ctx->pc = 0x1595C4u;
    SET_GPR_U32(ctx, 31, 0x1595CCu);
    ctx->pc = 0x1595C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595C4u;
    // 0x1595c8: 0xa42095a6  sh          $zero, -0x6A5A($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294940070), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x1595C4u, 0x1595CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595CCu;
label_1595cc:
    // 0x1595cc: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x1595ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x1595d0: 0xc054d98  jal         func_153660
    ctx->pc = 0x1595D0u;
    SET_GPR_U32(ctx, 31, 0x1595D8u);
    ctx->pc = 0x1595D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595D0u;
    // 0x1595d4: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x1595D0u, 0x1595D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595D8u;
label_1595d8:
    // 0x1595d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1595dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1595dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1595e0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x1595E0u;
    SET_GPR_U32(ctx, 31, 0x1595E8u);
    ctx->pc = 0x1595E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595E0u;
    // 0x1595e4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x1595E0u, 0x1595E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595E8u;
label_1595e8:
    // 0x1595e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1595ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1595f0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x1595F0u;
    SET_GPR_U32(ctx, 31, 0x1595F8u);
    ctx->pc = 0x1595F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595F0u;
    // 0x1595f4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x1595F0u, 0x1595F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595F8u;
label_1595f8:
    // 0x1595f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1595f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1595fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1595FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595FCu;
        // 0x159600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1595FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159604u;
}
